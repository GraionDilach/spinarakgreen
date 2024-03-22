#ifndef GUARD_CONFIG_SPECIES_ENABLED_H
#define GUARD_CONFIG_SPECIES_ENABLED_H

// Modifying the latest generation WILL change the saveblock due to Dex flags and will require a new save file.
// Generations of Pokémon are defined by the first member introduced,
// so Pikachu depends on the Gen 1 setting despite Pichu being the lowest member of the evolution tree.
// Eg: If P_GEN_2_POKEMON is set to FALSE, all members of the Sneasel Family will be disabled
// (Sneasel + Hisuian, Weavile and Sneasler).
#define P_GEN_1_POKEMON                  TRUE  // Generation 1 Pokémon (RGBY)
#define P_GEN_2_POKEMON                  TRUE  // Generation 2 Pokémon (GSC)
#define P_GEN_3_POKEMON                  TRUE  // Generation 3 Pokémon (RSE, FRLG)
#define P_GEN_4_POKEMON                  TRUE  // Generation 4 Pokémon (DPPt, HGSS)
#define P_GEN_5_POKEMON                  TRUE  // Generation 5 Pokémon (BW, B2W2)
#define P_GEN_6_POKEMON                  TRUE  // Generation 6 Pokémon (XY, ORAS)
#define P_GEN_7_POKEMON                  TRUE  // Generation 7 Pokémon (SM, USUM, LGPE)
#define P_GEN_8_POKEMON                  TRUE  // Generation 8 Pokémon (SwSh, BDSP, LA)
#define P_GEN_9_POKEMON                  TRUE  // Generation 9 Pokémon (SV)

#define P_GEN_SPGRN_POKEMON              TRUE  // SpinarakGreen additions

// Setting this to TRUE will add the new evolutions to the Regional Dex.
#define P_NEW_EVOS_IN_REGIONAL_DEX       TRUE

// Battle gimmick specific Forms.
#define P_MEGA_EVOLUTIONS                TRUE
#define P_PRIMAL_REVERSIONS              TRUE  // Groudon and Kyogre only.
#define P_ULTRA_BURST_FORMS              TRUE  // Ultra Necrozma only.
#define P_GIGANTAMAX_FORMS               TRUE
#define P_TERA_FORMS                     TRUE

#define P_MEWTWO_MEGA_EVOLUTIONS         FALSE // Disable Mewtwo Megas

// Fusion forms
#define P_FUSION_FORMS                   FALSE

// Regional Forms. Includes Regional Form evolutions, like Sirfetch'd.
#define P_REGIONAL_FORMS                 TRUE
#define P_ALOLAN_FORMS                   P_REGIONAL_FORMS
#define P_GALARIAN_FORMS                 P_REGIONAL_FORMS
#define P_HISUIAN_FORMS                  P_REGIONAL_FORMS
#define P_PALDEAN_FORMS                  P_REGIONAL_FORMS

// Big groups of forms that aren't always desired when choosing families.
#define P_PIKACHU_EXTRA_FORMS            FALSE
#define P_COSPLAY_PIKACHU_FORMS          P_PIKACHU_EXTRA_FORMS
#define P_CAP_PIKACHU_FORMS              P_PIKACHU_EXTRA_FORMS

// Cross-generation evolutions. Includes pre-evolutions.
#define P_CROSS_GENERATION_EVOS          TRUE
#define P_GEN_2_CROSS_EVOS               P_CROSS_GENERATION_EVOS
#define P_GEN_3_CROSS_EVOS               P_CROSS_GENERATION_EVOS
#define P_GEN_4_CROSS_EVOS               P_CROSS_GENERATION_EVOS
//#define P_GEN_5_CROSS_EVOS             // Gen 5 didn't introduce any cross-gen evos.
#define P_GEN_6_CROSS_EVOS               P_CROSS_GENERATION_EVOS // Just Sylveon.
//#define P_GEN_7_CROSS_EVOS             // Alolan evolutions handled by P_ALOLAN_FORMS.
#define P_GEN_8_CROSS_EVOS               P_CROSS_GENERATION_EVOS // Regional evolutions handled by P_GALARIAN_FORMS and P_HISUIAN_FORMS.
#define P_GEN_9_CROSS_EVOS               P_CROSS_GENERATION_EVOS // Clodsire handled by P_PALDEAN_FORMS.

