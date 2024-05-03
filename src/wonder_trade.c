#include "global.h"
#include "pokemon.h"
#include "strings.h"
#include "random.h"
#include "text.h"
#include "event_data.h"
#include "region_map.h"
#include "constants/species.h"
#include "constants/items.h"
#include "constants/abilities.h"
#include "data/text/wonder_trade_OT_names.h"
#include "constants/region_map_sections.h"
#include "item.h"
#include "constants/item.h"
#include "constants/hold_effects.h"
#include "mail.h"
#include "constants/pokemon.h"
#include "party_menu.h"
#include "field_weather.h"
#include "constants/weather.h"
#include "battle.h" // A workaround to include the expansion's constants/form_change_types.h without breaking Pret/Pokeemerald compatibility.
#include "string_util.h"
#include "daycare.h"
#include "wonder_trade.h"

// This file's functions.
static u16 PickRandomSpecies(void);
static u8 GetWonderTradeOT(u8 *name);
static u16 GetWonderTradeEvolutionTargetSpecies(struct Pokemon *mon);
static u32 GetEvolutionSpecies(u16 speciesId);
static bool32 IsSpeciesFamilyMegaEvolutionCompatible(u16 species, u16 heldStone);
static u16 GetValidHeldItemForSpecies(u16 speciesId);

struct WonderTrade {
    u8 nickname[POKEMON_NAME_LENGTH + 1];
    u16 species;
    u8 ivs[NUM_STATS];
    u8 abilityNum;
    u32 otId;
    u8 conditions[CONTEST_CATEGORIES_COUNT];
    u32 personality;
    u16 heldItem;
    u8 mailNum;
    u8 otName[TRAINER_NAME_LENGTH + 1];
    u8 otGender;
    u8 sheen;
    u16 requestedSpecies;
};

#ifndef RHH_EXPANSION
// This is a list of items that are not used in vanilla.
// Feel free to delete it and remove the check that uses it,
// if you use the pokeemerald-expansion.
static const u16 sIsInvalidItem[] = {
    [ITEM_034]            = TRUE,
    [ITEM_035]            = TRUE,
    [ITEM_036]            = TRUE,
    [ITEM_037]            = TRUE,
    [ITEM_038]            = TRUE,
    [ITEM_039]            = TRUE,
    [ITEM_03A]            = TRUE,
    [ITEM_03B]            = TRUE,
    [ITEM_03C]            = TRUE,
    [ITEM_03D]            = TRUE,
    [ITEM_03E]            = TRUE,
    [ITEM_048]            = TRUE,
    [ITEM_052]            = TRUE,
    [ITEM_057]            = TRUE,
    [ITEM_058]            = TRUE,
    [ITEM_059]            = TRUE,
    [ITEM_05A]            = TRUE,
    [ITEM_05B]            = TRUE,
    [ITEM_05C]            = TRUE,
    [ITEM_063]            = TRUE,
    [ITEM_064]            = TRUE,
    [ITEM_065]            = TRUE,
    [ITEM_066]            = TRUE,
    [ITEM_069]            = TRUE,
    [ITEM_070]            = TRUE,
    [ITEM_071]            = TRUE,
    [ITEM_072]            = TRUE,
    [ITEM_073]            = TRUE,
    [ITEM_074]            = TRUE,
    [ITEM_075]            = TRUE,
    [ITEM_076]            = TRUE,
    [ITEM_077]            = TRUE,
    [ITEM_078]            = TRUE,
    [ITEM_UNUSED_BERRY_1] = TRUE,
    [ITEM_UNUSED_BERRY_2] = TRUE,
    [ITEM_UNUSED_BERRY_3] = TRUE,
    [ITEM_0E2]            = TRUE,
    [ITEM_0E3]            = TRUE,
    [ITEM_0E4]            = TRUE,
    [ITEM_0E5]            = TRUE,
    [ITEM_0E6]            = TRUE,
    [ITEM_0E7]            = TRUE,
    [ITEM_0E8]            = TRUE,
    [ITEM_0E9]            = TRUE,
    [ITEM_0EA]            = TRUE,
    [ITEM_0EB]            = TRUE,
    [ITEM_0EC]            = TRUE,
    [ITEM_0ED]            = TRUE,
    [ITEM_0EE]            = TRUE,
    [ITEM_0EF]            = TRUE,
    [ITEM_0F0]            = TRUE,
    [ITEM_0F1]            = TRUE,
    [ITEM_0F2]            = TRUE,
    [ITEM_0F3]            = TRUE,
    [ITEM_0F4]            = TRUE,
    [ITEM_0F5]            = TRUE,
    [ITEM_0F6]            = TRUE,
    [ITEM_0F7]            = TRUE,
    [ITEM_0F8]            = TRUE,
    [ITEM_0F9]            = TRUE,
    [ITEM_0FA]            = TRUE,
    [ITEM_0FB]            = TRUE,
    [ITEM_0FC]            = TRUE,
    [ITEM_0FD]            = TRUE,
    [ITEM_10B]            = TRUE,
    [ITEM_15B]            = TRUE,
    [ITEM_15C]            = TRUE,
};
#endif