// To disable specific families, replace P_GEN_x_POKEMON with FALSE.
#define P_FAMILY_BULBASAUR               P_GEN_1_POKEMON
#define P_FAMILY_CHARMANDER              P_GEN_1_POKEMON
#define P_FAMILY_SQUIRTLE                P_GEN_1_POKEMON
#define P_FAMILY_CATERPIE                P_GEN_1_POKEMON
#define P_FAMILY_WEEDLE                  P_GEN_1_POKEMON
#define P_FAMILY_PIDGEY                  P_GEN_1_POKEMON
#define P_FAMILY_RATTATA                 P_GEN_1_POKEMON
#define P_FAMILY_SPEAROW                 P_GEN_1_POKEMON
#define P_FAMILY_EKANS                   P_GEN_1_POKEMON
#define P_FAMILY_PIKACHU                 P_GEN_1_POKEMON
#define P_FAMILY_SANDSHREW               P_GEN_1_POKEMON
#define P_FAMILY_NIDORAN                 P_GEN_1_POKEMON
#define P_FAMILY_CLEFAIRY                P_GEN_1_POKEMON
#define P_FAMILY_VULPIX                  P_GEN_1_POKEMON
#define P_FAMILY_JIGGLYPUFF              P_GEN_1_POKEMON
#define P_FAMILY_ZUBAT                   P_GEN_1_POKEMON
#define P_FAMILY_ODDISH                  P_GEN_1_POKEMON
#define P_FAMILY_PARAS                   P_GEN_1_POKEMON
#define P_FAMILY_VENONAT                 P_GEN_1_POKEMON
#define P_FAMILY_DIGLETT                 P_GEN_1_POKEMON
#define P_FAMILY_MEOWTH                  P_GEN_1_POKEMON
#define P_FAMILY_PSYDUCK                 P_GEN_1_POKEMON
#define P_FAMILY_MANKEY                  P_GEN_1_POKEMON
#define P_FAMILY_GROWLITHE               P_GEN_1_POKEMON
#define P_FAMILY_POLIWAG                 P_GEN_1_POKEMON
#define P_FAMILY_ABRA                    P_GEN_1_POKEMON
#define P_FAMILY_MACHOP                  P_GEN_1_POKEMON
#define P_FAMILY_BELLSPROUT              P_GEN_1_POKEMON
#define P_FAMILY_TENTACOOL               P_GEN_1_POKEMON
#define P_FAMILY_GEODUDE                 P_GEN_1_POKEMON
#define P_FAMILY_PONYTA                  P_GEN_1_POKEMON
#define P_FAMILY_SLOWPOKE                P_GEN_1_POKEMON
#define P_FAMILY_MAGNEMITE               P_GEN_1_POKEMON
#define P_FAMILY_FARFETCHD               P_GEN_1_POKEMON
#define P_FAMILY_DODUO                   P_GEN_1_POKEMON
#define P_FAMILY_SEEL                    P_GEN_1_POKEMON
#define P_FAMILY_GRIMER                  P_GEN_1_POKEMON
#define P_FAMILY_SHELLDER                P_GEN_1_POKEMON
#define P_FAMILY_GASTLY                  P_GEN_1_POKEMON
#define P_FAMILY_ONIX                    P_GEN_1_POKEMON
#define P_FAMILY_DROWZEE                 P_GEN_1_POKEMON
#define P_FAMILY_KRABBY                  P_GEN_1_POKEMON
#define P_FAMILY_VOLTORB                 P_GEN_1_POKEMON
#define P_FAMILY_EXEGGCUTE               P_GEN_1_POKEMON
#define P_FAMILY_CUBONE                  P_GEN_1_POKEMON
#define P_FAMILY_HITMONS                 P_GEN_1_POKEMON
#define P_FAMILY_LICKITUNG               P_GEN_1_POKEMON
#define P_FAMILY_KOFFING                 P_GEN_1_POKEMON
#define P_FAMILY_RHYHORN                 P_GEN_1_POKEMON
#define P_FAMILY_CHANSEY                 P_GEN_1_POKEMON
#define P_FAMILY_TANGELA                 P_GEN_1_POKEMON
#define P_FAMILY_KANGASKHAN              P_GEN_1_POKEMON
#define P_FAMILY_HORSEA                  P_GEN_1_POKEMON
#define P_FAMILY_GOLDEEN                 P_GEN_1_POKEMON
#define P_FAMILY_STARYU                  P_GEN_1_POKEMON
#define P_FAMILY_MR_MIME                 P_GEN_1_POKEMON
#define P_FAMILY_SCYTHER                 P_GEN_1_POKEMON
#define P_FAMILY_JYNX                    P_GEN_1_POKEMON
#define P_FAMILY_ELECTABUZZ              P_GEN_1_POKEMON
#define P_FAMILY_MAGMAR                  P_GEN_1_POKEMON
#define P_FAMILY_PINSIR                  P_GEN_1_POKEMON
#define P_FAMILY_TAUROS                  P_GEN_1_POKEMON
#define P_FAMILY_MAGIKARP                P_GEN_1_POKEMON
#define P_FAMILY_LAPRAS                  P_GEN_1_POKEMON
#define P_FAMILY_DITTO                   P_GEN_1_POKEMON
#define P_FAMILY_EEVEE                   P_GEN_1_POKEMON
#define P_FAMILY_PORYGON                 P_GEN_1_POKEMON
#define P_FAMILY_OMANYTE                 P_GEN_1_POKEMON
#define P_FAMILY_KABUTO                  P_GEN_1_POKEMON
#define P_FAMILY_AERODACTYL              P_GEN_1_POKEMON
#define P_FAMILY_SNORLAX                 P_GEN_1_POKEMON
#define P_FAMILY_ARTICUNO                P_GEN_1_POKEMON
#define P_FAMILY_ZAPDOS                  P_GEN_1_POKEMON
#define P_FAMILY_MOLTRES                 P_GEN_1_POKEMON
#define P_FAMILY_DRATINI                 P_GEN_1_POKEMON
#define P_FAMILY_MEWTWO                  P_GEN_1_POKEMON
#define P_FAMILY_MEW                     P_GEN_1_POKEMON