static const u16 sIsValidSpecies[] = {
    SPECIES_BULBASAUR,
    // SPECIES_IVYSAUR,
    // SPECIES_VENUSAUR,
    // SPECIES_VENUSAUR_MEGA,
    // SPECIES_VENUSAUR_GIGANTAMAX,
    SPECIES_CHARMANDER,
    // SPECIES_CHARMELEON,
    // SPECIES_CHARIZARD,
    // SPECIES_CHARIZARD_MEGA_X,
    // SPECIES_CHARIZARD_GIGANTAMAX,
    SPECIES_SQUIRTLE,
    // SPECIES_WARTORTLE,
    // SPECIES_BLASTOISE,
    // SPECIES_BLASTOISE_MEGA,
    // SPECIES_BLASTOISE_GIGANTAMAX,
    SPECIES_CATERPIE,
    // SPECIES_METAPOD,
    // SPECIES_BUTTERFREE,
    // SPECIES_BUTTERFREE_GIGANTAMAX,
    SPECIES_WEEDLE,
    // SPECIES_KAKUNA,
    // SPECIES_BEEDRILL,
    // SPECIES_BEEDRILL_MEGA,
    SPECIES_PIDGEY,
    // SPECIES_PIDGEOTTO,
    // SPECIES_PIDGEOT,
    // SPECIES_PIDGEOT_MEGA,
    SPECIES_RATTATA,
    // SPECIES_RATICATE,
    SPECIES_RATTATA_ALOLAN,
    // SPECIES_RATICATE_ALOLAN,
    SPECIES_SPEAROW,
    // SPECIES_FEAROW,
    SPECIES_EKANS,
    // SPECIES_ARBOK,
    SPECIES_PICHU,
    // SPECIES_PIKACHU,
    // SPECIES_RAICHU,
    // SPECIES_RAICHU_ALOLAN,
    // SPECIES_PIKACHU_GIGANTAMAX,
    // SPECIES_GOROCHU,
    SPECIES_SANDSHREW,
    // SPECIES_SANDSLASH,
    SPECIES_SANDSHREW_ALOLAN,
    // SPECIES_SANDSLASH_ALOLAN,
    SPECIES_NIDORAN_F,
    // SPECIES_NIDORINA,
    // SPECIES_NIDOQUEEN,
    SPECIES_NIDORAN_M,
    // SPECIES_NIDORINO,
    // SPECIES_NIDOKING,
    SPECIES_CLEFFA,
    // SPECIES_CLEFAIRY,
    // SPECIES_CLEFABLE,
    SPECIES_VULPIX,
    // SPECIES_NINETALES,
    SPECIES_VULPIX_ALOLAN,
    // SPECIES_NINETALES_ALOLAN,
    SPECIES_IGGLYBUFF,
    // SPECIES_JIGGLYPUFF,
    // SPECIES_WIGGLYTUFF,
    // SPECIES_SCREAM_TAIL,
    SPECIES_ZUBAT,
    // SPECIES_GOLBAT,
    // SPECIES_CROBAT,
    SPECIES_ODDISH,
    // SPECIES_GLOOM,
    // SPECIES_VILEPLUME,
    // SPECIES_BELLOSSOM,
    SPECIES_PARAS,
    // SPECIES_PARASECT,
    SPECIES_VENONAT,
    // SPECIES_VENOMOTH,
    SPECIES_DIGLETT,
    // SPECIES_DUGTRIO,
    SPECIES_DIGLETT_ALOLAN,
    // SPECIES_DUGTRIO_ALOLAN,
    SPECIES_WIGLETT,
    // SPECIES_WUGTRIO,
    SPECIES_MEOWTH,
    // SPECIES_PERSIAN,
    SPECIES_MEOWTH_ALOLAN,
    // SPECIES_PERSIAN_ALOLAN,
    SPECIES_MEOWTH_GALARIAN,
    // SPECIES_PERRSERKER,
    SPECIES_PSYDUCK,
    // SPECIES_GOLDUCK,
    SPECIES_MANKEY,
    // SPECIES_PRIMEAPE,
    // SPECIES_ANNIHILAPE,
    SPECIES_GROWLITHE,
    // SPECIES_ARCANINE,
    SPECIES_GROWLITHE_HISUIAN,
    // SPECIES_ARCANINE_HISUIAN,
    SPECIES_POLIWAG,
    // SPECIES_POLIWHIRL,
    // SPECIES_POLIWRATH,
    // SPECIES_POLITOED,
    // SPECIES_POLIFROG,
    SPECIES_ABRA,
    // SPECIES_KADABRA,
    // SPECIES_ALAKAZAM,
    // SPECIES_ALAKAZAM_MEGA,
    SPECIES_MACHOP,
    // SPECIES_MACHOKE,
    // SPECIES_MACHAMP,
    // SPECIES_MACHAMP_GIGANTAMAX,
    SPECIES_BELLSPROUT,
    // SPECIES_WEEPINBELL,
    // SPECIES_VICTREEBEL,
    // SPECIES_PITCHTREEBEL,
    SPECIES_TENTACOOL,
    // SPECIES_TENTACRUEL,
    SPECIES_TOEDSCOOL,
    // SPECIES_TOEDSCRUEL,
    SPECIES_GEODUDE,
    // SPECIES_GRAVELER,
    // SPECIES_GOLEM,
    SPECIES_GEODUDE_ALOLAN,
    // SPECIES_GRAVELER_ALOLAN,
    // SPECIES_GOLEM_ALOLAN,
    SPECIES_PONYTA,
    // SPECIES_RAPIDASH,
    SPECIES_PONYTA_GALARIAN,
    // SPECIES_RAPIDASH_GALARIAN,
    SPECIES_SLOWPOKE,
    // SPECIES_SLOWBRO,
    // SPECIES_SLOWKING,
    // SPECIES_SLOWBRO_MEGA,
    SPECIES_SLOWPOKE_GALARIAN,
    // SPECIES_SLOWBRO_GALARIAN,
    // SPECIES_SLOWKING_GALARIAN,
    SPECIES_MAGNEMITE,
    // SPECIES_MAGNETON,
    // SPECIES_MAGNEZONE,
    // SPECIES_SANDY_SHOCKS,
    SPECIES_FARFETCHD,
    // SPECIES_NINFETCHD,
    SPECIES_FARFETCHD_GALARIAN,
    // SPECIES_SIRFETCHD,
    SPECIES_DODUO,
    // SPECIES_DODRIO,
    SPECIES_SEEL,
    // SPECIES_DEWGONG,
    SPECIES_GRIMER,
    // SPECIES_MUK,
    SPECIES_GRIMER_ALOLAN,
    // SPECIES_MUK_ALOLAN,
    SPECIES_SHELLDER,
    // SPECIES_CLOYSTER,
    SPECIES_GASTLY,
    // SPECIES_HAUNTER,
    // SPECIES_GENGAR,
    // SPECIES_GENGAR_MEGA,
    // SPECIES_GENGAR_GIGANTAMAX,
    SPECIES_ONIX,
    // SPECIES_CRYSTALIX,
    // SPECIES_STEELIX,
    // SPECIES_STEELIX_MEGA,
    SPECIES_DROWZEE,
    // SPECIES_HYPNO,
    SPECIES_KRABBY,
    // SPECIES_KINGLER,
    // SPECIES_KINGLER_GIGANTAMAX,
    SPECIES_VOLTORB,
    // SPECIES_ELECTRODE,
    SPECIES_VOLTORB_HISUIAN,
    // SPECIES_ELECTRODE_HISUIAN,
    SPECIES_EXEGGCUTE,
    // SPECIES_EXEGGUTOR,
    // SPECIES_EXEGGUTOR_ALOLAN,
    SPECIES_CUBONE,
    // SPECIES_MAROWAK,
    // SPECIES_MAROWAK_ALOLAN,
    SPECIES_TYROGUE,
    // SPECIES_HITMONLEE,
    // SPECIES_HITMONCHAN,
    // SPECIES_HITMONTOP,
    SPECIES_LICKITUNG,
    // SPECIES_LICKILICKY,
    // SPECIES_LICKITOLD,
    SPECIES_KOFFING,
    // SPECIES_WEEZING,
    // SPECIES_WEEZING_GALARIAN,
    SPECIES_RHYHORN,
    // SPECIES_RHYDON,
    // SPECIES_RHYPERIOR,
    SPECIES_HAPPINY,
    // SPECIES_CHANSEY,
    // SPECIES_BLISSEY,
    // SPECIES_HEARTEY,
    SPECIES_TANGELICA,
    // SPECIES_TANGELA,
    // SPECIES_TANGROWTH,
    // SPECIES_TANGEL,
    SPECIES_KANGASKHAN,
    // SPECIES_KANGASKHAN_MEGA,
    SPECIES_HORSEA,
    // SPECIES_SEADRA,
    // SPECIES_KINGDRA,
    SPECIES_GOLDEEN,
    // SPECIES_SEAKING,
    SPECIES_STARYU,
    // SPECIES_STARMIE,
    SPECIES_MIME_JR,
    // SPECIES_MR_MIME,
    // SPECIES_MR_MIME_GALARIAN,
    // SPECIES_MR_RIME,
    SPECIES_SCYTHER,
    // SPECIES_SCIZOR,
    // SPECIES_SCIZOR_MEGA,
    // SPECIES_KLEAVOR,
    SPECIES_SMOOCHUM,
    // SPECIES_JYNX,
    SPECIES_ELEKID,
    // SPECIES_ELECTABUZZ,
    // SPECIES_ELECTIVIRE,
    SPECIES_MAGBY,
    // SPECIES_MAGMAR,
    // SPECIES_MAGMORTAR,
    SPECIES_PINSIR,
    // SPECIES_PINSIR_MEGA,
    // SPECIES_PINPLUX,
    SPECIES_TAUROS,
    SPECIES_TAUROS_PALDEAN_COMBAT_BREED,
    SPECIES_TAUROS_PALDEAN_BLAZE_BREED,
    SPECIES_TAUROS_PALDEAN_AQUA_BREED,
    SPECIES_MAGIKARP,
    // SPECIES_GYARADOS,
    // SPECIES_GYARADOS_MEGA,
    SPECIES_LAPRAS,
    // SPECIES_LAPRAS_GIGANTAMAX,
    SPECIES_DITTO,
    SPECIES_EEVEE,
    // SPECIES_VAPOREON,
    // SPECIES_JOLTEON,
    // SPECIES_FLAREON,
    // SPECIES_ESPEON,
    // SPECIES_UMBREON,
    // SPECIES_LEAFEON,
    // SPECIES_GLACEON,
    // SPECIES_SYLVEON,
    // SPECIES_EEVEE_GIGANTAMAX,
    SPECIES_PORYGON,
    // SPECIES_PORYGON2,
    // SPECIES_PORYGON_Z,
    SPECIES_OMANYTE,
    // SPECIES_OMASTAR,
    SPECIES_KABUTO,
    // SPECIES_KABUTOPS,
    SPECIES_AERODACTYL,
    // SPECIES_AERODACTYL_MEGA,
    SPECIES_MUNCHLAX,
    // SPECIES_SNORLAX,
    // SPECIES_SNORLAX_GIGANTAMAX,
    // SPECIES_ARTICUNO,
    // SPECIES_ZAPDOS,
    // SPECIES_MOLTRES,
    // SPECIES_ARTICUNO_GALARIAN,
    // SPECIES_ZAPDOS_GALARIAN,
    // SPECIES_MOLTRES_GALARIAN,
    SPECIES_DRATINI,
    // SPECIES_DRAGONAIR,
    // SPECIES_DRAGONITE,
    // SPECIES_MEWTWO,
    // SPECIES_MEW,
    SPECIES_CHIKORITA,
    // SPECIES_BAYLEEF,
    // SPECIES_MEGANIUM,
    SPECIES_CYNDAQUIL,
    // SPECIES_QUILAVA,
    // SPECIES_TYPHLOSION,
    // SPECIES_TYPHLOSION_HISUIAN,
    SPECIES_TOTODILE,
    // SPECIES_CROCONAW,
    // SPECIES_FERALIGATR,
    SPECIES_SENTRET,
    // SPECIES_FURRET,
    SPECIES_HOOTHOOT,
    // SPECIES_WATCHOWL,
    // SPECIES_NOCTOWL,
    SPECIES_LEDYSTAR,
    // SPECIES_LEDYBA,
    // SPECIES_LEDIAN,
    SPECIES_SPINARAK,
    // SPECIES_ARIADOS,
    SPECIES_CHINCHOU,
    // SPECIES_LANTURN,
    SPECIES_TOGEPI,
    // SPECIES_TOGETIC,
    // SPECIES_TOGEKISS,
    SPECIES_NATU,
    // SPECIES_SATU,
    // SPECIES_XATU,
    SPECIES_MAREEP,
    // SPECIES_FLAAFFY,
    // SPECIES_AMPHAROS,
    // SPECIES_AMPHAROS_MEGA,
    SPECIES_AZURILL,
    // SPECIES_MARILL,
    // SPECIES_AZUMARILL,
    SPECIES_BONSLY,
    // SPECIES_SUDOWOODO,
    SPECIES_HOPPIP,
    // SPECIES_SKIPLOOM,
    // SPECIES_JUMPLUFF,
    SPECIES_AIPOM,
    // SPECIES_AMBIPOM,
    SPECIES_SUNKERN,
    // SPECIES_SUNFLORA,
    SPECIES_YANMA,
    // SPECIES_YANMEGA,
    SPECIES_WOOPER,
    // SPECIES_QUAGSIRE,
    SPECIES_WOOPER_PALDEAN,
    // SPECIES_CLODSIRE,
    SPECIES_MURKROW,
    // SPECIES_HONCHKROW,
    SPECIES_MISDREAVUS,
    // SPECIES_MISMAGIUS,
    // SPECIES_FLUTTER_MANE,
    SPECIES_UNOWN,
    SPECIES_WYNAUT,
    // SPECIES_WOBBUFFET,
    SPECIES_GIRAFARIG,
    // SPECIES_FARIGIRAF,
    SPECIES_PINECO,
    // SPECIES_FORRETRESS,
    SPECIES_DUNSPARCE,
    // SPECIES_DUDUNSPARCE,
    SPECIES_GLIGAR,
    // SPECIES_GLISCOR,
    SPECIES_SNUBBULL,
    // SPECIES_GRANBULL,
    SPECIES_QWILFISH,
    // SPECIES_QWILSPARK,
    SPECIES_QWILFISH_HISUIAN,
    // SPECIES_OVERQWIL,
    SPECIES_SHUCKLE,
    SPECIES_HERACROSS,
    // SPECIES_HERACROSS_MEGA,
    SPECIES_SNEASEL,
    // SPECIES_WEAVILE,
    SPECIES_SNEASEL_HISUIAN,
    // SPECIES_SNEASLER,
    SPECIES_TEDDIURSA,
    // SPECIES_URSARING,
    // SPECIES_URSALUNA,
    // SPECIES_URSALUNA_BLOODMOON,
    SPECIES_SLUGMA,
    // SPECIES_MAGCARGO,
    SPECIES_SWINUB,
    // SPECIES_PILOSWINE,
    // SPECIES_MAMOSWINE,
    SPECIES_CORSOLA,
    SPECIES_CORSOLA_GALARIAN,
    // SPECIES_CURSOLA,
    SPECIES_REMORAID,
    // SPECIES_OCTILLERY,
    SPECIES_DELIBIRD,
    // SPECIES_IRON_BUNDLE,
    SPECIES_MANTYKE,
    // SPECIES_MANTINE,
    SPECIES_SKARMORY,
    SPECIES_HOUNDOUR,
    // SPECIES_HOUNDOOM,
    // SPECIES_HOUNDOOM_MEGA,
    SPECIES_PHANPY,
    // SPECIES_DONPHAN,
    // SPECIES_GREAT_TUSK,
    // SPECIES_IRON_TREADS,
    SPECIES_STANTLER,
    // SPECIES_WYRDEER,
    SPECIES_SMEARGLE,
    SPECIES_MILTANK,
    // SPECIES_RAIKOU,
    // SPECIES_ENTEI,
    // SPECIES_SUICUNE,
    SPECIES_LARVITAR,
    // SPECIES_PUPITAR,
    // SPECIES_TYRANITAR,
    // SPECIES_TYRANITAR_MEGA,
    // SPECIES_IRON_THORNS,
    // SPECIES_LUGIA,
    // SPECIES_HO_OH,
    // SPECIES_CELEBI,
    SPECIES_FLABEAR,
    // SPECIES_VOLBEAR,
    // SPECIES_DYNABEAR,
    SPECIES_CRUISEAL,
    // SPECIES_MARICE,
    // SPECIES_LAKENESS,
    SPECIES_KOTORA,
    // SPECIES_RAITORA,
    SPECIES_VOONAIL,
    // SPECIES_KYONPAN,
    SPECIES_LIONBOMB,
    SPECIES_RINRING,
    // SPECIES_BELLRUN,
    SPECIES_RIBBIRABB,
    SPECIES_WOLFMAN,
    // SPECIES_WARWOLF,
    SPECIES_KAZUFROG,
    // SPECIES_TOADRYU,
    SPECIES_SICKLEASEL,
    SPECIES_LIMANBO,
    // SPECIES_BIMANBO,
    SPECIES_NOKOCHI,
    // SPECIES_ANKOCHI,
    SPECIES_MODELION,
    SPECIES_SHADRAKE,
    SPECIES_JAGG,
    SPECIES_IKARI,
    SPECIES_HANAMOGURA,
    SPECIES_LEVIRAY,
    SPECIES_TUSKRUSH,
    SPECIES_BUU,
    SPECIES_CACTORMUS,
    SPECIES_BLOTTLE,
    SPECIES_PENDRAKEN,
    // SPECIES_CHEEP,
    // SPECIES_JABETTA,
    SPECIES_RAMOOSE,
    SPECIES_GORILLAIMO,
    // SPECIES_FLAMEPAW,
    // SPECIES_RUFFMIST,
    // SPECIES_SPARKMANE,
    // SPECIES_PETALOUND,
    SPECIES_FENNEKIN,
    // SPECIES_BRAIXEN,
    // SPECIES_DELPHOX,
    SPECIES_DRIFLOON,
    // SPECIES_DRIFBLIM,
    SPECIES_CACNEA,
    // SPECIES_CACTURNE,
    SPECIES_CLAMPERL,
    // SPECIES_HUNTAIL,
    // SPECIES_GOREBYSS,
    // SPECIES_GROTESQUE,
    SPECIES_TYNAMO,
    // SPECIES_EELEKTRIK,
    // SPECIES_EELEKTROSS,
    SPECIES_BOMBIRA,
    // SPECIES_BOMBIRDIER,
    SPECIES_BURMY,
    // SPECIES_WORMADAM,
    // SPECIES_MOTHIM,
    SPECIES_KOMALA,
    SPECIES_CHATOT,
    SPECIES_CRANIDOS,
    // SPECIES_RAMPARDOS,
    SPECIES_CHERUBI,
    // SPECIES_CHERRIM,
    SPECIES_PURRLOIN,
    // SPECIES_LIEPARD,
    SPECIES_LUVDISC,
    // SPECIES_ALOMOMOLA,
    SPECIES_SHUPPET,
    // SPECIES_BANETTE,
    // SPECIES_BANETTE_MEGA,
    SPECIES_INKAY,
    // SPECIES_MALAMAR,
    SPECIES_KRICKETOT,
    // SPECIES_KRICKETUNE,
    SPECIES_SNORUNT,
    // SPECIES_GLALIE,
    // SPECIES_GLALIE_MEGA,
    // SPECIES_FROSLASS,
    SPECIES_SKORUPI,
    // SPECIES_DRAPION,
    SPECIES_BALTOY,
    // SPECIES_CLAYDOL,
    SPECIES_POPPLIO,
    // SPECIES_BRIONNE,
    // SPECIES_PRIMARINA,
    SPECIES_ARON,
    // SPECIES_LAIRON,
    // SPECIES_AGGRON,
    // SPECIES_AGGRON_MEGA,
    SPECIES_CARVANHA,
    // SPECIES_SHARPEDO,
    // SPECIES_SHARPEDO_MEGA,
    SPECIES_BARBOACH,
    // SPECIES_WHISCASH,
    SPECIES_EMOLGA,
    SPECIES_BLIPBUG,
    // SPECIES_DOTTLER,
    // SPECIES_ORBEETLE,
    // SPECIES_ORBEETLE_GIGANTAMAX,
    SPECIES_MAREANIE,
    // SPECIES_TOXAPEX,
    SPECIES_FLABEBE,
    // SPECIES_FLOETTE,
    // SPECIES_FLORGES,
    SPECIES_FLOETTE_ETERNAL,
    SPECIES_SKITTY,
    // SPECIES_DELCATTY,
    SPECIES_MELTAN,
    // SPECIES_MELMETAL,
    // SPECIES_MELMETAL_GIGANTAMAX,
    SPECIES_TREECKO,
    // SPECIES_GROVYLE,
    // SPECIES_SCEPTILE,
    // SPECIES_SCEPTILE_MEGA,
    SPECIES_TORCHIC,
    // SPECIES_COMBUSKEN,
    // SPECIES_BLAZIKEN,
    // SPECIES_BLAZIKEN_MEGA,
    SPECIES_MUDKIP,
    // SPECIES_MARSHTOMP,
    // SPECIES_SWAMPERT,
    // SPECIES_SWAMPERT_MEGA,
    SPECIES_POOCHYENA,
    // SPECIES_MIGHTYENA,
    SPECIES_ZIGZAGOON,
    // SPECIES_LINOONE,
    SPECIES_ZIGZAGOON_GALARIAN,
    // SPECIES_LINOONE_GALARIAN,
    // SPECIES_OBSTAGOON,
    SPECIES_SKWOVET,
    // SPECIES_GREEDENT,
    SPECIES_BIDOOF,
    // SPECIES_BIBAREL,
    SPECIES_MINCCINO,
    // SPECIES_CINCCINO,
    SPECIES_WURMPLE,
    // SPECIES_SILCOON,
    // SPECIES_BEAUTIFLY,
    // SPECIES_CASCOON,
    // SPECIES_DUSTOX,
    SPECIES_SCATTERBUG,
    // SPECIES_SPEWPA,
    // SPECIES_VIVILLON,
    SPECIES_LOTAD,
    // SPECIES_LOMBRE,
    // SPECIES_LUDICOLO,
    SPECIES_SEEDOT,
    // SPECIES_NUZLEAF,
    // SPECIES_SHIFTRY,
    SPECIES_PETILIL,
    // SPECIES_LILLIGANT,
    // SPECIES_LILLIGANT_HISUIAN,
    SPECIES_TAILLOW,
    // SPECIES_SWELLOW,
    SPECIES_WINGULL,
    // SPECIES_PELIPPER,
    SPECIES_ROOKIDEE,
    // SPECIES_CORVISQUIRE,
    // SPECIES_CORVIKNIGHT,
    // SPECIES_CORVIKNIGHT_GIGANTAMAX,
    SPECIES_WATTREL,
    // SPECIES_KILOWATTREL,
    SPECIES_FLETCHLING,
    // SPECIES_FLETCHINDER,
    // SPECIES_TALONFLAME,
    SPECIES_TADBULB,
    // SPECIES_BELLIBOLT,
    SPECIES_RALTS,
    // SPECIES_KIRLIA,
    // SPECIES_GARDEVOIR,
    // SPECIES_GARDEVOIR_MEGA,
    // SPECIES_GALLADE,
    // SPECIES_GALLADE_MEGA,
    // SPECIES_IRON_VALIANT,
    SPECIES_PIPLUP,
    // SPECIES_PRINPLUP,
    // SPECIES_EMPOLEON,
    SPECIES_CUTIEFLY,
    // SPECIES_RIBOMBEE,
    SPECIES_SURSKIT,
    // SPECIES_MASQUERAIN,
    SPECIES_SHROOMISH,
    // SPECIES_BRELOOM,
    SPECIES_ROGGENROLA,
    // SPECIES_BOLDORE,
    // SPECIES_GIGALITH,
    SPECIES_SLAKOTH,
    // SPECIES_VIGOROTH,
    // SPECIES_SLAKING,
    SPECIES_NINCADA,
    // SPECIES_NINJASK,
    // SPECIES_SHEDINJA,
    SPECIES_GRUBBIN,
    // SPECIES_CHARJABUG,
    // SPECIES_VIKAVOLT,
    SPECIES_WHISMUR,
    // SPECIES_LOUDRED,
    // SPECIES_EXPLOUD,
    SPECIES_MAKUHITA,
    // SPECIES_HARIYAMA,
    // SPECIES_IRON_HANDS,
    SPECIES_NOSEPASS,
    // SPECIES_PROBOPASS,
    SPECIES_SABLEYE,
    // SPECIES_SABLEYE_MEGA,
    SPECIES_MAWILE,
    // SPECIES_MAWILE_MEGA,
    SPECIES_MEDITITE,
    // SPECIES_MEDICHAM,
    // SPECIES_MEDICHAM_MEGA,
    SPECIES_ELECTRIKE,
    // SPECIES_MANECTRIC,
    // SPECIES_MANECTRIC_MEGA,
    SPECIES_PLUSLE,
    SPECIES_MINUN,
    SPECIES_VOLBEAT,
    SPECIES_ILLUMISE,
    SPECIES_BUDEW,
    // SPECIES_ROSELIA,
    // SPECIES_ROSERADE,
    SPECIES_BOUNSWEET,
    // SPECIES_STEENEE,
    // SPECIES_TSAREENA,
    SPECIES_GULPIN,
    // SPECIES_SWALOT,
    SPECIES_WAILMER,
    // SPECIES_WAILORD,
    SPECIES_FINNEON,
    // SPECIES_LUMINEON,
    SPECIES_NUMEL,
    // SPECIES_CAMERUPT,
    // SPECIES_CAMERUPT_MEGA,
    SPECIES_TORKOAL,
    SPECIES_TURTWIG,
    // SPECIES_GROTLE,
    // SPECIES_TORTERRA,
    SPECIES_SPOINK,
    // SPECIES_GRUMPIG,
    SPECIES_SMOLIV,
    // SPECIES_DOLLIV,
    // SPECIES_ARBOLIVA,
    SPECIES_SPINDA,
    SPECIES_KLAWF,
    SPECIES_TYMPOLE,
    // SPECIES_PALPITOAD,
    // SPECIES_SEISMITOAD,
    SPECIES_MASCHIFF,
    // SPECIES_MABOSSTIFF,
    SPECIES_TRAPINCH,
    // SPECIES_VIBRAVA,
    // SPECIES_FLYGON,
    SPECIES_AXEW,
    // SPECIES_FRAXURE,
    // SPECIES_HAXORUS,
    SPECIES_AUDINO,
    // SPECIES_AUDINO_MEGA,
    SPECIES_SWABLU,
    // SPECIES_ALTARIA,
    // SPECIES_ALTARIA_MEGA,
    SPECIES_ZANGOOSE,
    SPECIES_SEVIPER,
    SPECIES_MIMIKYU,
    SPECIES_LUNATONE,
    SPECIES_SOLROCK,
    SPECIES_SANDILE,
    // SPECIES_KROKOROK,
    // SPECIES_KROOKODILE,
    SPECIES_FERROSEED,
    // SPECIES_FERROTHORN,
    SPECIES_TRUBBISH,
    // SPECIES_GARBODOR,
    // SPECIES_GARBODOR_GIGANTAMAX,
    SPECIES_BRUXISH,
    SPECIES_FRILLISH,
    // SPECIES_JELLICENT,
    SPECIES_CROAGUNK,
    // SPECIES_TOXICROAK,
    SPECIES_CORPHISH,
    // SPECIES_CRAWDAUNT,
    SPECIES_HAWLUCHA,
    SPECIES_LILEEP,
    // SPECIES_CRADILY,
    SPECIES_ANORITH,
    // SPECIES_ARMALDO,
    SPECIES_ARCHEN,
    // SPECIES_ARCHEOPS,
    SPECIES_FEEBAS,
    // SPECIES_MILOTIC,
    SPECIES_SHELLOS,
    // SPECIES_GASTRODON,
    SPECIES_SPIRITOMB,
    SPECIES_CARNIVINE,
    SPECIES_SHINX,
    // SPECIES_LUXIO,
    // SPECIES_LUXRAY,
    SPECIES_PAWNIARD,
    // SPECIES_BISHARP,
    // SPECIES_KINGAMBIT,
    SPECIES_FOONGUS,
    // SPECIES_AMOONGUSS,
    // SPECIES_BRUTE_BONNET,
    SPECIES_LITWICK,
    // SPECIES_LAMPENT,
    // SPECIES_CHANDELURE,
    SPECIES_CASTFORM,
    SPECIES_KECLEON,
    SPECIES_COTTONEE,
    // SPECIES_WHIMSICOTT,
    SPECIES_DUSKULL,
    // SPECIES_DUSCLOPS,
    // SPECIES_DUSKNOIR,
    SPECIES_GOLETT,
    // SPECIES_GOLURK,
    SPECIES_TROPIUS,
    SPECIES_CHIMCHAR,
    // SPECIES_MONFERNO,
    // SPECIES_INFERNAPE,
    SPECIES_ESPURR,
    // SPECIES_MEOWSTIC,
    SPECIES_INDEEDEE,
    SPECIES_MARACTUS,
    SPECIES_CHINGLING,
    // SPECIES_CHIMECHO,
    SPECIES_CRESSELIA,
    SPECIES_HATENNA,
    // SPECIES_HATTREM,
    // SPECIES_HATTERENE,
    // SPECIES_HATTERENE_GIGANTAMAX,
    SPECIES_GOTHITA,
    // SPECIES_GOTHORITA,
    // SPECIES_GOTHITELLE,
    SPECIES_ABSOL,
    // SPECIES_ABSOL_MEGA,
    SPECIES_SPHEAL,
    // SPECIES_SEALEO,
    // SPECIES_WALREIN,
    SPECIES_RELICANTH,
    SPECIES_PHANTUMP,
    // SPECIES_TREVENANT,
    SPECIES_MAGEARNA,
    SPECIES_LARVESTA,
    // SPECIES_VOLCARONA,
    // SPECIES_SLITHER_WING,
    // SPECIES_IRON_MOTH,
    SPECIES_PHEROMOSA,
    SPECIES_NIHILEGO,
    SPECIES_GUZZLORD,
    SPECIES_CELESTEELA,
    SPECIES_KARTANA,
    SPECIES_MELOETTA,
    SPECIES_MARSHADOW,
    SPECIES_BAGON,
    // SPECIES_SHELGON,
    // SPECIES_SALAMENCE,
    // SPECIES_ROARING_MOON,
    SPECIES_DEINO,
    // SPECIES_ZWEILOUS,
    // SPECIES_HYDREIGON,
    // SPECIES_IRON_JUGULIS,
    SPECIES_BELDUM,
    // SPECIES_METANG,
    // SPECIES_METAGROSS,
    SPECIES_GIBLE,
    // SPECIES_GABITE,
    // SPECIES_GARCHOMP,
    SPECIES_RIOLU,
    // SPECIES_LUCARIO,
    // SPECIES_LUCARIO_MEGA,
    SPECIES_SNOVER,
    // SPECIES_ABOMASNOW,
    // SPECIES_ABOMASNOW_MEGA,
    SPECIES_CARBINK,
    // SPECIES_DIANCIE,
    // SPECIES_DIANCIE_MEGA,
    SPECIES_PHIONE,
    // SPECIES_MANAPHY,
    // SPECIES_REGIROCK,
    // SPECIES_REGICE,
    // SPECIES_REGISTEEL,
    // SPECIES_REGIELEKI,
    // SPECIES_REGIDRAGO,
    // SPECIES_REGIGIGAS,
    // SPECIES_LATIAS,
    // SPECIES_LATIAS_MEGA,
    // SPECIES_LATIOS,
    // SPECIES_LATIOS_MEGA,
    // SPECIES_KYOGRE,
    // SPECIES_KYOGRE_PRIMAL,
    // SPECIES_GROUDON,
    // SPECIES_GROUDON_PRIMAL,
    // SPECIES_RAYQUAZA,
    // SPECIES_RAYQUAZA_MEGA,
    // SPECIES_JIRACHI,
    // SPECIES_DEOXYS,
};

static u16 PickRandomSpecies(void) // picks only base forms
{
    u16 species = sIsValidSpecies[Random() % NELEMS(sIsValidSpecies)];
    return species;
}

static u8 GetWonderTradeOT(u8 *name)
{
    u8 randGender = (Random() % 2); // 0 for male, 1 for female
    u8 numOTNames = 250;
    u8 selectedName = Random() %numOTNames;
    u8 i;
    if (randGender == MALE) // male OT selected
    {
        randGender = 0;
        for (i = 0; i < 8; ++i)
        {
            name[i] = maleWTNames[selectedName][i];
        }
        name[8] = EOS;
    }
    else                    // female OT selected
    {
        randGender = 0xFF;
        for (i = 0; i < 8; ++i)
        {
            name[i] = femaleWTNames[selectedName][i];
        }
        name[8] = EOS;
    }
    return randGender;
}

void CreateWonderTradePokemon(void)
{
    u16 wonderTradeSpecies = PickRandomSpecies();
    u8 playerMonLevel = GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_LEVEL);
    u8 chanceToEvolve = Random() % 99;
    u16 newHeldItem = ITEM_NONE;
    u16 playerMonHeldItem = GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_HELD_ITEM);
    u32 i;
#ifdef RHH_EXPANSION
    u8 abilityNum;