#define P_FAMILY_CHIKORITA               P_GEN_2_POKEMON
#define P_FAMILY_CYNDAQUIL               P_GEN_2_POKEMON
#define P_FAMILY_TOTODILE                P_GEN_2_POKEMON
#define P_FAMILY_SENTRET                 P_GEN_2_POKEMON
#define P_FAMILY_HOOTHOOT                P_GEN_2_POKEMON
#define P_FAMILY_LEDYBA                  P_GEN_2_POKEMON
#define P_FAMILY_SPINARAK                P_GEN_2_POKEMON
#define P_FAMILY_CHINCHOU                P_GEN_2_POKEMON
#define P_FAMILY_TOGEPI                  P_GEN_2_POKEMON
#define P_FAMILY_NATU                    P_GEN_2_POKEMON
#define P_FAMILY_MAREEP                  P_GEN_2_POKEMON
#define P_FAMILY_MARILL                  P_GEN_2_POKEMON
#define P_FAMILY_SUDOWOODO               P_GEN_2_POKEMON
#define P_FAMILY_HOPPIP                  P_GEN_2_POKEMON
#define P_FAMILY_AIPOM                   P_GEN_2_POKEMON
#define P_FAMILY_SUNKERN                 P_GEN_2_POKEMON
#define P_FAMILY_YANMA                   P_GEN_2_POKEMON
#define P_FAMILY_WOOPER                  P_GEN_2_POKEMON
#define P_FAMILY_MURKROW                 P_GEN_2_POKEMON
#define P_FAMILY_MISDREAVUS              P_GEN_2_POKEMON
#define P_FAMILY_UNOWN                   P_GEN_2_POKEMON
#define P_FAMILY_WOBBUFFET               P_GEN_2_POKEMON
#define P_FAMILY_GIRAFARIG               P_GEN_2_POKEMON
#define P_FAMILY_PINECO                  P_GEN_2_POKEMON
#define P_FAMILY_DUNSPARCE               P_GEN_2_POKEMON
#define P_FAMILY_GLIGAR                  P_GEN_2_POKEMON
#define P_FAMILY_SNUBBULL                P_GEN_2_POKEMON
#define P_FAMILY_QWILFISH                P_GEN_2_POKEMON
#define P_FAMILY_SHUCKLE                 P_GEN_2_POKEMON
#define P_FAMILY_HERACROSS               P_GEN_2_POKEMON
#define P_FAMILY_SNEASEL                 P_GEN_2_POKEMON
#define P_FAMILY_TEDDIURSA               P_GEN_2_POKEMON
#define P_FAMILY_SLUGMA                  P_GEN_2_POKEMON
#define P_FAMILY_SWINUB                  P_GEN_2_POKEMON
#define P_FAMILY_CORSOLA                 P_GEN_2_POKEMON
#define P_FAMILY_REMORAID                P_GEN_2_POKEMON
#define P_FAMILY_DELIBIRD                P_GEN_2_POKEMON
#define P_FAMILY_MANTINE                 P_GEN_2_POKEMON
#define P_FAMILY_SKARMORY                P_GEN_2_POKEMON
#define P_FAMILY_HOUNDOUR                P_GEN_2_POKEMON
#define P_FAMILY_PHANPY                  P_GEN_2_POKEMON
#define P_FAMILY_STANTLER                P_GEN_2_POKEMON
#define P_FAMILY_SMEARGLE                P_GEN_2_POKEMON
#define P_FAMILY_MILTANK                 P_GEN_2_POKEMON
#define P_FAMILY_RAIKOU                  P_GEN_2_POKEMON
#define P_FAMILY_ENTEI                   P_GEN_2_POKEMON
#define P_FAMILY_SUICUNE                 P_GEN_2_POKEMON
#define P_FAMILY_LARVITAR                P_GEN_2_POKEMON
#define P_FAMILY_LUGIA                   P_GEN_2_POKEMON
#define P_FAMILY_HO_OH                   P_GEN_2_POKEMON
#define P_FAMILY_CELEBI                  P_GEN_2_POKEMON