#endif
    u8 monName[POKEMON_NAME_LENGTH + 1];
    u8 otName[PLAYER_NAME_LENGTH + 1];
    u8 genderOT = GetWonderTradeOT(otName);
    u8 metLocation = METLOC_IN_GAME_TRADE;
    struct WonderTrade sWonderTrades[] =
    {
        [0] = {
            .nickname = _(""),
            .species = wonderTradeSpecies,
            .ivs = {(Random() % 32), (Random() % 32), (Random() % 32), (Random() % 32), (Random() % 32), (Random() % 32)},
            .abilityNum = (Random() % 2), // Can't use NUM_NORMAL_ABILITY_SLOTS because it's not present in Pret/Pokeemerald.
            .otId = 0, // Handled by CreateMon->CreateBoxMon.
            .conditions = {0, 0, 0, 0, 0},
            .personality = 0, // Handled by CreateMon->CreateBoxMon.
            .heldItem = newHeldItem,
            .mailNum = -1,
            .otName = _("ERROR"),
            .otGender = FEMALE, // Decided by the personality generated in CreateMon->CreateBoxMon.
            .sheen = 0,
            .requestedSpecies = GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPECIES)
        },
    };
    struct WonderTrade *wonderTrade = &sWonderTrades[0];

    // Creates the base of a Pokémon in the first slot of a nonexistent enemy's party.
    CreateMon(&gEnemyParty[0], wonderTradeSpecies, playerMonLevel, USE_RANDOM_IVS, FALSE, 0, OT_ID_PRESET, ((Random() << 16) | Random()));

    // 10% chance of having the generated Wonder Traded 'mon carry an item.
    if ((Random() % 99) < 10)
        newHeldItem = GetValidHeldItemForSpecies(wonderTradeSpecies);

    const struct Evolution *evolutions = GetSpeciesEvolutions(wonderTradeSpecies);

    if (playerMonHeldItem == ITEM_NONE && evolutions != NULL)
    {
        for (i = 0; evolutions[i].method != EVOLUTIONS_END; i++)
        {
            if (evolutions[i].method == EVO_TRADE_ITEM && Random() % 100 < 50)
            {
                // 30% chance for the in coming Pokémon to hold the item they need to evolve if they need one
                if (Random() % 100 <= 29)
                {
                    newHeldItem = evolutions[i].param;
                    SetMonData(&gEnemyParty[0], MON_DATA_HELD_ITEM, &newHeldItem);
                }
            }
        }
    }

    if (chanceToEvolve < 50) // 50% to evolve once.
    {
        wonderTradeSpecies = GetWonderTradeEvolutionTargetSpecies(&gEnemyParty[0]);
        SetMonData(&gEnemyParty[0], MON_DATA_SPECIES, &wonderTradeSpecies);
    }

    if (chanceToEvolve < 30) // 30% to evolve into the highest stage.
    {
        wonderTradeSpecies = GetWonderTradeEvolutionTargetSpecies(&gEnemyParty[0]);
        SetMonData(&gEnemyParty[0], MON_DATA_SPECIES, &wonderTradeSpecies);
    }

#ifdef RHH_EXPANSION
    // 10% chance of giving the incoming Pokémon their HA, if they have one
    if (gSpeciesInfo[wonderTradeSpecies].abilities[2] != ABILITY_NONE && (Random() % 99) < 50)
    {
        if ((Random() % 99) < 10)
        {
            abilityNum = 2;
            SetMonData(&gEnemyParty[0], MON_DATA_ABILITY_NUM, &abilityNum);
        }
    }
#endif

    SetMonData(&gEnemyParty[0], MON_DATA_HELD_ITEM, &newHeldItem);
    SetMonData(&gEnemyParty[0], MON_DATA_HP_IV, &wonderTrade->ivs[0]);
    SetMonData(&gEnemyParty[0], MON_DATA_ATK_IV, &wonderTrade->ivs[1]);
    SetMonData(&gEnemyParty[0], MON_DATA_DEF_IV, &wonderTrade->ivs[2]);
    SetMonData(&gEnemyParty[0], MON_DATA_SPEED_IV, &wonderTrade->ivs[3]);
    SetMonData(&gEnemyParty[0], MON_DATA_SPATK_IV, &wonderTrade->ivs[4]);
    SetMonData(&gEnemyParty[0], MON_DATA_SPDEF_IV, &wonderTrade->ivs[5]);
#ifdef RHH_EXPANSION
    StringCopy(monName, GetSpeciesName(wonderTradeSpecies));
#else
    GetSpeciesName(monName, wonderTradeSpecies);
#endif
    SetMonData(&gEnemyParty[0], MON_DATA_NICKNAME, monName);
    SetMonData(&gEnemyParty[0], MON_DATA_OT_NAME, otName);
    SetMonData(&gEnemyParty[0], MON_DATA_BEAUTY, &wonderTrade->conditions[1]);
    SetMonData(&gEnemyParty[0], MON_DATA_CUTE, &wonderTrade->conditions[2]);
    SetMonData(&gEnemyParty[0], MON_DATA_COOL, &wonderTrade->conditions[0]);
    SetMonData(&gEnemyParty[0], MON_DATA_SMART, &wonderTrade->conditions[3]);
    SetMonData(&gEnemyParty[0], MON_DATA_TOUGH, &wonderTrade->conditions[4]);
    SetMonData(&gEnemyParty[0], MON_DATA_SHEEN, &wonderTrade->sheen);
    SetMonData(&gEnemyParty[0], MON_DATA_OT_GENDER, &genderOT);
    SetMonData(&gEnemyParty[0], MON_DATA_MET_LOCATION, &metLocation);

    if ((Random() % 99) < 10)
    {
        u8 teraType = Random() % 20;
        if (teraType >= TYPE_MYSTERY)
        {
            teraType++;
        }

        SetMonData(&gEnemyParty[0], MON_DATA_TERA_TYPE, &teraType);
    }

    if ((Random() % 99) < 5)
    {
        u8 pokerus = 1 + Random() % 15;
        pokerus |= (pokerus << 4);
        pokerus &= 0xF3;
        pokerus++;

        SetMonData(&gEnemyParty[0], MON_DATA_POKERUS, &pokerus);
    }

    CalculateMonStats(&gEnemyParty[0]);
}