#define P_FAMILY_TREECKO                 P_GEN_3_POKEMON
#define P_FAMILY_TORCHIC                 P_GEN_3_POKEMON
#define P_FAMILY_MUDKIP                  P_GEN_3_POKEMON
#define P_FAMILY_POOCHYENA               P_GEN_3_POKEMON
#define P_FAMILY_ZIGZAGOON               P_GEN_3_POKEMON
#define P_FAMILY_WURMPLE                 P_GEN_3_POKEMON
#define P_FAMILY_LOTAD                   P_GEN_3_POKEMON
#define P_FAMILY_SEEDOT                  P_GEN_3_POKEMON
#define P_FAMILY_TAILLOW                 P_GEN_3_POKEMON
#define P_FAMILY_WINGULL                 P_GEN_3_POKEMON
#define P_FAMILY_RALTS                   P_GEN_3_POKEMON
#define P_FAMILY_SURSKIT                 P_GEN_3_POKEMON
#define P_FAMILY_SHROOMISH               P_GEN_3_POKEMON
#define P_FAMILY_SLAKOTH                 P_GEN_3_POKEMON
#define P_FAMILY_NINCADA                 P_GEN_3_POKEMON
#define P_FAMILY_WHISMUR                 P_GEN_3_POKEMON
#define P_FAMILY_MAKUHITA                P_GEN_3_POKEMON
#define P_FAMILY_NOSEPASS                P_GEN_3_POKEMON
#define P_FAMILY_SKITTY                  P_GEN_3_POKEMON
#define P_FAMILY_SABLEYE                 P_GEN_3_POKEMON
#define P_FAMILY_MAWILE                  P_GEN_3_POKEMON
#define P_FAMILY_ARON                    P_GEN_3_POKEMON
#define P_FAMILY_MEDITITE                P_GEN_3_POKEMON
#define P_FAMILY_ELECTRIKE               P_GEN_3_POKEMON
#define P_FAMILY_PLUSLE                  P_GEN_3_POKEMON
#define P_FAMILY_MINUN                   P_GEN_3_POKEMON
#define P_FAMILY_VOLBEAT_ILLUMISE        P_GEN_3_POKEMON
#define P_FAMILY_ROSELIA                 P_GEN_3_POKEMON
#define P_FAMILY_GULPIN                  P_GEN_3_POKEMON
#define P_FAMILY_CARVANHA                P_GEN_3_POKEMON
#define P_FAMILY_WAILMER                 P_GEN_3_POKEMON
#define P_FAMILY_NUMEL                   P_GEN_3_POKEMON
#define P_FAMILY_TORKOAL                 P_GEN_3_POKEMON
#define P_FAMILY_SPOINK                  P_GEN_3_POKEMON
#define P_FAMILY_SPINDA                  P_GEN_3_POKEMON
#define P_FAMILY_TRAPINCH                P_GEN_3_POKEMON
#define P_FAMILY_CACNEA                  P_GEN_3_POKEMON
#define P_FAMILY_SWABLU                  P_GEN_3_POKEMON
#define P_FAMILY_ZANGOOSE                P_GEN_3_POKEMON
#define P_FAMILY_SEVIPER                 P_GEN_3_POKEMON
#define P_FAMILY_LUNATONE                P_GEN_3_POKEMON
#define P_FAMILY_SOLROCK                 P_GEN_3_POKEMON
#define P_FAMILY_BARBOACH                P_GEN_3_POKEMON
#define P_FAMILY_CORPHISH                P_GEN_3_POKEMON
#define P_FAMILY_BALTOY                  P_GEN_3_POKEMON
#define P_FAMILY_LILEEP                  P_GEN_3_POKEMON
#define P_FAMILY_ANORITH                 P_GEN_3_POKEMON
#define P_FAMILY_FEEBAS                  P_GEN_3_POKEMON
#define P_FAMILY_CASTFORM                P_GEN_3_POKEMON
#define P_FAMILY_KECLEON                 P_GEN_3_POKEMON
#define P_FAMILY_SHUPPET                 P_GEN_3_POKEMON
#define P_FAMILY_DUSKULL                 P_GEN_3_POKEMON
#define P_FAMILY_TROPIUS                 P_GEN_3_POKEMON
#define P_FAMILY_CHIMECHO                P_GEN_3_POKEMON
#define P_FAMILY_ABSOL                   P_GEN_3_POKEMON
#define P_FAMILY_SNORUNT                 P_GEN_3_POKEMON
#define P_FAMILY_SPHEAL                  P_GEN_3_POKEMON
#define P_FAMILY_CLAMPERL                P_GEN_3_POKEMON
#define P_FAMILY_RELICANTH               P_GEN_3_POKEMON
#define P_FAMILY_LUVDISC                 P_GEN_3_POKEMON
#define P_FAMILY_BAGON                   P_GEN_3_POKEMON
#define P_FAMILY_BELDUM                  P_GEN_3_POKEMON
#define P_FAMILY_REGIROCK                P_GEN_3_POKEMON
#define P_FAMILY_REGICE                  P_GEN_3_POKEMON
#define P_FAMILY_REGISTEEL               P_GEN_3_POKEMON
#define P_FAMILY_LATIAS                  P_GEN_3_POKEMON
#define P_FAMILY_LATIOS                  P_GEN_3_POKEMON
#define P_FAMILY_KYOGRE                  P_GEN_3_POKEMON
#define P_FAMILY_GROUDON                 P_GEN_3_POKEMON
#define P_FAMILY_RAYQUAZA                P_GEN_3_POKEMON
#define P_FAMILY_JIRACHI                 P_GEN_3_POKEMON
#define P_FAMILY_DEOXYS                  P_GEN_3_POKEMON

#define P_FAMILY_TURTWIG                 TRUE
#define P_FAMILY_CHIMCHAR                TRUE
#define P_FAMILY_PIPLUP                  TRUE
#define P_FAMILY_STARLY                  FALSE
#define P_FAMILY_BIDOOF                  TRUE
#define P_FAMILY_KRICKETOT               TRUE
#define P_FAMILY_SHINX                   TRUE
#define P_FAMILY_CRANIDOS                TRUE
#define P_FAMILY_SHIELDON                FALSE
#define P_FAMILY_BURMY                   TRUE
#define P_FAMILY_COMBEE                  FALSE
#define P_FAMILY_PACHIRISU               FALSE
#define P_FAMILY_BUIZEL                  FALSE
#define P_FAMILY_CHERUBI                 TRUE
#define P_FAMILY_SHELLOS                 TRUE
#define P_FAMILY_DRIFLOON                TRUE
#define P_FAMILY_BUNEARY                 FALSE
#define P_FAMILY_GLAMEOW                 FALSE
#define P_FAMILY_STUNKY                  FALSE
#define P_FAMILY_BRONZOR                 FALSE
#define P_FAMILY_CHATOT                  TRUE
#define P_FAMILY_SPIRITOMB               TRUE
#define P_FAMILY_GIBLE                   TRUE
#define P_FAMILY_RIOLU                   TRUE
#define P_FAMILY_HIPPOPOTAS              FALSE
#define P_FAMILY_SKORUPI                 TRUE
#define P_FAMILY_CROAGUNK                TRUE
#define P_FAMILY_CARNIVINE               TRUE
#define P_FAMILY_FINNEON                 FALSE
#define P_FAMILY_SNOVER                  TRUE
#define P_FAMILY_ROTOM                   FALSE
#define P_FAMILY_UXIE                    FALSE
#define P_FAMILY_MESPRIT                 FALSE
#define P_FAMILY_AZELF                   FALSE
#define P_FAMILY_DIALGA                  FALSE
#define P_FAMILY_PALKIA                  FALSE
#define P_FAMILY_HEATRAN                 FALSE
#define P_FAMILY_REGIGIGAS               TRUE
#define P_FAMILY_GIRATINA                FALSE
#define P_FAMILY_CRESSELIA               TRUE
#define P_FAMILY_MANAPHY                 TRUE
#define P_FAMILY_DARKRAI                 FALSE
#define P_FAMILY_SHAYMIN                 FALSE
#define P_FAMILY_ARCEUS                  FALSE