#ifdef RHH_EXPANSION
static u16 GetWonderTradeEvolutionTargetSpecies(struct Pokemon *mon)
{
    int i, j;
    u16 targetSpecies = 0;
    u16 partnerSpecies = GetMonData(mon, MON_DATA_SPECIES);
    u32 partnerPersonality = GetMonData(mon, MON_DATA_PERSONALITY);
    u16 upperPersonality = partnerPersonality >> 16;
    u8 partnerLevel = GetMonData(mon, MON_DATA_LEVEL);
    u16 rndEeveevolutionChance = Random() % 8;
    u16 rndAlcrememeEvoChance = Random() % 9;
    u16 currentMap = ((gSaveBlock1Ptr->location.mapGroup) << 8 | gSaveBlock1Ptr->location.mapNum);
    u16 partnerHeldItem = GetMonData(mon, MON_DATA_HELD_ITEM);
    u16 playerSpecies = GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPECIES);
    u16 partnerHoldEffect = ItemId_GetHoldEffect(partnerHeldItem);
    const struct Evolution *evolutions = GetSpeciesEvolutions(partnerSpecies);

    // partnerSpecies-specific exceptions.
    if (partnerSpecies == SPECIES_NINCADA && partnerLevel >= 20)
    {
        if ((Random() % 2) == 0)
            targetSpecies = SPECIES_NINJASK;
        else
            targetSpecies = SPECIES_SHEDINJA;
        return targetSpecies;
    }
    else if (partnerSpecies == SPECIES_EEVEE && partnerLevel >= 25)
    {
        if (rndEeveevolutionChance == 0)
            targetSpecies = SPECIES_VAPOREON;
        else if (rndEeveevolutionChance == 1)
            targetSpecies = SPECIES_JOLTEON;
        else if (rndEeveevolutionChance == 2)
            targetSpecies = SPECIES_FLAREON;
        else if (rndEeveevolutionChance == 3)
            targetSpecies = SPECIES_ESPEON;
        else if (rndEeveevolutionChance == 4)
            targetSpecies = SPECIES_UMBREON;
        else if (rndEeveevolutionChance == 5)
            targetSpecies = SPECIES_LEAFEON;
        else if (rndEeveevolutionChance == 6)
            targetSpecies = SPECIES_GLACEON;
        else if (rndEeveevolutionChance == 7)
            targetSpecies = SPECIES_SYLVEON;
        return targetSpecies;
    }
    else if (partnerSpecies == SPECIES_MILCERY && partnerLevel >= 25)
    {
        if (rndAlcrememeEvoChance == 0)
            targetSpecies = SPECIES_ALCREMIE;
        else if (rndAlcrememeEvoChance == 1)
            targetSpecies = SPECIES_ALCREMIE_RUBY_CREAM;
        else if (rndAlcrememeEvoChance == 2)
            targetSpecies = SPECIES_ALCREMIE_MATCHA_CREAM;
        else if (rndAlcrememeEvoChance == 3)
            targetSpecies = SPECIES_ALCREMIE_MINT_CREAM;
        else if (rndAlcrememeEvoChance == 4)
            targetSpecies = SPECIES_ALCREMIE_LEMON_CREAM;
        else if (rndAlcrememeEvoChance == 5)
            targetSpecies = SPECIES_ALCREMIE_SALTED_CREAM;
        else if (rndAlcrememeEvoChance == 6)
            targetSpecies = SPECIES_ALCREMIE_RUBY_SWIRL;
        else if (rndAlcrememeEvoChance == 7)
            targetSpecies = SPECIES_ALCREMIE_CARAMEL_SWIRL;
        else if (rndAlcrememeEvoChance == 8)
            targetSpecies = SPECIES_ALCREMIE_RAINBOW_SWIRL;
        return targetSpecies;
    }

    for (i = 0; evolutions[i].method != EVOLUTIONS_END; i++)
    {
        switch (evolutions[i].method)
        {
        case EVO_FRIENDSHIP:
            if ((partnerSpecies == SPECIES_PICHU || partnerSpecies == SPECIES_CLEFFA || partnerSpecies == SPECIES_IGGLYBUFF
              || partnerSpecies == SPECIES_TOGEPI || partnerSpecies == SPECIES_AZURILL || partnerSpecies == SPECIES_BUDEW
              || partnerSpecies == SPECIES_BUNEARY || partnerSpecies == SPECIES_SWOOBAT || partnerSpecies == SPECIES_SWADLOON)
              && partnerLevel >= 16)
                targetSpecies = evolutions[i].targetSpecies;
            else if (partnerSpecies == SPECIES_MEOWTH_ALOLAN && partnerLevel >= 28)
                targetSpecies = evolutions[i].targetSpecies;
            else if ((partnerSpecies == SPECIES_GOLBAT || partnerSpecies == SPECIES_CHANSEY
                   || partnerSpecies == SPECIES_MUNCHLAX) && partnerLevel >= 35)
                targetSpecies = evolutions[i].targetSpecies;
            break;
        case EVO_LEVEL:
            if (partnerSpecies == SPECIES_SLOWPOKE && partnerLevel >= 37)
            {
                if ((Random() % 2) == 0)
                    targetSpecies = SPECIES_SLOWBRO;
                else
                    targetSpecies = SPECIES_SLOWKING;
            }
            else if (partnerSpecies == SPECIES_TOXEL && partnerLevel >= 30)
            {
                if (GetNature(mon) == NATURE_HARDY || GetNature(mon) == NATURE_BRAVE
                 || GetNature(mon) == NATURE_ADAMANT || GetNature(mon) == NATURE_NAUGHTY
                 || GetNature(mon) == NATURE_DOCILE || GetNature(mon) == NATURE_IMPISH
                 || GetNature(mon) == NATURE_LAX || GetNature(mon) == NATURE_HASTY
                 || GetNature(mon) == NATURE_JOLLY || GetNature(mon) == NATURE_NAIVE
                 || GetNature(mon) == NATURE_RASH || GetNature(mon) == NATURE_SASSY
                 || GetNature(mon) == NATURE_QUIRKY)
                    targetSpecies = SPECIES_TOXTRICITY;
                else
                    targetSpecies = SPECIES_TOXTRICITY_LOW_KEY;
            }
            else if (evolutions[i].param <= partnerLevel)
            {
                targetSpecies = evolutions[i].targetSpecies;
            }
            break;
        case EVO_LEVEL_ATK_GT_DEF:
            if (evolutions[i].param <= partnerLevel)
            {
                if (GetMonData(mon, MON_DATA_ATK, 0) > GetMonData(mon, MON_DATA_DEF, 0))
                    targetSpecies = evolutions[i].targetSpecies;
            }
            break;
        case EVO_LEVEL_ATK_EQ_DEF:
            if (evolutions[i].param <= partnerLevel)
            {
                if (GetMonData(mon, MON_DATA_ATK, 0) == GetMonData(mon, MON_DATA_DEF, 0))
                    targetSpecies = evolutions[i].targetSpecies;
            }
            break;
        case EVO_LEVEL_ATK_LT_DEF:
            if (evolutions[i].param <= partnerLevel)
            {
                if (GetMonData(mon, MON_DATA_ATK, 0) < GetMonData(mon, MON_DATA_DEF, 0))
                    targetSpecies = evolutions[i].targetSpecies;
            }
            break;
        case EVO_LEVEL_SILCOON:
            if (evolutions[i].param <= partnerLevel && (upperPersonality % 10) <= 4)
                targetSpecies = evolutions[i].targetSpecies;
            break;
        case EVO_LEVEL_CASCOON:
            if (evolutions[i].param <= partnerLevel && (upperPersonality % 10) > 4)
                targetSpecies = evolutions[i].targetSpecies;
            break;
        case EVO_BEAUTY:
            if (partnerLevel >= 30)
                targetSpecies = evolutions[i].targetSpecies;
            break;
        case EVO_ITEM:
            if (partnerSpecies == SPECIES_GLOOM && partnerLevel >= 36)
            {
                if ((Random() % 2) == 0)
                    targetSpecies = SPECIES_VILEPLUME;
                else
                    targetSpecies = SPECIES_BELLOSSOM;
            }
            else if (partnerSpecies == SPECIES_WEEPINBELL && partnerLevel >= 36)
            {
                targetSpecies = evolutions[i].targetSpecies;
            }
            else if ((partnerSpecies == SPECIES_VULPIX || partnerSpecies == SPECIES_GROWLITHE) && partnerLevel >= 32)
            {
                targetSpecies = evolutions[i].targetSpecies;
            }
            else if ((partnerSpecies == SPECIES_SHELLDER || partnerSpecies == SPECIES_STARYU) && partnerLevel >= 43)
            {
                targetSpecies = evolutions[i].targetSpecies;
            }
            else if ((partnerSpecies == SPECIES_NIDORINA || partnerSpecies == SPECIES_NIDORINO || partnerSpecies == SPECIES_EXEGGCUTE) && partnerLevel >= 26)
            {
                targetSpecies = evolutions[i].targetSpecies;
            }
            else if ((partnerSpecies == SPECIES_JIGGLYPUFF || partnerSpecies == SPECIES_CLEFAIRY || partnerSpecies == SPECIES_SKITTY) && partnerLevel >= 38)
            {
                targetSpecies = evolutions[i].targetSpecies;
            }
            else if ((partnerSpecies == SPECIES_LOMBRE || partnerSpecies == SPECIES_NUZLEAF) && partnerLevel >= 38)
            {
                targetSpecies = evolutions[i].targetSpecies;
            }
            else if (partnerSpecies == SPECIES_POLIWHIRL && partnerLevel >= 44)
            {
                if ((Random() % 2) == 0)
                    targetSpecies = SPECIES_POLIWRATH;
                else
                    targetSpecies = SPECIES_POLITOED;
            }
            else if (partnerSpecies == SPECIES_PIKACHU && partnerLevel >= 27)
            {
                targetSpecies = evolutions[i].targetSpecies;
            }
            else if (partnerSpecies == SPECIES_SUNKERN && partnerLevel >= 15)
            {
                targetSpecies = evolutions[i].targetSpecies;
            }
            else if ((partnerSpecies == SPECIES_MURKROW || partnerSpecies == SPECIES_MISDREAVUS
                   || partnerSpecies == SPECIES_MUNNA || partnerSpecies == SPECIES_DOUBLADE
                   || partnerSpecies == SPECIES_SINISTEA || partnerSpecies == SPECIES_SANDSHREW_ALOLAN
                   || partnerSpecies == SPECIES_VULPIX_ALOLAN || partnerSpecies == SPECIES_SINISTEA_ANTIQUE)
                   && partnerLevel >= 25)
            {
                targetSpecies = evolutions[i].targetSpecies;
            }
            else if ((partnerSpecies == SPECIES_PANSAGE || partnerSpecies == SPECIES_PANSEAR
                   || partnerSpecies == SPECIES_PANPOUR || partnerSpecies == SPECIES_COTTONEE
                   || partnerSpecies == SPECIES_PETILIL || partnerSpecies == SPECIES_MINCCINO
                   || partnerSpecies == SPECIES_FLOETTE || partnerSpecies == SPECIES_FLOETTE_YELLOW_FLOWER
                   || partnerSpecies == SPECIES_FLOETTE_ORANGE_FLOWER || partnerSpecies == SPECIES_FLOETTE_BLUE_FLOWER
                   || partnerSpecies == SPECIES_FLOETTE_WHITE_FLOWER) && partnerLevel >= 15)
            {
                targetSpecies = evolutions[i].targetSpecies;
            }
            else if ((partnerSpecies == SPECIES_EELEKTRIK || partnerSpecies == SPECIES_LAMPENT
                   || partnerSpecies == SPECIES_HELIOPTILE || partnerSpecies == SPECIES_CHARJABUG
                   || partnerSpecies == SPECIES_DARUMAKA_GALARIAN) && partnerLevel >= 35)
            {
                targetSpecies = evolutions[i].targetSpecies;
            }
            else if (partnerSpecies == SPECIES_APPLIN && partnerLevel >= 30)
            {
                if ((Random() % 2) == 0)
                    targetSpecies = SPECIES_FLAPPLE;
                else
                    targetSpecies = SPECIES_APPLETUN;
            }
            else if (partnerSpecies == SPECIES_SLOWPOKE_GALARIAN && partnerLevel >= 37)
            {
                if ((Random() % 2) == 0)
                    targetSpecies = SPECIES_SLOWBRO_GALARIAN;
                else
                    targetSpecies = SPECIES_SLOWKING_GALARIAN;
            }
            break;
        case EVO_ITEM_FEMALE:
            if (GetMonGender(mon) == MON_FEMALE && partnerSpecies == SPECIES_SNORUNT && partnerLevel >= 35)
                targetSpecies = evolutions[i].targetSpecies;
            break;
        case EVO_ITEM_MALE:
            if (GetMonGender(mon) == MON_MALE && partnerSpecies == SPECIES_KIRLIA && partnerLevel >= 35)
                targetSpecies = evolutions[i].targetSpecies;
            break;
        case EVO_MOVE:
            if (MonKnowsMove(mon, evolutions[i].param))
                targetSpecies = evolutions[i].targetSpecies;
            break;
        case EVO_FRIENDSHIP_MOVE_TYPE:
            for (j = 0; j < MAX_MON_MOVES; j++)
            {
                if (gMovesInfo[GetMonData(mon, MON_DATA_MOVE1 + j, NULL)].type == evolutions[i].param)
                {
                    targetSpecies = evolutions[i].targetSpecies;
                    break;
                }
            }
            break;
        case EVO_LEVEL_DARK_TYPE_MON_IN_PARTY:
            if (evolutions[i].param <= partnerLevel)
            {
                for (j = 0; j < PARTY_SIZE; j++)
                {
                    u16 currSpecies = GetMonData(&gPlayerParty[j], MON_DATA_SPECIES, NULL);
                    if (gSpeciesInfo[currSpecies].types[0] == TYPE_DARK
                     || gSpeciesInfo[currSpecies].types[1] == TYPE_DARK)
                    {
                        targetSpecies = evolutions[i].targetSpecies;
                        break;
                    }
                }
            }
            break;
        case EVO_LEVEL_RAIN:
            j = GetCurrentWeather();
            if (j == WEATHER_RAIN || j == WEATHER_RAIN_THUNDERSTORM || j == WEATHER_DOWNPOUR)
                targetSpecies = evolutions[i].targetSpecies;
            break;
        case EVO_MAPSEC:
            if (gMapHeader.regionMapSectionId == evolutions[i].param)
                targetSpecies = evolutions[i].targetSpecies;
            break;
        case EVO_SPECIFIC_MAP:
            if (currentMap == evolutions[i].param)
                targetSpecies = evolutions[i].targetSpecies;
            break;
        case EVO_SPECIFIC_MON_IN_PARTY:
            for (j = 0; j < PARTY_SIZE; j++)
            {
                if (GetMonData(&gPlayerParty[j], MON_DATA_SPECIES) == evolutions[i].param)
                    targetSpecies = evolutions[i].targetSpecies;
            }
            break;
        case EVO_TRADE:
            targetSpecies = evolutions[i].targetSpecies;
            break;
        case EVO_TRADE_ITEM:
            if (evolutions[i].param == partnerHeldItem)
            {
                partnerHeldItem = ITEM_NONE;
                SetMonData(mon, MON_DATA_HELD_ITEM, &partnerHeldItem);
                targetSpecies = evolutions[i].targetSpecies;
            }
            break;
        case EVO_TRADE_SPECIFIC_MON:
            if (evolutions[i].param == playerSpecies && partnerHoldEffect != HOLD_EFFECT_PREVENT_EVOLVE)
                targetSpecies = evolutions[i].targetSpecies;
            break;
        case EVO_LEVEL_FOG:
            j = GetCurrentWeather();
            if (evolutions[i].param <= partnerLevel && (j == WEATHER_FOG_HORIZONTAL || j == WEATHER_FOG_DIAGONAL))
                targetSpecies = evolutions[i].targetSpecies;
            break;
        case EVO_LEVEL_NATURE_AMPED:
            if (evolutions[i].param <= partnerLevel)
            {
                u8 nature = GetNature(mon);
                switch (nature)
                {
                case NATURE_HARDY:
                case NATURE_BRAVE:
                case NATURE_ADAMANT:
                case NATURE_NAUGHTY:
                case NATURE_DOCILE:
                case NATURE_IMPISH:
                case NATURE_LAX:
                case NATURE_HASTY:
                case NATURE_JOLLY:
                case NATURE_NAIVE:
                case NATURE_RASH:
                case NATURE_SASSY:
                case NATURE_QUIRKY:
                    targetSpecies = evolutions[i].targetSpecies;
                    break;
                }
            }
            break;
        case EVO_LEVEL_NATURE_LOW_KEY:
            if (evolutions[i].param <= partnerLevel)
            {
                u8 nature = GetNature(mon);
                switch (nature)
                {
                case NATURE_LONELY:
                case NATURE_BOLD:
                case NATURE_RELAXED:
                case NATURE_TIMID:
                case NATURE_SERIOUS:
                case NATURE_MODEST:
                case NATURE_MILD:
                case NATURE_QUIET:
                case NATURE_BASHFUL:
                case NATURE_CALM:
                case NATURE_GENTLE:
                case NATURE_CAREFUL:
                    targetSpecies = evolutions[i].targetSpecies;
                    break;
                }
            }
            break;
        case EVO_ITEM_HOLD:
            if (partnerHeldItem == evolutions[i].param)
            {
                partnerHeldItem = 0;
                SetMonData(mon, MON_DATA_HELD_ITEM, &partnerHeldItem);
                targetSpecies = evolutions[i].targetSpecies;
            }
            break;
        }
    }

    return (targetSpecies == 0) ? partnerSpecies : targetSpecies;
}
#else
static u16 GetWonderTradeEvolutionTargetSpecies(struct Pokemon *mon)
{
    int i;
    u16 targetSpecies = 0;
    u16 species = GetMonData(mon, MON_DATA_SPECIES);
    u32 personality = GetMonData(mon, MON_DATA_PERSONALITY);
    u16 upperPersonality = personality >> 16;
    u8 level = GetMonData(mon, MON_DATA_LEVEL);
    u16 rndEeveevolutionChance = Random() % 5;

    if (species == SPECIES_EEVEE || species == SPECIES_NINCADA)
    {
        if (species == SPECIES_NINCADA && level >= 20)
        {
            if ((Random() % 2) == 0)
                targetSpecies = SPECIES_NINJASK;
            else
                targetSpecies = SPECIES_SHEDINJA;
            return targetSpecies;
        }
        else if (species == SPECIES_EEVEE && level >= 25)
        {
            if (rndEeveevolutionChance == 0)
                targetSpecies = SPECIES_VAPOREON;
            else if (rndEeveevolutionChance == 1)
                targetSpecies = SPECIES_JOLTEON;
            else if (rndEeveevolutionChance == 2)
                targetSpecies = SPECIES_FLAREON;
            else if (rndEeveevolutionChance == 3)
                targetSpecies = SPECIES_ESPEON;
            else if (rndEeveevolutionChance == 4)
                targetSpecies = SPECIES_UMBREON;
            return targetSpecies;
        }
    }

    for (i = 0; i < 5; i++)
    {
        switch (gEvolutionTable[species][i].method)
        {
        case EVO_FRIENDSHIP:
            if ((species == SPECIES_PICHU || species == SPECIES_CLEFFA || species == SPECIES_IGGLYBUFF
              || species == SPECIES_TOGEPI || species == SPECIES_AZURILL) && level >= 16)
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            else if ((species == SPECIES_GOLBAT || species == SPECIES_CHANSEY) && level >= 35)
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            break;
        case EVO_LEVEL:
            if (species == SPECIES_SLOWPOKE && level >= 37)
            {
                if ((Random() % 2) == 0)
                    targetSpecies = SPECIES_SLOWBRO;
                else
                    targetSpecies = SPECIES_SLOWKING;
            }
            else if (gEvolutionTable[species][i].param <= level)
            {
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            }
            break;
        case EVO_LEVEL_ATK_GT_DEF:
            if (gEvolutionTable[species][i].param <= level)
            {
                if (GetMonData(mon, MON_DATA_ATK, 0) > GetMonData(mon, MON_DATA_DEF, 0))
                    targetSpecies = gEvolutionTable[species][i].targetSpecies;
            }
            break;
        case EVO_LEVEL_ATK_EQ_DEF:
            if (gEvolutionTable[species][i].param <= level)
            {
                if (GetMonData(mon, MON_DATA_ATK, 0) == GetMonData(mon, MON_DATA_DEF, 0))
                    targetSpecies = gEvolutionTable[species][i].targetSpecies;
            }
            break;
        case EVO_LEVEL_ATK_LT_DEF:
            if (gEvolutionTable[species][i].param <= level)
            {
                if (GetMonData(mon, MON_DATA_ATK, 0) < GetMonData(mon, MON_DATA_DEF, 0))
                    targetSpecies = gEvolutionTable[species][i].targetSpecies;
            }
            break;
        case EVO_LEVEL_SILCOON:
            if (gEvolutionTable[species][i].param <= level && (upperPersonality % 10) <= 4)
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            break;
        case EVO_LEVEL_CASCOON:
            if (gEvolutionTable[species][i].param <= level && (upperPersonality % 10) > 4)
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            break;
        case EVO_BEAUTY:
            if (level >= 30)
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            break;
        case EVO_ITEM:
            if (species == SPECIES_GLOOM && level >= 36)
            {
                if ((Random() % 2) == 0)
                    targetSpecies = SPECIES_VILEPLUME;
                else
                    targetSpecies = SPECIES_BELLOSSOM;
            }
            else if (species == SPECIES_WEEPINBELL && level >= 36)
            {
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            }
            else if ((species == SPECIES_VULPIX || species == SPECIES_GROWLITHE) && level >= 32)
            {
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            }
            else if ((species == SPECIES_SHELLDER || species == SPECIES_STARYU) && level >= 43)
            {
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            }
            else if ((species == SPECIES_NIDORINA || species == SPECIES_NIDORINO || species == SPECIES_EXEGGCUTE) && level >= 26)
            {
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            }
            else if ((species == SPECIES_JIGGLYPUFF || species == SPECIES_CLEFAIRY || species == SPECIES_SKITTY) && level >= 38)
            {
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            }
            else if ((species == SPECIES_LOMBRE || species == SPECIES_NUZLEAF) && level >= 38)
            {
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            }
            else if (species == SPECIES_POLIWHIRL && level >= 44)
            {
                if ((Random() % 2) == 0)
                    targetSpecies = SPECIES_POLIWRATH;
                else
                    targetSpecies = SPECIES_POLITOED;
            }
            else if (species == SPECIES_PIKACHU && level >= 27)
            {
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            }
            else if (species == SPECIES_SUNKERN && level >= 15)
            {
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            }
            break;
        case EVO_TRADE_ITEM:
            if ((species == SPECIES_ONIX || species == SPECIES_SEADRA) && level >= 40)
            {
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            }
            else if (species == SPECIES_SCYTHER && level >= 26)
            {
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            }
            else if (species == SPECIES_PORYGON && level >= 21)
            {
                targetSpecies = gEvolutionTable[species][i].targetSpecies;
            }
            else if (species == SPECIES_CLAMPERL && level >= 22)
            {
                if ((Random() % 2) == 0)
                    targetSpecies = SPECIES_HUNTAIL;
                else
                    targetSpecies = SPECIES_GOREBYSS;
            }
            break;
        }
    }

    if (targetSpecies == 0)
        return species;
    else
        return targetSpecies;
}
#endif