#define P_FAMILY_VICTINI                 FALSE
#define P_FAMILY_SNIVY                   FALSE
#define P_FAMILY_TEPIG                   FALSE
#define P_FAMILY_OSHAWOTT                FALSE
#define P_FAMILY_PATRAT                  FALSE
#define P_FAMILY_LILLIPUP                FALSE
#define P_FAMILY_PURRLOIN                TRUE
#define P_FAMILY_PANSAGE                 FALSE
#define P_FAMILY_PANSEAR                 FALSE
#define P_FAMILY_PANPOUR                 FALSE
#define P_FAMILY_MUNNA                   FALSE
#define P_FAMILY_PIDOVE                  FALSE
#define P_FAMILY_BLITZLE                 FALSE
#define P_FAMILY_ROGGENROLA              TRUE
#define P_FAMILY_WOOBAT                  FALSE
#define P_FAMILY_DRILBUR                 FALSE
#define P_FAMILY_AUDINO                  TRUE
#define P_FAMILY_TIMBURR                 FALSE
#define P_FAMILY_TYMPOLE                 TRUE
#define P_FAMILY_THROH                   FALSE
#define P_FAMILY_SAWK                    FALSE
#define P_FAMILY_SEWADDLE                FALSE
#define P_FAMILY_VENIPEDE                FALSE
#define P_FAMILY_COTTONEE                TRUE
#define P_FAMILY_PETILIL                 TRUE
#define P_FAMILY_BASCULIN                FALSE
#define P_FAMILY_SANDILE                 FALSE
#define P_FAMILY_DARUMAKA                FALSE
#define P_FAMILY_MARACTUS                TRUE
#define P_FAMILY_DWEBBLE                 FALSE
#define P_FAMILY_SCRAGGY                 FALSE
#define P_FAMILY_SIGILYPH                FALSE
#define P_FAMILY_YAMASK                  FALSE
#define P_FAMILY_TIRTOUGA                FALSE
#define P_FAMILY_ARCHEN                  FALSE
#define P_FAMILY_TRUBBISH                TRUE
#define P_FAMILY_ZORUA                   FALSE
#define P_FAMILY_MINCCINO                TRUE
#define P_FAMILY_GOTHITA                 TRUE
#define P_FAMILY_SOLOSIS                 FALSE
#define P_FAMILY_DUCKLETT                FALSE
#define P_FAMILY_VANILLITE               FALSE
#define P_FAMILY_DEERLING                FALSE
#define P_FAMILY_EMOLGA                  TRUE
#define P_FAMILY_KARRABLAST              FALSE
#define P_FAMILY_FOONGUS                 TRUE
#define P_FAMILY_FRILLISH                TRUE
#define P_FAMILY_ALOMOMOLA               TRUE
#define P_FAMILY_JOLTIK                  FALSE
#define P_FAMILY_FERROSEED               TRUE
#define P_FAMILY_KLINK                   FALSE
#define P_FAMILY_TYNAMO                  TRUE
#define P_FAMILY_ELGYEM                  FALSE
#define P_FAMILY_LITWICK                 TRUE
#define P_FAMILY_AXEW                    FALSE
#define P_FAMILY_CUBCHOO                 FALSE
#define P_FAMILY_CRYOGONAL               FALSE
#define P_FAMILY_SHELMET                 FALSE
#define P_FAMILY_STUNFISK                FALSE
#define P_FAMILY_MIENFOO                 FALSE
#define P_FAMILY_DRUDDIGON               FALSE
#define P_FAMILY_GOLETT                  TRUE
#define P_FAMILY_PAWNIARD                TRUE
#define P_FAMILY_BOUFFALANT              FALSE
#define P_FAMILY_RUFFLET                 FALSE
#define P_FAMILY_VULLABY                 FALSE
#define P_FAMILY_HEATMOR                 FALSE
#define P_FAMILY_DURANT                  FALSE
#define P_FAMILY_DEINO                   TRUE
#define P_FAMILY_LARVESTA                TRUE
#define P_FAMILY_COBALION                FALSE
#define P_FAMILY_TERRAKION               FALSE
#define P_FAMILY_VIRIZION                FALSE
#define P_FAMILY_TORNADUS                FALSE
#define P_FAMILY_THUNDURUS               FALSE
#define P_FAMILY_RESHIRAM                FALSE
#define P_FAMILY_ZEKROM                  FALSE
#define P_FAMILY_LANDORUS                FALSE
#define P_FAMILY_KYUREM                  FALSE
#define P_FAMILY_KELDEO                  FALSE
#define P_FAMILY_MELOETTA                TRUE
#define P_FAMILY_GENESECT                FALSE

#define P_FAMILY_CHESPIN                 FALSE
#define P_FAMILY_FENNEKIN                TRUE
#define P_FAMILY_FROAKIE                 FALSE
#define P_FAMILY_BUNNELBY                FALSE
#define P_FAMILY_FLETCHLING              TRUE
#define P_FAMILY_SCATTERBUG              TRUE
#define P_FAMILY_LITLEO                  FALSE
#define P_FAMILY_FLABEBE                 TRUE
#define P_FAMILY_SKIDDO                  FALSE
#define P_FAMILY_PANCHAM                 FALSE
#define P_FAMILY_FURFROU                 FALSE
#define P_FAMILY_ESPURR                  TRUE
#define P_FAMILY_HONEDGE                 FALSE
#define P_FAMILY_SPRITZEE                FALSE
#define P_FAMILY_SWIRLIX                 FALSE
#define P_FAMILY_INKAY                   TRUE
#define P_FAMILY_BINACLE                 FALSE
#define P_FAMILY_SKRELP                  FALSE
#define P_FAMILY_CLAUNCHER               FALSE
#define P_FAMILY_HELIOPTILE              FALSE
#define P_FAMILY_TYRUNT                  FALSE
#define P_FAMILY_AMAURA                  FALSE
#define P_FAMILY_HAWLUCHA                FALSE
#define P_FAMILY_DEDENNE                 FALSE
#define P_FAMILY_CARBINK                 FALSE
#define P_FAMILY_GOOMY                   FALSE
#define P_FAMILY_KLEFKI                  FALSE
#define P_FAMILY_PHANTUMP                TRUE
#define P_FAMILY_PUMPKABOO               FALSE
#define P_FAMILY_BERGMITE                FALSE
#define P_FAMILY_NOIBAT                  FALSE
#define P_FAMILY_XERNEAS                 FALSE
#define P_FAMILY_YVELTAL                 FALSE
#define P_FAMILY_ZYGARDE                 FALSE
#define P_FAMILY_DIANCIE                 FALSE
#define P_FAMILY_HOOPA                   FALSE
#define P_FAMILY_VOLCANION               FALSE

#define P_FAMILY_ROWLET                  FALSE
#define P_FAMILY_LITTEN                  FALSE
#define P_FAMILY_POPPLIO                 TRUE
#define P_FAMILY_PIKIPEK                 FALSE
#define P_FAMILY_YUNGOOS                 FALSE
#define P_FAMILY_GRUBBIN                 FALSE
#define P_FAMILY_CRABRAWLER              FALSE
#define P_FAMILY_ORICORIO                FALSE
#define P_FAMILY_CUTIEFLY                TRUE
#define P_FAMILY_ROCKRUFF                FALSE
#define P_FAMILY_WISHIWASHI              FALSE
#define P_FAMILY_MAREANIE                TRUE
#define P_FAMILY_MUDBRAY                 FALSE
#define P_FAMILY_DEWPIDER                FALSE
#define P_FAMILY_FOMANTIS                FALSE
#define P_FAMILY_MORELULL                FALSE
#define P_FAMILY_SALANDIT                FALSE
#define P_FAMILY_STUFFUL                 FALSE
#define P_FAMILY_BOUNSWEET               FALSE
#define P_FAMILY_COMFEY                  FALSE
#define P_FAMILY_ORANGURU                FALSE
#define P_FAMILY_PASSIMIAN               FALSE
#define P_FAMILY_WIMPOD                  FALSE
#define P_FAMILY_SANDYGAST               FALSE
#define P_FAMILY_PYUKUMUKU               FALSE
#define P_FAMILY_TYPE_NULL               FALSE
#define P_FAMILY_MINIOR                  FALSE
#define P_FAMILY_KOMALA                  TRUE
#define P_FAMILY_TURTONATOR              FALSE
#define P_FAMILY_TOGEDEMARU              FALSE
#define P_FAMILY_MIMIKYU                 FALSE
#define P_FAMILY_BRUXISH                 TRUE
#define P_FAMILY_DRAMPA                  FALSE
#define P_FAMILY_DHELMISE                FALSE
#define P_FAMILY_JANGMO_O                FALSE
#define P_FAMILY_TAPU_KOKO               FALSE
#define P_FAMILY_TAPU_LELE               FALSE
#define P_FAMILY_TAPU_BULU               FALSE
#define P_FAMILY_TAPU_FINI               FALSE
#define P_FAMILY_COSMOG                  FALSE
#define P_FAMILY_NIHILEGO                TRUE
#define P_FAMILY_BUZZWOLE                FALSE
#define P_FAMILY_PHEROMOSA               TRUE
#define P_FAMILY_XURKITREE               FALSE
#define P_FAMILY_CELESTEELA              TRUE
#define P_FAMILY_KARTANA                 TRUE
#define P_FAMILY_GUZZLORD                TRUE
#define P_FAMILY_NECROZMA                FALSE
#define P_FAMILY_MAGEARNA                TRUE
#define P_FAMILY_MARSHADOW               FALSE
#define P_FAMILY_POIPOLE                 FALSE
#define P_FAMILY_STAKATAKA               FALSE
#define P_FAMILY_BLACEPHALON             FALSE
#define P_FAMILY_ZERAORA                 FALSE
#define P_FAMILY_MELTAN                  TRUE

#define P_FAMILY_GROOKEY                 FALSE
#define P_FAMILY_SCORBUNNY               FALSE
#define P_FAMILY_SOBBLE                  FALSE
#define P_FAMILY_SKWOVET                 TRUE
#define P_FAMILY_ROOKIDEE                TRUE
#define P_FAMILY_BLIPBUG                 TRUE
#define P_FAMILY_NICKIT                  FALSE
#define P_FAMILY_GOSSIFLEUR              FALSE
#define P_FAMILY_WOOLOO                  FALSE
#define P_FAMILY_CHEWTLE                 FALSE
#define P_FAMILY_YAMPER                  FALSE
#define P_FAMILY_ROLYCOLY                FALSE
#define P_FAMILY_APPLIN                  FALSE
#define P_FAMILY_SILICOBRA               FALSE
#define P_FAMILY_CRAMORANT               FALSE
#define P_FAMILY_ARROKUDA                FALSE
#define P_FAMILY_TOXEL                   FALSE
#define P_FAMILY_SIZZLIPEDE              FALSE
#define P_FAMILY_CLOBBOPUS               FALSE
#define P_FAMILY_SINISTEA                FALSE
#define P_FAMILY_HATENNA                 TRUE
#define P_FAMILY_IMPIDIMP                FALSE
#define P_FAMILY_MILCERY                 FALSE
#define P_FAMILY_FALINKS                 FALSE
#define P_FAMILY_PINCURCHIN              FALSE
#define P_FAMILY_SNOM                    FALSE
#define P_FAMILY_STONJOURNER             FALSE
#define P_FAMILY_EISCUE                  FALSE
#define P_FAMILY_INDEEDEE                TRUE
#define P_FAMILY_MORPEKO                 FALSE
#define P_FAMILY_CUFANT                  FALSE
#define P_FAMILY_DRACOZOLT               FALSE
#define P_FAMILY_ARCTOZOLT               FALSE
#define P_FAMILY_DRACOVISH               FALSE
#define P_FAMILY_ARCTOVISH               FALSE
#define P_FAMILY_DURALUDON               FALSE
#define P_FAMILY_DREEPY                  FALSE
#define P_FAMILY_ZACIAN                  FALSE
#define P_FAMILY_ZAMAZENTA               FALSE
#define P_FAMILY_ETERNATUS               FALSE
#define P_FAMILY_KUBFU                   FALSE
#define P_FAMILY_ZARUDE                  FALSE
#define P_FAMILY_REGIELEKI               TRUE
#define P_FAMILY_REGIDRAGO               TRUE
#define P_FAMILY_GLASTRIER               FALSE
#define P_FAMILY_SPECTRIER               FALSE
#define P_FAMILY_CALYREX                 FALSE
#define P_FAMILY_ENAMORUS                FALSE