#if defined RHH_EXPANSION
static u32 GetEvolutionSpecies(u16 speciesId)
{
    u32 i;

    const struct Evolution *evolutions = GetSpeciesEvolutions(speciesId);

    for (i = 0; evolutions[i].method != EVOLUTIONS_END; i++)
    {
        if (evolutions[i].targetSpecies)
            return evolutions[i].targetSpecies;
    }
    return SPECIES_NONE;
}

static bool32 IsSpeciesFamilyMegaEvolutionCompatible(u16 species, u16 heldStone)
{
    u32 i;
    const struct FormChange *formChanges = GetSpeciesFormChanges(species);
    u16 nextEvo = GetEvolutionSpecies(species);

    for (i = 0; formChanges[i].method != FORM_CHANGE_TERMINATOR; i++)
    {
        if (formChanges[i].method == FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM && formChanges[i].param1 == heldStone)
            return TRUE;
    }

    if (nextEvo != SPECIES_NONE)
        return IsSpeciesFamilyMegaEvolutionCompatible(nextEvo, heldStone);

    return FALSE;
}
#endif

// Generates an item randomly for a Pokémon received via Wonder Trade to hold, with a few exceptions.
static u16 GetValidHeldItemForSpecies(u16 species)
{
    u16 item;
    u16 itemHoldEffect;
    u16 itemPocket;
    u8 itemImportance;

    ROLL:
        item = Random() % ITEMS_COUNT;

    itemHoldEffect = ItemId_GetHoldEffect(item);
    itemPocket = ItemId_GetPocket(item);
    itemImportance = ItemId_GetImportance(item);

    if (item == ITEM_NONE || item == ITEM_ENIGMA_BERRY)
        goto ROLL;
    else if (itemHoldEffect == HOLD_EFFECT_NONE)
        goto ROLL;
    else if (IS_ITEM_MAIL(item))
        goto ROLL;
    else if (itemPocket == POCKET_KEY_ITEMS || itemPocket == POCKET_TM_HM)
        goto ROLL;
#ifdef RHH_EXPANSION
    else if (item == ITEM_GRACIDEA
          || item == ITEM_RED_ORB
          || item == ITEM_BLUE_ORB
          || item == ITEM_ADAMANT_ORB
          || item == ITEM_LUSTROUS_ORB
          || item == ITEM_GRISEOUS_ORB
          || item == ITEM_ADAMANT_CRYSTAL
          || item == ITEM_LUSTROUS_GLOBE
          || item == ITEM_GRISEOUS_CORE)
        goto ROLL;
    else if ((itemHoldEffect == HOLD_EFFECT_MEMORY || itemHoldEffect == HOLD_EFFECT_DRIVE
           || itemHoldEffect == HOLD_EFFECT_PLATE || itemHoldEffect == HOLD_EFFECT_GEMS)
           && (gSpeciesInfo[species].types[0] != ItemId_GetHoldEffectParam(item)
            || gSpeciesInfo[species].types[1] != ItemId_GetHoldEffectParam(item)))
        goto ROLL;
    // Re-roll the item generated if it's a Mega Stone not compatible with the Pokémon that's being received.
    else if (itemHoldEffect == HOLD_EFFECT_MEGA_STONE && !IsSpeciesFamilyMegaEvolutionCompatible(species, item))
        goto ROLL;
    else if (itemHoldEffect == HOLD_EFFECT_Z_CRYSTAL)
        goto ROLL;
#else
    else if (sIsInvalidItem[item])
        goto ROLL;
#endif
    else if (itemImportance > 0)
        goto ROLL;

    return item;
}