#define P_FAMILY_SPRIGATITO              FALSE
#define P_FAMILY_FUECOCO                 FALSE
#define P_FAMILY_QUAXLY                  FALSE
#define P_FAMILY_LECHONK                 FALSE
#define P_FAMILY_TAROUNTULA              FALSE
#define P_FAMILY_NYMBLE                  FALSE
#define P_FAMILY_PAWMI                   FALSE
#define P_FAMILY_TANDEMAUS               FALSE
#define P_FAMILY_FIDOUGH                 FALSE
#define P_FAMILY_SMOLIV                  TRUE
#define P_FAMILY_SQUAWKABILLY            FALSE
#define P_FAMILY_NACLI                   FALSE
#define P_FAMILY_CHARCADET               FALSE
#define P_FAMILY_TADBULB                 TRUE
#define P_FAMILY_WATTREL                 TRUE
#define P_FAMILY_MASCHIFF                TRUE
#define P_FAMILY_SHROODLE                FALSE
#define P_FAMILY_BRAMBLIN                FALSE
#define P_FAMILY_TOEDSCOOL               TRUE
#define P_FAMILY_KLAWF                   TRUE
#define P_FAMILY_CAPSAKID                FALSE
#define P_FAMILY_RELLOR                  FALSE
#define P_FAMILY_FLITTLE                 FALSE
#define P_FAMILY_TINKATINK               FALSE
#define P_FAMILY_WIGLETT                 TRUE
#define P_FAMILY_BOMBIRDIER              TRUE
#define P_FAMILY_FINIZEN                 FALSE
#define P_FAMILY_VAROOM                  FALSE
#define P_FAMILY_CYCLIZAR                FALSE
#define P_FAMILY_ORTHWORM                FALSE
#define P_FAMILY_GLIMMET                 FALSE
#define P_FAMILY_GREAVARD                FALSE
#define P_FAMILY_FLAMIGO                 FALSE
#define P_FAMILY_CETODDLE                FALSE
#define P_FAMILY_VELUZA                  FALSE
#define P_FAMILY_DONDOZO                 FALSE
#define P_FAMILY_TATSUGIRI               FALSE
#define P_FAMILY_GREAT_TUSK              TRUE
#define P_FAMILY_SCREAM_TAIL             TRUE
#define P_FAMILY_BRUTE_BONNET            TRUE
#define P_FAMILY_FLUTTER_MANE            TRUE
#define P_FAMILY_SLITHER_WING            TRUE
#define P_FAMILY_SANDY_SHOCKS            TRUE
#define P_FAMILY_IRON_TREADS             TRUE
#define P_FAMILY_IRON_BUNDLE             TRUE
#define P_FAMILY_IRON_HANDS              TRUE
#define P_FAMILY_IRON_JUGULIS            TRUE
#define P_FAMILY_IRON_MOTH               TRUE
#define P_FAMILY_IRON_THORNS             TRUE
#define P_FAMILY_FRIGIBAX                FALSE
#define P_FAMILY_GIMMIGHOUL              FALSE
#define P_FAMILY_WO_CHIEN                FALSE
#define P_FAMILY_CHIEN_PAO               FALSE
#define P_FAMILY_TING_LU                 FALSE
#define P_FAMILY_CHI_YU                  FALSE
#define P_FAMILY_ROARING_MOON            TRUE
#define P_FAMILY_IRON_VALIANT            TRUE
#define P_FAMILY_KORAIDON                FALSE
#define P_FAMILY_MIRAIDON                FALSE
#define P_FAMILY_WALKING_WAKE            FALSE
#define P_FAMILY_IRON_LEAVES             FALSE
#define P_FAMILY_POLTCHAGEIST            FALSE
#define P_FAMILY_SINISTCHA               FALSE
#define P_FAMILY_OKIDOGI                 FALSE
#define P_FAMILY_MUNKIDORI               FALSE
#define P_FAMILY_FEZANDIPITI             FALSE
#define P_FAMILY_OGERPON                 FALSE
#define P_FAMILY_GOUGING_FIRE            P_GEN_9_POKEMON
#define P_FAMILY_RAGING_BOLT             P_GEN_9_POKEMON
#define P_FAMILY_IRON_BOULDER            P_GEN_9_POKEMON
#define P_FAMILY_IRON_CROWN              P_GEN_9_POKEMON
#define P_FAMILY_TERAPAGOS               P_GEN_9_POKEMON
#define P_FAMILY_PECHARUNT               P_GEN_9_POKEMON

#endif // GUARD_CONFIG_SPECIES_ENABLED_H
