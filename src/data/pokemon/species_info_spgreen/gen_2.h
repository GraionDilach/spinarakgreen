#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen2[] =
{
#endif

#if P_FAMILY_CHIKORITA
    [SPECIES_CHIKORITA] =
    {
        .baseHP        = 55,
        .baseAttack    = 49,
        .baseDefense   = 65,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_DRAGON },
        .catchRate = 130,
        .expYield = 139,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LEAF_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Chikorita"),
        .cryId = CRY_CHIKORITA,
        .natDexNum = NATIONAL_DEX_CHIKORITA,
        .categoryName = _("Leaf"),
        .height = 9,
        .weight = 64,
        .description = COMPOUND_STRING(
            "It waves its leaf around to keep foes\n"
            "at bay. However, a sweet fragrance also\n"
            "wafts from the leaf, creating a friendly\n"
            "atmosphere that becalms the battlers."),
        .pokemonScale = 512,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Chikorita, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Chikorita,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Chikorita, 56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Chikorita),
        ICON(Chikorita, 1),
        LEARNSETS(Chikorita),
        .eggMoveLearnset = sChikoritaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_BAYLEEF}),
    },

    [SPECIES_BAYLEEF] =
    {
        .baseHP        = 60,
        .baseAttack    = 62,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = { TYPE_GRASS, TYPE_DRAGON },
        .catchRate = 96,
        .expYield = 186,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LEAF_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bayleef"),
        .cryId = CRY_BAYLEEF,
        .natDexNum = NATIONAL_DEX_BAYLEEF,
        .categoryName = _("Leaf"),
        .height = 12,
        .weight = 158,
        .description = COMPOUND_STRING(
            "A Bayleef's neck is ringed by curled-up\n"
            "leaves. Inside each leaf is a small tree\n"
            "shoot. The fragrance of this shoot\n"
            "makes people peppy."),
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Bayleef, 48, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Bayleef,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Bayleef, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Bayleef),
        ICON(Bayleef, 1),
        LEARNSETS(Bayleef),
        .eggMoveLearnset = sChikoritaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 44, SPECIES_MEGANIUM}),
    },

    [SPECIES_MEGANIUM] =
    {
        .baseHP        = 100,
        .baseAttack    = 126,
        .baseDefense   = 101,
        .baseSpeed     = 91,
        .baseSpAttack  = 100,
        .baseSpDefense = 101,
        .types = { TYPE_GRASS, TYPE_DRAGON },
        .catchRate = 29,
        .expYield = 329,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LEAF_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Meganium"),
        .cryId = CRY_MEGANIUM,
        .natDexNum = NATIONAL_DEX_MEGANIUM,
        .categoryName = _("Herb"),
        .height = 18,
        .weight = 1005,
        .description = COMPOUND_STRING(
            "The fragrance of a Meganium's flower\n"
            "soothes and calms emotions. In battle,\n"
            "it gives off more of its becalming scent\n"
            "to blunt the foe's fighting spirit."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 277,
        .trainerOffset = 1,
        FRONT_PIC(Meganium, 48, 64),
        FRONT_PIC_FEMALE(Meganium, 48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Meganium,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Meganium, 56, 64),
        BACK_PIC_FEMALE(Meganium, 56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Meganium),
        ICON(Meganium, 1),
        LEARNSETS(Meganium),
        .eggMoveLearnset = sChikoritaEggMoveLearnset,
    },
#endif //P_FAMILY_CHIKORITA

#if P_FAMILY_CYNDAQUIL
    [SPECIES_CYNDAQUIL] =
    {
        .baseHP        = 39,
        .baseAttack    = 52,
        .baseDefense   = 43,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_GROUND },
        .catchRate = 149,
        .expYield = 124,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_FLASH_FIRE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Cyndaquil"),
        .cryId = CRY_CYNDAQUIL,
        .natDexNum = NATIONAL_DEX_CYNDAQUIL,
        .categoryName = _("Fire Mouse"),
        .height = 5,
        .weight = 79,
        .description = COMPOUND_STRING(
            "It flares flames from its back to protect\n"
            "itself. The fire burns vigorously if the\n"
            "Pokémon is angry. When it is tired,\n"
            "it sputters with incomplete combustion."),
        .pokemonScale = 539,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cyndaquil, 48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Cyndaquil,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Cyndaquil, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Cyndaquil),
        ICON(Cyndaquil, 3),
        LEARNSETS(Cyndaquil),
        .eggMoveLearnset = sCyndaquilEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_QUILAVA}),
    },

    [SPECIES_QUILAVA] =
    {
        .baseHP        = 58,
        .baseAttack    = 64,
        .baseDefense   = 58,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .types = { TYPE_FIRE, TYPE_GROUND },
        .catchRate = 103,
        .expYield = 178,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_FLASH_FIRE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Quilava"),
        .cryId = CRY_QUILAVA,
        .natDexNum = NATIONAL_DEX_QUILAVA,
        .categoryName = _("Volcano"),
        .height = 9,
        .weight = 190,
        .description = COMPOUND_STRING(
            "It intimidates foes with intense gusts of\n"
            "flames and superheated air. Its quick\n"
            "nimbleness lets it dodge attacks even\n"
            "while scorching an enemy."),
        .pokemonScale = 329,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Quilava, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Quilava,
        .frontAnimId = ANIM_H_STRETCH,
        BACK_PIC(Quilava, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Quilava),
        ICON(Quilava, 3),
        LEARNSETS(Quilava),
        .eggMoveLearnset = sCyndaquilEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_DAY, 36, SPECIES_TYPHLOSION},
                                {EVO_LEVEL_NIGHT, 36, SPECIES_TYPHLOSION_HISUIAN}),
    },

#define TYPHLOSION_MISC_INFO                                            \
        .catchRate = 53,                                                \
        .expYield = 258,                                                \
        .evYield_SpAttack = 3,                                          \
        .genderRatio = PERCENT_FEMALE(12.5),                            \
        .eggCycles = 20,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_550,                                       \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },              \
        .bodyColor = BODY_COLOR_YELLOW,                                 \
        .cryId = CRY_TYPHLOSION,                                        \
        .eggMoveLearnset = sCyndaquilEggMoveLearnset

    [SPECIES_TYPHLOSION] =
    {
        TYPHLOSION_MISC_INFO,
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_GROUND },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_FLASH_FIRE },
        .speciesName = _("Typhlosion"),
        .natDexNum = NATIONAL_DEX_TYPHLOSION,
        .categoryName = _("Volcano"),
        .height = 17,
        .weight = 795,
        .description = COMPOUND_STRING(
            "It can hide behind a shimmering heat haze\n"
            "that it creates using its intense flames.\n"
            "Typhlosion create blazing explosive\n"
            "blasts that burn everything to cinders."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
        FRONT_PIC(Typhlosion, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Typhlosion,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 20,
        BACK_PIC(Typhlosion, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Typhlosion),
        ICON(Typhlosion, 3),
        LEARNSETS(Typhlosion),
    },

#if P_HISUIAN_FORMS
    [SPECIES_TYPHLOSION_HISUIAN] =
    {
        TYPHLOSION_MISC_INFO,
        .baseHP        = 73,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 95,
        .baseSpAttack  = 119,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_GHOST },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_FRISK },
        .speciesName = _("Hislosion"),
        .natDexNum = NATIONAL_DEX_TYPHLOSION_HISUIAN,
        .categoryName = _("Ghost Flame"),
        .height = 16,
        .weight = 698,
        .description = COMPOUND_STRING(
            "Said to purify lost, forsaken souls with\n"
            "its flames and guide them to the afterlife.\n"
            "It's believed its form was influenced by\n"
            "the energy of Mt. Coronet in ancient times."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
        FRONT_PIC(TyphlosionHisuian, 48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TyphlosionHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(TyphlosionHisuian, 64, 56),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(TyphlosionHisuian),
        ICON(TyphlosionHisuian, 1),
        LEARNSETS(TyphlosionHisuian),
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_CYNDAQUIL

#if P_FAMILY_TOTODILE
    [SPECIES_TOTODILE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 43,
        .baseSpAttack  = 50,
        .baseSpDefense = 64,
        .types = { TYPE_WATER, TYPE_DARK },
        .catchRate = 136,
        .expYield = 135,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Totodile"),
        .cryId = CRY_TOTODILE,
        .natDexNum = NATIONAL_DEX_TOTODILE,
        .categoryName = _("Big Jaw"),
        .height = 6,
        .weight = 95,
        .description = COMPOUND_STRING(
            "Despite its small body, Totodile's jaws\n"
            "are very powerful. While it may think it is\n"
            "just playfully nipping, its bite has enough\n"
            "strength to cause serious injury."),
        .pokemonScale = 487,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Totodile, 40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Totodile,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Totodile, 56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Totodile),
        ICON(Totodile, 0),
        LEARNSETS(Totodile),
        .eggMoveLearnset = sTotodileEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_CROCONAW}),
    },

    [SPECIES_CROCONAW] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 58,
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_DARK },
        .catchRate = 93,
        .expYield = 188,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Croconaw"),
        .cryId = CRY_CROCONAW,
        .natDexNum = NATIONAL_DEX_CROCONAW,
        .categoryName = _("Big Jaw"),
        .height = 11,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Once its jaws clamp down on its foe, it will\n"
            "absolutely not let go. Because the tips of\n"
            "its fangs are forked back like fishhooks,\n"
            "they become irremovably embedded."),
        .pokemonScale = 378,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Croconaw, 48, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Croconaw,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Croconaw, 56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Croconaw),
        ICON(Croconaw, 0),
        LEARNSETS(Croconaw),
        .eggMoveLearnset = sTotodileEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_FERALIGATR}),
    },

    [SPECIES_FERALIGATR] =
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 100,
        .baseSpeed     = 78,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .types = { TYPE_WATER, TYPE_DARK },
        .catchRate = 45,
        .expYield = 297,
        .evYield_Attack = 2,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Feraligatr"),
        .cryId = CRY_FERALIGATR,
        .natDexNum = NATIONAL_DEX_FERALIGATR,
        .categoryName = _("Big Jaw"),
        .height = 23,
        .weight = 888,
        .description = COMPOUND_STRING(
            "It opens its huge mouth to intimidate\n"
            "enemies. In battle, it runs using its thick\n"
            "and powerful hind legs to charge the\n"
            "foe with incredible speed."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
        FRONT_PIC(Feraligatr, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Feraligatr,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 5,
        BACK_PIC(Feraligatr, 56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Feraligatr),
        ICON(Feraligatr, 0),
        LEARNSETS(Feraligatr),
        .eggMoveLearnset = sTotodileEggMoveLearnset,
    },
#endif //P_FAMILY_TOTODILE

#if P_FAMILY_SENTRET
    [SPECIES_SENTRET] =
    {
        .baseHP        = 50,
        .baseAttack    = 46,
        .baseDefense   = 40,
        .baseSpeed     = 55,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 158,
        .expYield = 116,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_KEEN_EYE, ABILITY_FRISK },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sentret"),
        .cryId = CRY_SENTRET,
        .natDexNum = NATIONAL_DEX_SENTRET,
        .categoryName = _("Scout"),
        .height = 8,
        .weight = 60,
        .description = COMPOUND_STRING(
            "They take turns standing guard when it\n"
            "is time to sleep. The sentry awakens the\n"
            "others if it senses danger. If one becomes\n"
            "separated, it turns sleepless with fear."),
        .pokemonScale = 439,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sentret, 40, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Sentret,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Sentret, 48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Sentret),
        ICON(Sentret, 2),
        LEARNSETS(Sentret),
        .eggMoveLearnset = sSentretEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_FURRET}),
    },

    [SPECIES_FURRET] =
    {
        .baseHP        = 95,
        .baseAttack    = 86,
        .baseDefense   = 65,
        .baseSpeed     = 108,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 70,
        .expYield = 234,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_KEEN_EYE, ABILITY_FRISK },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Furret"),
        .cryId = CRY_FURRET,
        .natDexNum = NATIONAL_DEX_FURRET,
        .categoryName = _("Long Body"),
        .height = 18,
        .weight = 325,
        .description = COMPOUND_STRING(
            "A Furret has a very slim build. When under\n"
            "attack, it can squirm through narrow\n"
            "spaces and get away. In spite of its short\n"
            "limbs, it is very nimble and fleet."),
        .pokemonScale = 346,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Furret, 48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Furret,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        BACK_PIC(Furret, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Furret),
        ICON(Furret, 2),
        LEARNSETS(Furret),
        .eggMoveLearnset = sSentretEggMoveLearnset,
    },
#endif //P_FAMILY_SENTRET

#if P_FAMILY_HOOTHOOT
    [SPECIES_HOOTHOOT] =
    {
        .baseHP        = 65,
        .baseAttack    = 55,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_GHOST, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 52,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_INSOMNIA, ABILITY_KEEN_EYE, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hoothoot"),
        .cryId = CRY_HOOTHOOT,
        .natDexNum = NATIONAL_DEX_HOOTHOOT,
        .categoryName = _("Owl"),
        .height = 7,
        .weight = 212,
        .description = COMPOUND_STRING(
            "It has an internal organ that senses\n"
            "the earth's rotation. Using this special\n"
            "organ, a Hoothoot begins hooting at\n"
            "precisely the same time every day."),
        .pokemonScale = 380,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Hoothoot, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Hoothoot,
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        BACK_PIC(Hoothoot, 56, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Hoothoot),
        ICON(Hoothoot, 2),
        LEARNSETS(Hoothoot),
        .eggMoveLearnset = sHoothootEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_WATCHOWL}),
    },

    [SPECIES_WATCHOWL] =
    {
        .baseHP        = 100,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpAttack  = 84,
        .baseSpDefense = 96,
        .types = { TYPE_GHOST, TYPE_FLYING },
        .catchRate = 84,
        .expYield = 218,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_INSOMNIA, ABILITY_KEEN_EYE, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Watchowl"),
        .cryId = CRY_NOCTOWL,
        .natDexNum = NATIONAL_DEX_WATCHOWL,
        .categoryName = _("Owl"),
        .height = 16,
        .weight = 408,
        .description = COMPOUND_STRING(
            "It unfailingly catches prey in darkness.\n"
            "Watchowl owe their success to superior\n"
            "vision that allows them to see in minimal\n"
            "light, and to their supple and silent wings."),
        .pokemonScale = 278,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Noctowl, 40, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Noctowl,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Noctowl, 48, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Noctowl),
        ICON(Noctowl, 2),
        LEARNSETS(Watchowl),
        .eggMoveLearnset = sHoothootEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_NOCTOWL}),
    },

    [SPECIES_NOCTOWL] =
    {
        .baseHP        = 120,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 75,
        .baseSpAttack  = 96,
        .baseSpDefense = 110,
        .types = { TYPE_GHOST, TYPE_FLYING },
        .catchRate = 49,
        .expYield = 264,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_INSOMNIA, ABILITY_KEEN_EYE, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Noctowl"),
        .cryId = CRY_NOCTOWL,
        .natDexNum = NATIONAL_DEX_NOCTOWL,
        .categoryName = _("Owl"),
        .height = 16,
        .weight = 408,
        .description = COMPOUND_STRING(
            "It unfailingly catches prey in darkness.\n"
            "Noctowl owe their success to superior\n"
            "vision that allows them to see in minimal\n"
            "light, and to their supple and silent wings."),
        .pokemonScale = 278,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Noctowl, 40, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Noctowl,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Noctowl, 48, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Noctowl),
        ICON(Noctowl, 2),
        LEARNSETS(Noctowl),
        .eggMoveLearnset = sHoothootEggMoveLearnset,
    },
#endif //P_FAMILY_HOOTHOOT

#if P_FAMILY_LEDYBA
    [SPECIES_LEDYSTAR] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 30,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = { TYPE_BUG, TYPE_FLYING },
        .catchRate = 161,
        .expYield = 114,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SWARM, ABILITY_EARLY_BIRD, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Ledystar"),
        .cryId = CRY_LEDYBA,
        .natDexNum = NATIONAL_DEX_LEDYSTAR,
        .categoryName = _("Five Star"),
        .height = 10,
        .weight = 108,
        .description = COMPOUND_STRING(
            "Ledyba communicate using a fluid that\n"
            "they secrete from where the legs join the\n"
            "body. They are said to convey feelings to\n"
            "others by altering the fluid's scent."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ledyba, 48, 48),
        FRONT_PIC_FEMALE(Ledyba, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Ledyba,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Ledyba, 56, 48),
        BACK_PIC_FEMALE(Ledyba, 56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Ledyba),
        ICON(Ledyba, 0),
        LEARNSETS(Ledystar),
        .eggMoveLearnset = sLedystarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_LEDYBA}),
    },

    [SPECIES_LEDYBA] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 85,
        .baseSpAttack  = 50,
        .baseSpDefense = 95,
        .types = { TYPE_BUG, TYPE_FLYING },
        .catchRate = 113,
        .expYield = 169,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SWARM, ABILITY_EARLY_BIRD, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Ledyba"),
        .cryId = CRY_LEDYBA,
        .natDexNum = NATIONAL_DEX_LEDYBA,
        .categoryName = _("Five Star"),
        .height = 10,
        .weight = 108,
        .description = COMPOUND_STRING(
            "Ledyba communicate using a fluid that\n"
            "they secrete from where the legs join the\n"
            "body. They are said to convey feelings to\n"
            "others by altering the fluid's scent."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ledyba, 48, 48),
        FRONT_PIC_FEMALE(Ledyba, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Ledyba,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Ledyba, 56, 48),
        BACK_PIC_FEMALE(Ledyba, 56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Ledyba),
        ICON(Ledyba, 0),
        LEARNSETS(Ledyba),
        .eggMoveLearnset = sLedystarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_LEDIAN}),
    },

    [SPECIES_LEDIAN] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 55,
        .baseSpeed     = 105,
        .baseSpAttack  = 55,
        .baseSpDefense = 110,
        .types = { TYPE_BUG, TYPE_FIGHTING },
        .catchRate = 61,
        .expYield = 247,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SWARM, ABILITY_EARLY_BIRD, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Ledian"),
        .cryId = CRY_LEDIAN,
        .natDexNum = NATIONAL_DEX_LEDIAN,
        .categoryName = _("Five Star"),
        .height = 14,
        .weight = 356,
        .description = COMPOUND_STRING(
            "It is said that in lands with clean air,\n"
            "where the stars fill the sky, there live\n"
            "many Ledian. For good reason, they use\n"
            "the light of the stars as energy."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ledian, 48, 56),
        FRONT_PIC_FEMALE(Ledian, 48, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Ledian,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 10,
        BACK_PIC(Ledian, 64, 64),
        BACK_PIC_FEMALE(Ledian, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Ledian),
        ICON(Ledian, 0),
        LEARNSETS(Ledian),
        .eggMoveLearnset = sLedystarEggMoveLearnset,
    },
#endif //P_FAMILY_LEDYBA

#if P_FAMILY_SPINARAK
    [SPECIES_SPINARAK] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 144,
        .expYield = 128,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SWARM, ABILITY_INSOMNIA, ABILITY_SNIPER },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Spinarak"),
        .cryId = CRY_SPINARAK,
        .natDexNum = NATIONAL_DEX_SPINARAK,
        .categoryName = _("String Spit"),
        .height = 5,
        .weight = 85,
        .description = COMPOUND_STRING(
            "The web it spins can be considered its\n"
            "second nervous system. It is said that a\n"
            "Spinarak determines its prey by the tiny\n"
            "vibrations it feels through the web."),
        .pokemonScale = 414,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Spinarak, 48, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Spinarak,
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        BACK_PIC(Spinarak, 64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Spinarak),
        ICON(Spinarak, 1),
        LEARNSETS(Spinarak),
        .eggMoveLearnset = sSpinarakEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_ARIADOS}),
    },

    [SPECIES_ARIADOS] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 92,
        .baseSpeed     = 80,
        .baseSpAttack  = 70,
        .baseSpDefense = 86,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 55,
        .expYield = 255,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SWARM, ABILITY_INSOMNIA, ABILITY_SNIPER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Ariados"),
        .cryId = CRY_ARIADOS,
        .natDexNum = NATIONAL_DEX_ARIADOS,
        .categoryName = _("Long Leg"),
        .height = 11,
        .weight = 335,
        .description = COMPOUND_STRING(
            "Its feet are tipped with tiny hooked claws\n"
            "that enable it to scuttle on ceilings and\n"
            "vertical walls. It constricts its foe with\n"
            "thin and strong silk webbing."),
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ariados, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Ariados,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Ariados, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Ariados),
        ICON(Ariados, 0),
        LEARNSETS(Ariados),
        .eggMoveLearnset = sSpinarakEggMoveLearnset,
    },
#endif //P_FAMILY_SPINARAK

#if P_FAMILY_CHINCHOU
    [SPECIES_CHINCHOU] =
    {
        .baseHP        = 75,
        .baseAttack    = 38,
        .baseDefense   = 38,
        .baseSpeed     = 67,
        .baseSpAttack  = 56,
        .baseSpDefense = 56,
        .types = { TYPE_WATER, TYPE_ELECTRIC },
        .catchRate = 139,
        .expYield = 132,
        .evYield_HP = 1,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_ILLUMINATE, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Chinchou"),
        .cryId = CRY_CHINCHOU,
        .natDexNum = NATIONAL_DEX_CHINCHOU,
        .categoryName = _("Angler"),
        .height = 5,
        .weight = 120,
        .description = COMPOUND_STRING(
            "When it senses danger, it discharges\n"
            "positive and negative electricity from its\n"
            "two antennae. It lives in depths beyond\n"
            "sunlight's reach."),
        .pokemonScale = 424,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Chinchou, 64, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Chinchou,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Chinchou, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Chinchou),
        ICON(Chinchou, 2),
        LEARNSETS(Chinchou),
        .eggMoveLearnset = sChinchouEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_LANTURN}),
    },

    [SPECIES_LANTURN] =
    {
        .baseHP        = 125,
        .baseAttack    = 58,
        .baseDefense   = 58,
        .baseSpeed     = 67,
        .baseSpAttack  = 86,
        .baseSpDefense = 86,
        .types = { TYPE_WATER, TYPE_ELECTRIC },
        .catchRate = 72,
        .expYield = 232,
        .evYield_HP = 2,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_ILLUMINATE, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Lanturn"),
        .cryId = CRY_LANTURN,
        .natDexNum = NATIONAL_DEX_LANTURN,
        .categoryName = _("Light"),
        .height = 12,
        .weight = 225,
        .description = COMPOUND_STRING(
            "The light-emitting orbs on its back are\n"
            "very bright. They are formed from a part of\n"
            "its dorsal fin. This Pokémon illuminates\n"
            "the inky darkness of deep seas."),
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lanturn, 64, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Lanturn,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        BACK_PIC(Lanturn, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Lanturn),
        ICON(Lanturn, 0),
        LEARNSETS(Lanturn),
        .eggMoveLearnset = sChinchouEggMoveLearnset,
    },
#endif //P_FAMILY_CHINCHOU

#if P_FAMILY_TOGEPI
    [SPECIES_TOGEPI] =
    {
        .baseHP        = 35,
        .baseAttack    = 20,
        .baseDefense   = 65,
        .baseSpeed     = 20,
        .baseSpAttack  = 40,
        .baseSpDefense = 65,
        .types = { TYPE_FAIRY, TYPE_FAIRY },
        .catchRate = 181,
        .expYield = 89,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_250,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_HUSTLE, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Togepi"),
        .cryId = CRY_TOGEPI,
        .natDexNum = NATIONAL_DEX_TOGEPI,
        .categoryName = _("Spike Ball"),
        .height = 3,
        .weight = 15,
        .description = COMPOUND_STRING(
            "As its energy, it uses the feelings of\n"
            "compassion and pleasure exuded by\n"
            "people and Pokémon. It stores up happy\n"
            "feelings in its shell, then shares them out."),
        .pokemonScale = 507,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Togepi, 24, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Togepi,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        BACK_PIC(Togepi, 48, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Togepi),
        ICON(Togepi, 0),
        LEARNSETS(Togepi),
        .eggMoveLearnset = sTogepiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_TOGETIC}),
    },

    [SPECIES_TOGETIC] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 105,
        .types = { TYPE_FAIRY, TYPE_FLYING },
        .catchRate = 103,
        .expYield = 178,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_HUSTLE, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Togetic"),
        .cryId = CRY_TOGETIC,
        .natDexNum = NATIONAL_DEX_TOGETIC,
        .categoryName = _("Happiness"),
        .height = 6,
        .weight = 32,
        .description = COMPOUND_STRING(
            "It is said to be a Pokémon that brings good\n"
            "fortune. When it spots someone who is pure\n"
            "of heart, a Togetic appears and shares its\n"
            "happiness with that person."),
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Togetic, 32, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Togetic,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Togetic, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Togetic),
        ICON(Togetic, 0),
        LEARNSETS(Togetic),
        .eggMoveLearnset = sTogepiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_TOGEKISS}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_TOGEKISS] =
    {
        .baseHP        = 85,
        .baseAttack    = 50,
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 120,
        .baseSpDefense = 115,
        .types = { TYPE_FAIRY, TYPE_FLYING },
        .catchRate = 49,
        .expYield = 264,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_HUSTLE, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Togekiss"),
        .cryId = CRY_TOGEKISS,
        .natDexNum = NATIONAL_DEX_TOGEKISS,
        .categoryName = _("Jubilee"),
        .height = 15,
        .weight = 380,
        .description = COMPOUND_STRING(
            "As everyone knows, it visits peaceful\n"
            "regions, bringing them gifts of kindness\n"
            "and sweet blessings. It will never appear\n"
            "where there is strife."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        FRONT_PIC(Togekiss, 64, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Togekiss,
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 14,
        BACK_PIC(Togekiss, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Togekiss),
        ICON(Togekiss, 2),
        LEARNSETS(Togekiss),
        .eggMoveLearnset = sTogepiEggMoveLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TOGEPI

#if P_FAMILY_NATU
    [SPECIES_NATU] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 45,
        .types = { TYPE_PSYCHIC, TYPE_FLYING },
        .catchRate = 144,
        .expYield = 128,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_EARLY_BIRD, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Natu"),
        .cryId = CRY_NATU,
        .natDexNum = NATIONAL_DEX_NATU,
        .categoryName = _("Tiny Bird"),
        .height = 2,
        .weight = 20,
        .description = COMPOUND_STRING(
            "It runs up short trees that grow on the\n"
            "savanna to peck at new shoots.\n"
            "A Natu's eyes look as if they are\n"
            "always observing something."),
        .pokemonScale = 610,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Natu, 32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Natu,
        .frontAnimId = ANIM_H_JUMPS,
        .frontAnimDelay = 30,
        BACK_PIC(Natu, 40, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Natu),
        ICON(Natu, 1),
        LEARNSETS(Natu),
        .eggMoveLearnset = sNatuEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_SATU}),
    },

    [SPECIES_SATU] =
    {
        .baseHP        = 53,
        .baseAttack    = 62,
        .baseDefense   = 57,
        .baseSpeed     = 87,
        .baseSpAttack  = 93,
        .baseSpDefense = 73,
        .types = { TYPE_PSYCHIC, TYPE_FLYING },
        .catchRate = 94,
        .expYield = 187,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_EARLY_BIRD, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Satu"),
        .cryId = CRY_XATU,
        .natDexNum = NATIONAL_DEX_SATU,
        .categoryName = _("Mystic"),
        .height = 15,
        .weight = 150,
        .description = COMPOUND_STRING(
            "It has the enigmatic power of foreseeing\n"
            "the future. Some people in different lands\n"
            "have long believed that Xatu are\n"
            "emissaries from another world."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 318,
        .trainerOffset = 4,
        FRONT_PIC(Xatu, 40, 56),
        FRONT_PIC_FEMALE(Xatu, 40, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Xatu,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Xatu, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Xatu),
        ICON(Xatu, 1),
        LEARNSETS(Satu),
        .eggMoveLearnset = sNatuEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_XATU}),
    },

    [SPECIES_XATU] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 115,
        .baseSpDefense = 100,
        .types = { TYPE_PSYCHIC, TYPE_FLYING },
        .catchRate = 54,
        .expYield = 256,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_EARLY_BIRD, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Xatu"),
        .cryId = CRY_XATU,
        .natDexNum = NATIONAL_DEX_XATU,
        .categoryName = _("Mystic"),
        .height = 15,
        .weight = 150,
        .description = COMPOUND_STRING(
            "It has the enigmatic power of foreseeing\n"
            "the future. Some people in different lands\n"
            "have long believed that Xatu are\n"
            "emissaries from another world."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 318,
        .trainerOffset = 4,
        FRONT_PIC(Xatu, 40, 56),
        FRONT_PIC_FEMALE(Xatu, 40, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Xatu,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Xatu, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Xatu),
        ICON(Xatu, 1),
        LEARNSETS(Xatu),
        .eggMoveLearnset = sNatuEggMoveLearnset,
    },
#endif //P_FAMILY_NATU

#if P_FAMILY_MAREEP
    [SPECIES_MAREEP] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 164,
        .expYield = 112,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_PLUS },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Mareep"),
        .cryId = CRY_MAREEP,
        .natDexNum = NATIONAL_DEX_MAREEP,
        .categoryName = _("Wool"),
        .height = 6,
        .weight = 78,
        .description = COMPOUND_STRING(
            "Its fluffy wool rubs together and builds\n"
            "a static charge. The more energy is\n"
            "charged, the more brightly the lightbulb\n"
            "at the tip of its tail glows."),
        .pokemonScale = 379,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Mareep, 40, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Mareep,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 50,
        BACK_PIC(Mareep, 56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Mareep),
        ICON(Mareep, 0),
        LEARNSETS(Mareep),
        .eggMoveLearnset = sMareepEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_FLAAFFY}),
    },

    [SPECIES_FLAAFFY] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 45,
        .baseSpAttack  = 80,
        .baseSpDefense = 60,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 122,
        .expYield = 160,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_PLUS },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Flaaffy"),
        .cryId = CRY_FLAAFFY,
        .natDexNum = NATIONAL_DEX_FLAAFFY,
        .categoryName = _("Wool"),
        .height = 8,
        .weight = 133,
        .description = COMPOUND_STRING(
            "Its fleece quality changes to generate\n"
            "strong static electricity with a small\n"
            "amount of wool. The bare, slick parts of its\n"
            "hide are shielded against electricity."),
        .pokemonScale = 372,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Flaaffy, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Flaaffy,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Flaaffy, 48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Flaaffy),
        ICON(Flaaffy, 0),
        LEARNSETS(Flaaffy),
        .eggMoveLearnset = sMareepEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_AMPHAROS}),
    },

#define AMPHAROS_MISC_INFO                                  \
        .catchRate = 29,                                    \
        .evYield_SpAttack = 3,                              \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_650,                           \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },\
        .bodyColor = BODY_COLOR_YELLOW,                     \
        .categoryName = _("Light"),                         \
        .height = 14,                                       \
        .weight = 615,                                      \
        .pokemonScale = 256,                                \
        .pokemonOffset = 4,                                 \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .eggMoveLearnset = sMareepEggMoveLearnset

    [SPECIES_AMPHAROS] =
    {
        AMPHAROS_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 95,
        .baseDefense   = 105,
        .baseSpeed     = 55,
        .baseSpAttack  = 165,
        .baseSpDefense = 110,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .expYield = 330,
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_PLUS },
        .speciesName = _("Ampharos"),
        .natDexNum = NATIONAL_DEX_AMPHAROS,
        .cryId = CRY_AMPHAROS,
        .description = COMPOUND_STRING(
            "It gives off so much light that it can be\n"
            "seen even from space. People in the old\n"
            "days used its light to send signals back\n"
            "and forth with others far away."),
        FRONT_PIC(Ampharos, 56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Ampharos,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .frontAnimDelay = 10,
        BACK_PIC(Ampharos, 56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Ampharos),
        ICON(Ampharos, 0),
        LEARNSETS(Ampharos),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AMPHAROS_MEGA] =
    {
        AMPHAROS_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 95,
        .baseDefense   = 105,
        .baseSpeed     = 55,
        .baseSpAttack  = 165,
        .baseSpDefense = 110,
        .types = { TYPE_ELECTRIC, TYPE_DRAGON },
        .expYield = 330,
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER },
        .speciesName = _("Amphamos"),
        .natDexNum = NATIONAL_DEX_AMPHAROS_MEGA,
        .cryId = CRY_AMPHAROS_MEGA,
        .description = COMPOUND_STRING(
            "Massive amounts of energy intensely\n"
            "stimulated Amphamos's cells, apparently\n"
            "awakening its long-sleeping dragon's\n"
            "blood."),
        FRONT_PIC(AmpharosMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_AmpharosMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(AmpharosMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(AmpharosMega),
        ICON(AmpharosMega, 0),
        LEARNSETS(AmpharosMega),
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAREEP

#if P_FAMILY_MARILL
#if P_GEN_3_CROSS_EVOS
    [SPECIES_AZURILL] =
    {
        .baseHP        = 50,
        .baseAttack    = 20,
        .baseDefense   = 40,
        .baseSpeed     = 20,
        .baseSpAttack  = 20,
        .baseSpDefense = 40,
        .types = { TYPE_NORMAL, TYPE_FAIRY },
        .catchRate = 206,
        .expYield = 69,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_250,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_THICK_FAT, ABILITY_HUGE_POWER, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Azurill"),
        .cryId = CRY_AZURILL,
        .natDexNum = NATIONAL_DEX_AZURILL,
        .categoryName = _("Polka Dot"),
        .height = 2,
        .weight = 20,
        .description = COMPOUND_STRING(
            "Its tail, which is packed with nutrition,\n"
            "is very bouncy like a rubber ball. On sunny\n"
            "days they gather at the edge of water and\n"
            "splash about for fun."),
        .pokemonScale = 603,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Azurill, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Azurill,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Azurill, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Azurill),
        ICON(Azurill, 0),
        LEARNSETS(Azurill),
        .eggMoveLearnset = sAzurillEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_MARILL}),
    },
#endif //P_GEN_3_CROSS_EVOS

    [SPECIES_MARILL] =
    {
        .baseHP        = 70,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_FAIRY },
        .catchRate = 120,
        .expYield = 163,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_THICK_FAT, ABILITY_HUGE_POWER, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Marill"),
        .cryId = CRY_MARILL,
        .natDexNum = NATIONAL_DEX_MARILL,
        .categoryName = _("Aqua Mouse"),
        .height = 4,
        .weight = 85,
        .description = COMPOUND_STRING(
            "Its body is covered with water-repellent\n"
            "fur. Because of the fur, it can swim\n"
            "through water at high speed without being\n"
            "slowed by the water's resistance."),
        .pokemonScale = 476,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Marill, 56, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Marill,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Marill, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Marill),
        ICON(Marill, 0),
        LEARNSETS(Marill),
        .eggMoveLearnset = sAzurillEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_AZUMARILL}),
    },

    [SPECIES_AZUMARILL] =
    {
        .baseHP        = 125,
        .baseAttack    = 55,
        .baseDefense   = 95,
        .baseSpeed     = 60,
        .baseSpAttack  = 90,
        .baseSpDefense = 115,
        .types = { TYPE_WATER, TYPE_FAIRY },
        .catchRate = 51,
        .expYield = 261,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_THICK_FAT, ABILITY_HUGE_POWER, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Azumarill"),
        .cryId = CRY_AZUMARILL,
        .natDexNum = NATIONAL_DEX_AZUMARILL,
        .categoryName = _("Aqua Rabbit"),
        .height = 8,
        .weight = 285,
        .description = COMPOUND_STRING(
            "It lives in water virtually all day long.\n"
            "Its body color and pattern act as\n"
            "camouflage that makes it tough for\n"
            "enemies to spot in water."),
        .pokemonScale = 448,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Azumarill, 56, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Azumarill,
        .frontAnimId = ANIM_SHRINK_GROW,
        BACK_PIC(Azumarill, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Azumarill),
        ICON(Azumarill, 0),
        LEARNSETS(Azumarill),
        .eggMoveLearnset = sAzurillEggMoveLearnset,
    },
#endif //P_FAMILY_MARILL

#if P_FAMILY_SUDOWOODO
#if P_GEN_4_CROSS_EVOS
    [SPECIES_BONSLY] =
    {
        .baseHP        = 50,
        .baseAttack    = 80,
        .baseDefense   = 95,
        .baseSpeed     = 10,
        .baseSpAttack  = 10,
        .baseSpDefense = 45,
        .types = { TYPE_ROCK, TYPE_ROCK },
        .catchRate = 159,
        .expYield = 116,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bonsly"),
        .cryId = CRY_BONSLY,
        .natDexNum = NATIONAL_DEX_BONSLY,
        .categoryName = _("Bonsai"),
        .height = 5,
        .weight = 150,
        .description = COMPOUND_STRING(
            "Bonsly prefers an arid atmosphere.\n"
            "In order to adjust the level of fluids\n"
            "in its body, it exudes water from its eyes.\n"
            "This makes it appear to be crying."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Bonsly, 32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Bonsly,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        BACK_PIC(Bonsly, 40, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Bonsly),
        ICON(Bonsly, 1),
        LEARNSETS(Bonsly),
        .eggMoveLearnset = sBonslyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_MIMIC, SPECIES_SUDOWOODO}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_SUDOWOODO] =
    {
        .baseHP        = 85,
        .baseAttack    = 115,
        .baseDefense   = 130,
        .baseSpeed     = 60,
        .baseSpAttack  = 55,
        .baseSpDefense = 85,
        .types = { TYPE_ROCK, TYPE_ROCK },
        .catchRate = 54,
        .expYield = 256,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sudowoodo"),
        .cryId = CRY_SUDOWOODO,
        .natDexNum = NATIONAL_DEX_SUDOWOODO,
        .categoryName = _("Imitation"),
        .height = 12,
        .weight = 380,
        .description = COMPOUND_STRING(
            "It mimics a tree to avoid being attacked\n"
            "by enemies. But since its forelegs\n"
            "remain green throughout the year, it is\n"
            "easily identified as a fake in the winter."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sudowoodo, 48, 56),
        FRONT_PIC_FEMALE(Sudowoodo, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Sudowoodo,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Sudowoodo, 48, 56),
        BACK_PIC_FEMALE(Sudowoodo, 48, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Sudowoodo),
        ICON(Sudowoodo, 1),
        LEARNSETS(Sudowoodo),
        .eggMoveLearnset = sBonslyEggMoveLearnset,
    },
#endif //P_FAMILY_SUDOWOODO

#if P_FAMILY_HOPPIP
    [SPECIES_HOPPIP] =
    {
        .baseHP        = 35,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 55,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = { TYPE_GRASS, TYPE_FLYING },
        .catchRate = 159,
        .expYield = 116,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Hoppip"),
        .cryId = CRY_HOPPIP,
        .natDexNum = NATIONAL_DEX_HOPPIP,
        .categoryName = _("Cottonweed"),
        .height = 4,
        .weight = 5,
        .description = COMPOUND_STRING(
            "This Pokémon drifts and floats with the\n"
            "wind. If it senses the approach of strong\n"
            "winds, a Hoppip links leaves with others\n"
            "to prepare against being blown away."),
        .pokemonScale = 562,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Hoppip, 64, 56),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Hoppip,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 15,
        BACK_PIC(Hoppip, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Hoppip),
        ICON(Hoppip, 1),
        LEARNSETS(Hoppip),
        .eggMoveLearnset = sHoppipEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_SKIPLOOM}),
    },

    [SPECIES_SKIPLOOM] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .types = { TYPE_GRASS, TYPE_FLYING },
        .catchRate = 110,
        .expYield = 171,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Skiploom"),
        .cryId = CRY_SKIPLOOM,
        .natDexNum = NATIONAL_DEX_SKIPLOOM,
        .categoryName = _("Cottonweed"),
        .height = 6,
        .weight = 10,
        .description = COMPOUND_STRING(
            "It blossoms when the temperature rises\n"
            "above 64 degrees F. Because its flower's\n"
            "blooming changes with the temperature,\n"
            "it is sometimes used as a thermometer."),
        .pokemonScale = 387,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Skiploom, 40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Skiploom,
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 15,
        BACK_PIC(Skiploom, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Skiploom),
        ICON(Skiploom, 1),
        LEARNSETS(Skiploom),
        .eggMoveLearnset = sHoppipEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_JUMPLUFF}),
    },

    [SPECIES_JUMPLUFF] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 130,
        .baseSpAttack  = 75,
        .baseSpDefense = 95,
        .types = { TYPE_GRASS, TYPE_FLYING },
        .catchRate = 57,
        .expYield = 251,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Jumpluff"),
        .cryId = CRY_JUMPLUFF,
        .natDexNum = NATIONAL_DEX_JUMPLUFF,
        .categoryName = _("Cottonweed"),
        .height = 8,
        .weight = 30,
        .description = COMPOUND_STRING(
            "Jumpluff ride warm southern winds to\n"
            "cross the sea and fly to foreign lands.\n"
            "This Pokémon lands when it encounters\n"
            "cold air while it is floating."),
        .pokemonScale = 418,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Jumpluff, 64, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Jumpluff,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 9,
        BACK_PIC(Jumpluff, 56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Jumpluff),
        ICON(Jumpluff, 2),
        LEARNSETS(Jumpluff),
        .eggMoveLearnset = sHoppipEggMoveLearnset,
    },
#endif //P_FAMILY_HOPPIP

#if P_FAMILY_AIPOM
    [SPECIES_AIPOM] =
    {
        .baseHP        = 55,
        .baseAttack    = 75,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 120,
        .expYield = 163,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_PICKUP, ABILITY_SKILL_LINK },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Aipom"),
        .cryId = CRY_AIPOM,
        .natDexNum = NATIONAL_DEX_AIPOM,
        .categoryName = _("Long Tail"),
        .height = 8,
        .weight = 115,
        .description = COMPOUND_STRING(
            "Its tail ends with a dexterous, handlike\n"
            "appendage. However, because it uses the\n"
            "tail so much, Aipom's real hands have\n"
            "become rather clumsy."),
        .pokemonScale = 363,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Aipom, 32, 64),
        FRONT_PIC_FEMALE(Aipom, 32, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Aipom,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        BACK_PIC(Aipom, 64, 64),
        BACK_PIC_FEMALE(Aipom, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Aipom),
        ICON(Aipom, 2),
        LEARNSETS(Aipom),
        .eggMoveLearnset = sAipomEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_DOUBLE_HIT, SPECIES_AMBIPOM}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_AMBIPOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 66,
        .baseSpeed     = 115,
        .baseSpAttack  = 60,
        .baseSpDefense = 66,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 71,
        .expYield = 233,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 100,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_TECHNICIAN, ABILITY_PICKUP, ABILITY_SKILL_LINK },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Ambipom"),
        .cryId = CRY_AMBIPOM,
        .natDexNum = NATIONAL_DEX_AMBIPOM,
        .categoryName = _("Long Tail"),
        .height = 12,
        .weight = 203,
        .description = COMPOUND_STRING(
            "They live on large trees. Split into two,\n"
            "the tails are so adept at handling and\n"
            "doing things, Ambipom rarely uses\n"
            "its hands now."),
        .pokemonScale = 282,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ambipom, 64, 64),
        FRONT_PIC_FEMALE(Ambipom, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Ambipom,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        BACK_PIC(Ambipom, 64, 64),
        BACK_PIC_FEMALE(Ambipom, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Ambipom),
        ICON(Ambipom, 2),
        LEARNSETS(Ambipom),
        .eggMoveLearnset = sAipomEggMoveLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_AIPOM

#if P_FAMILY_SUNKERN
    [SPECIES_SUNKERN] =
    {
        .baseHP        = 55,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 151,
        .expYield = 122,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_EARLY_BIRD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sunkern"),
        .cryId = CRY_SUNKERN,
        .natDexNum = NATIONAL_DEX_SUNKERN,
        .categoryName = _("Seed"),
        .height = 3,
        .weight = 18,
        .description = COMPOUND_STRING(
            "Sunkern try to minimize movement to\n"
            "conserve the nutrients they have stored\n"
            "in their bodies for evolution. They will\n"
            "not eat, subsisting only on morning dew."),
        .pokemonScale = 541,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sunkern, 32, 40),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Sunkern,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Sunkern, 48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Sunkern),
        ICON(Sunkern, 1),
        LEARNSETS(Sunkern),
        .eggMoveLearnset = sSunkernEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SUN_STONE, SPECIES_SUNFLORA}),
    },

    [SPECIES_SUNFLORA] =
    {
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 95,
        .baseSpeed     = 50,
        .baseSpAttack  = 125,
        .baseSpDefense = 105,
        .types = { TYPE_GRASS, TYPE_PSYCHIC },
        .catchRate = 49,
        .expYield = 264,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_EARLY_BIRD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sunflora"),
        .cryId = CRY_SUNFLORA,
        .natDexNum = NATIONAL_DEX_SUNFLORA,
        .categoryName = _("Sun"),
        .height = 8,
        .weight = 85,
        .description = COMPOUND_STRING(
            "Sunflora convert solar energy into\n"
            "nutrition. They are highly active in the\n"
            "warm daytime but suddenly stop moving as\n"
            "soon as the sun sets."),
        .pokemonScale = 444,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sunflora, 40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Sunflora,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Sunflora, 56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Sunflora),
        ICON(Sunflora, 1),
        LEARNSETS(Sunflora),
        .eggMoveLearnset = sSunkernEggMoveLearnset,
    },
#endif //P_FAMILY_SUNKERN

#if P_FAMILY_YANMA
    [SPECIES_YANMA] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 75,
        .baseSpDefense = 45,
        .types = { TYPE_BUG, TYPE_DRAGON },
        .catchRate = 110,
        .expYield = 171,
        .evYield_Speed = 1,
        .itemRare = ITEM_WIDE_LENS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_COMPOUND_EYES, ABILITY_FRISK },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Yanma"),
        .cryId = CRY_YANMA,
        .natDexNum = NATIONAL_DEX_YANMA,
        .categoryName = _("Clear Wing"),
        .height = 12,
        .weight = 380,
        .description = COMPOUND_STRING(
            "It can see 360 degrees without moving\n"
            "its eyes. It is a great flier capable of\n"
            "making sudden stops and turning midair to\n"
            "quickly chase down targeted prey."),
        .pokemonScale = 274,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Yanma, 64, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Yanma,
        .frontAnimId = ANIM_FIGURE_8,
        .enemyMonElevation = 13,
        BACK_PIC(Yanma, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Yanma),
        ICON(Yanma, 1),
        LEARNSETS(Yanma),
        .eggMoveLearnset = sYanmaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_YANMEGA}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_YANMEGA] =
    {
        .baseHP        = 86,
        .baseAttack    = 105,
        .baseDefense   = 86,
        .baseSpeed     = 95,
        .baseSpAttack  = 116,
        .baseSpDefense = 56,
        .types = { TYPE_BUG, TYPE_DRAGON },
        .catchRate = 49,
        .expYield = 263,
        .evYield_Attack = 2,
        .itemRare = ITEM_WIDE_LENS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_TINTED_LENS, ABILITY_FRISK },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Yanmega"),
        .cryId = CRY_YANMEGA,
        .natDexNum = NATIONAL_DEX_YANMEGA,
        .categoryName = _("Ogre Darner"),
        .height = 19,
        .weight = 515,
        .description = COMPOUND_STRING(
            "This six-legged Pokémon is easily capable\n"
            "of transporting an adult in flight. It is\n"
            "adept at biting apart foes while flying\n"
            "by at high speed."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        FRONT_PIC(Yanmega, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Yanmega,
        .frontAnimId = ANIM_H_VIBRATE,
        .enemyMonElevation = 6,
        BACK_PIC(Yanmega, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Yanmega),
        ICON(Yanmega, 1),
        LEARNSETS(Yanmega),
        .eggMoveLearnset = sYanmaEggMoveLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_YANMA

#if P_FAMILY_WOOPER
#define WOOPER_MISC_INFO                                                        \
        .baseHP        = 55,                                                    \
        .baseAttack    = 55,                                                    \
        .baseDefense   = 55,                                                    \
        .baseSpeed     = 15,                                                    \
        .baseSpAttack  = 25,                                                    \
        .baseSpDefense = 25,                                                    \
        .catchRate = 188,                                                       \
        .expYield = 84,                                                         \
        .evYield_HP = 1,                                                        \
        .genderRatio = PERCENT_FEMALE(50),                                      \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_250,                                               \
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },                    \
        .cryId = CRY_WOOPER,                                                    \
        .height = 4,                                                            \
        .pokemonScale = 479,                                                    \
        .pokemonOffset = 21,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0

    [SPECIES_WOOPER] =
    {
        WOOPER_MISC_INFO,
        .types = { TYPE_WATER, TYPE_GROUND },
        .abilities = { ABILITY_DAMP, ABILITY_WATER_ABSORB, ABILITY_UNAWARE },
        .speciesName = _("Wooper"),
        .natDexNum = NATIONAL_DEX_WOOPER,
        .bodyColor = BODY_COLOR_BLUE,
        .categoryName = _("Water Fish"),
        .weight = 85,
        .description = COMPOUND_STRING(
            "Wooper usually live in water but come\n"
            "out onto land seeking food occasionally.\n"
            "On land, they coat their bodies with a\n"
            "gooey, toxic film."),
        FRONT_PIC(Wooper, 40, 32),
        FRONT_PIC_FEMALE(Wooper, 40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Wooper,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Wooper, 64, 40),
        BACK_PIC_FEMALE(Wooper, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Wooper),
        ICON(Wooper, 0),
        LEARNSETS(Wooper),
        .eggMoveLearnset = sWooperEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_QUAGSIRE}),
    },

    [SPECIES_QUAGSIRE] =
    {
        .baseHP        = 95,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .types = { TYPE_WATER, TYPE_GROUND },
        .catchRate = 76,
        .expYield = 227,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_DAMP, ABILITY_WATER_ABSORB, ABILITY_UNAWARE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Quagsire"),
        .cryId = CRY_QUAGSIRE,
        .natDexNum = NATIONAL_DEX_QUAGSIRE,
        .categoryName = _("Water Fish"),
        .height = 14,
        .weight = 750,
        .description = COMPOUND_STRING(
            "A Quagsire hunts by leaving its mouth wide\n"
            "open in water and waiting for its prey to\n"
            "blunder in. Because it doesn't move, it\n"
            "does not get very hungry."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Quagsire, 64, 56),
        FRONT_PIC_FEMALE(Quagsire, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Quagsire,
        .frontAnimId = ANIM_H_STRETCH,
        BACK_PIC(Quagsire, 64, 56),
        BACK_PIC_FEMALE(Quagsire, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Quagsire),
        ICON(Quagsire, 0),
        LEARNSETS(Quagsire),
        .eggMoveLearnset = sWooperEggMoveLearnset,
    },

#if P_PALDEAN_FORMS
    [SPECIES_WOOPER_PALDEAN] =
    {
        WOOPER_MISC_INFO,
        .types = { TYPE_POISON, TYPE_GROUND },
        .abilities = { ABILITY_POISON_POINT, ABILITY_WATER_ABSORB, ABILITY_UNAWARE },
        .speciesName = _("Grooper"),
        .natDexNum = NATIONAL_DEX_WOOPER_PALDEAN,
        .bodyColor = BODY_COLOR_BROWN,
        .categoryName = _("Poison Fish"),
        .weight = 110,
        .description = COMPOUND_STRING(
            "After losing a territorial struggle,\n"
            "Grooper began living on land.\n"
            "The Pokémon changed over time, developing\n"
            "a poisonous film to protect its body."),
        FRONT_PIC(WooperPaldean, 40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_WooperPaldean,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(WooperPaldean, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(WooperPaldean),
        ICON(WooperPaldean, 0),
        LEARNSETS(WooperPaldean),
        .eggMoveLearnset = sWooperPaldeanEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_CLODSIRE}),
    },

    [SPECIES_CLODSIRE] =
    {
        .baseHP        = 130,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 30,
        .baseSpAttack  = 45,
        .baseSpDefense = 110,
        .types = { TYPE_POISON, TYPE_GROUND },
        .catchRate = 76,
        .expYield = 227,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_POISON_POINT, ABILITY_WATER_ABSORB, ABILITY_UNAWARE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Clodsire"),
        .cryId = CRY_CLODSIRE,
        .natDexNum = NATIONAL_DEX_CLODSIRE,
        .categoryName = _("Spiny Fish"),
        .height = 18,
        .weight = 2230,
        .description = COMPOUND_STRING(
            "When attacked, this Pokémon will\n"
            "retaliate by sticking thick spines out\n"
            "from its body. It's a risky move\n"
            "that puts everything on the line."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Clodsire, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Clodsire,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Clodsire, 64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Clodsire),
        ICON(Clodsire, 2),
        //.footprint = gMonFootprint_Clodsire,
        LEARNSETS(Clodsire),
        .eggMoveLearnset = sWooperPaldeanEggMoveLearnset,
    },
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_WOOPER

#if P_FAMILY_MURKROW
    [SPECIES_MURKROW] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = 91,
        .baseSpAttack  = 85,
        .baseSpDefense = 50,
        .types = { TYPE_DARK, TYPE_FLYING },
        .catchRate = 96,
        .expYield = 185,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_INSOMNIA, ABILITY_SUPER_LUCK, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Murkrow"),
        .cryId = CRY_MURKROW,
        .natDexNum = NATIONAL_DEX_MURKROW,
        .categoryName = _("Darkness"),
        .height = 5,
        .weight = 21,
        .description = COMPOUND_STRING(
            "Murkrow were feared as the alleged\n"
            "bearers of ill fortune. It shows strong\n"
            "interest in anything that sparkles. It will\n"
            "even try to steal rings from women."),
        .pokemonScale = 401,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 1,
        FRONT_PIC(Murkrow, 48, 40),
        FRONT_PIC_FEMALE(Murkrow, 48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Murkrow,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 12,
        BACK_PIC(Murkrow, 40, 56),
        BACK_PIC_FEMALE(Murkrow, 40, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Murkrow),
        ICON(Murkrow, 2),
        LEARNSETS(Murkrow),
        .eggMoveLearnset = sMurkrowEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_HONCHKROW}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_HONCHKROW] =
    {
        .baseHP        = 105,
        .baseAttack    = 125,
        .baseDefense   = 52,
        .baseSpeed     = 91,
        .baseSpAttack  = 105,
        .baseSpDefense = 52,
        .types = { TYPE_DARK, TYPE_FLYING },
        .catchRate = 54,
        .expYield = 256,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_INSOMNIA, ABILITY_SUPER_LUCK, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Honchkrow"),
        .cryId = CRY_HONCHKROW,
        .natDexNum = NATIONAL_DEX_HONCHKROW,
        .categoryName = _("Big Boss"),
        .height = 9,
        .weight = 273,
        .description = COMPOUND_STRING(
            "Becoming active at night, it is known\n"
            "to swarm with numerous Murkrow in tow.\n"
            "It is said that it never forgives the\n"
            "mistakes of its cronies."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Honchkrow, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Honchkrow,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Honchkrow, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_STRETCH,
        PALETTES(Honchkrow),
        ICON(Honchkrow, 2),
        LEARNSETS(Honchkrow),
        .eggMoveLearnset = sMurkrowEggMoveLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MURKROW

#if P_FAMILY_MISDREAVUS
    [SPECIES_MISDREAVUS] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 95,
        .baseSpAttack  = 90,
        .baseSpDefense = 95,
        .types = { TYPE_GHOST, TYPE_GHOST },
        .catchRate = 80,
        .expYield = 222,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Misdreavus"),
        .cryId = CRY_MISDREAVUS,
        .natDexNum = NATIONAL_DEX_MISDREAVUS,
        .categoryName = _("Screech"),
        .height = 7,
        .weight = 10,
        .description = COMPOUND_STRING(
            "A Misdreavus frightens people with a\n"
            "creepy, sobbing cry. It apparently uses\n"
            "its red spheres to absorb the fear of foes\n"
            "as its nutrition."),
        .pokemonScale = 407,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Misdreavus, 48, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Misdreavus,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 12,
        BACK_PIC(Misdreavus, 56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Misdreavus),
        ICON(Misdreavus, 0),
        LEARNSETS(Misdreavus),
        .eggMoveLearnset = sMisdreavusEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_MISMAGIUS},
                                {EVO_ITEM, ITEM_SHINY_STONE, SPECIES_FLUTTER_MANE}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MISMAGIUS] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 130,
        .baseSpAttack  = 130,
        .baseSpDefense = 130,
        .types = { TYPE_GHOST, TYPE_GHOST },
        .catchRate = 42,
        .expYield = 303,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Mismagius"),
        .cryId = CRY_MISMAGIUS,
        .natDexNum = NATIONAL_DEX_MISMAGIUS,
        .categoryName = _("Magical"),
        .height = 9,
        .weight = 44,
        .description = COMPOUND_STRING(
            "Its cries sound like incantations.\n"
            "Those hearing it are tormented by\n"
            "headaches and hallucinations.\n"
            "It appears where you least expect it."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Mismagius, 56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Mismagius,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 3,
        BACK_PIC(Mismagius, 56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Mismagius),
        ICON(Mismagius, 2),
        LEARNSETS(Mismagius),
        .eggMoveLearnset = sMisdreavusEggMoveLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_FLUTTER_MANE] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 135,
        .baseSpAttack  = 135,
        .baseSpDefense = 135,
        .types = { TYPE_GHOST, TYPE_FAIRY },
        .catchRate = 42,
        .expYield = 303,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 50,
        .friendship = 35,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_PROTOSYNTHESIS, ABILITY_PROTOSYNTHESIS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Missleepus"),
        .cryId = CRY_FLUTTER_MANE,
        .natDexNum = NATIONAL_DEX_FLUTTER_MANE,
        .categoryName = _("Magical"),
        .height = 14,
        .weight = 40,
        .description = COMPOUND_STRING(
            "It has similar features to a\n"
            "ghostly pterosaur that was covered in a\n"
            "paranormal magazine, but the two\n"
            "have little else in common."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(FlutterMane, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_FlutterMane,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        BACK_PIC(FlutterMane, 64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(FlutterMane),
        ICON(FlutterMane, 4),
        //.footprint = gMonFootprint_FlutterMane,
        LEARNSETS(FlutterMane),
        .eggMoveLearnset = sMisdreavusEggMoveLearnset,
    },
#endif //P_FAMILY_MISDREAVUS

#if P_FAMILY_UNOWN
#define UNOWN_MISC_INFO(letter)                                         \
        .baseHP        = 68,                                            \
        .baseAttack    = 150,                                           \
        .baseDefense   = 68,                                            \
        .baseSpeed     = 68,                                            \
        .baseSpAttack  = 150,                                           \
        .baseSpDefense = 68,                                            \
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },                        \
        .catchRate = 41,                                                \
        .expYield = 304,                                                \
        .evYield_Attack = 1,                                            \
        .evYield_SpAttack = 1,                                          \
        .genderRatio = MON_GENDERLESS,                                  \
        .eggCycles = 40,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_650,                                       \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },                \
        .bodyColor = BODY_COLOR_BLACK,                                  \
        .speciesName = _("Unown"),                                      \
        .cryId = CRY_UNOWN,                                             \
        .natDexNum = NATIONAL_DEX_UNOWN,                                \
        .categoryName = _("Symbol"),                                    \
        .height = 5,                                                    \
        .weight = 50,                                                   \
        .description = gUnownPokedexText,                               \
        .pokemonScale = 411,                                            \
        .pokemonOffset = 2,                                             \
        .trainerScale = 256,                                            \
        .trainerOffset = 0,                                             \
        .frontPicYOffset = 16,                                          \
        .frontAnimFrames = sAnims_Unown,                                \
        .frontAnimId = ANIM_ZIGZAG_FAST,                                \
        .enemyMonElevation = 8,                                         \
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,                    \
        PALETTES(Unown),                                                \
        ICON(Unown ##letter, 0),                                        \
        LEARNSETS(Unown),                                               \
        .formSpeciesIdTable = sUnownFormSpeciesIdTable
        // .eggMoveLearnset = sUnownEggMoveLearnset

    [SPECIES_UNOWN] =
    {
        UNOWN_MISC_INFO(A),
        FRONT_PIC(UnownA, 24, 40),
        BACK_PIC(UnownA, 24, 48),
        .backPicYOffset = 8,
    },

    [SPECIES_UNOWN_B] =
    {
        UNOWN_MISC_INFO(B),
        .noFlip = TRUE,
        FRONT_PIC(UnownB, 24, 32),
        BACK_PIC(UnownB, 40, 48),
        .backPicYOffset = 9,
    },

    [SPECIES_UNOWN_C] =
    {
        UNOWN_MISC_INFO(C),
        .noFlip = TRUE,
        FRONT_PIC(UnownC, 32, 32),
        BACK_PIC(UnownC, 48, 56),
        .backPicYOffset = 6,
    },

    [SPECIES_UNOWN_D] =
    {
        UNOWN_MISC_INFO(D),
        .noFlip = TRUE,
        FRONT_PIC(UnownD, 32, 32),
        BACK_PIC(UnownD, 40, 48),
        .backPicYOffset = 8,
    },

    [SPECIES_UNOWN_E] =
    {
        UNOWN_MISC_INFO(E),
        .noFlip = TRUE,
        FRONT_PIC(UnownE, 32, 32),
        BACK_PIC(UnownE, 40, 48),
        .backPicYOffset = 10,
    },

    [SPECIES_UNOWN_F] =
    {
        UNOWN_MISC_INFO(F),
        .noFlip = TRUE,
        FRONT_PIC(UnownF, 32, 32),
        BACK_PIC(UnownF, 48, 48),
        .backPicYOffset = 10,
    },

    [SPECIES_UNOWN_G] =
    {
        UNOWN_MISC_INFO(G),
        .noFlip = TRUE,
        FRONT_PIC(UnownG, 24, 40),
        BACK_PIC(UnownG, 40, 56),
        .backPicYOffset = 5,
    },

    [SPECIES_UNOWN_H] =
    {
        UNOWN_MISC_INFO(H),
        .noFlip = TRUE,
        FRONT_PIC(UnownH, 32, 32),
        BACK_PIC(UnownH, 48, 48),
        .backPicYOffset = 8,
    },

    [SPECIES_UNOWN_I] =
    {
        UNOWN_MISC_INFO(I),
        FRONT_PIC(UnownI, 24, 32),
        BACK_PIC(UnownI, 24, 56),
        .backPicYOffset = 7,
    },

    [SPECIES_UNOWN_J] =
    {
        UNOWN_MISC_INFO(J),
        .noFlip = TRUE,
        FRONT_PIC(UnownJ, 24, 32),
        BACK_PIC(UnownJ, 32, 48),
        .backPicYOffset = 9,
    },

    [SPECIES_UNOWN_K] =
    {
        UNOWN_MISC_INFO(K),
        .noFlip = TRUE,
        FRONT_PIC(UnownK, 32, 32),
        BACK_PIC(UnownK, 40, 56),
        .backPicYOffset = 7,
    },

    [SPECIES_UNOWN_L] =
    {
        UNOWN_MISC_INFO(L),
        .noFlip = TRUE,
        FRONT_PIC(UnownL, 24, 32),
        BACK_PIC(UnownL, 32, 48),
        .backPicYOffset = 10,
    },

    [SPECIES_UNOWN_M] =
    {
        UNOWN_MISC_INFO(M),
        FRONT_PIC(UnownM, 32, 32),
        BACK_PIC(UnownM, 48, 40),
        .backPicYOffset = 13,
    },

    [SPECIES_UNOWN_N] =
    {
        UNOWN_MISC_INFO(N),
        .noFlip = TRUE,
        FRONT_PIC(UnownN, 32, 24),
        BACK_PIC(UnownN, 48, 40),
        .backPicYOffset = 13,
    },

    [SPECIES_UNOWN_O] =
    {
        UNOWN_MISC_INFO(O),
        FRONT_PIC(UnownO, 32, 32),
        BACK_PIC(UnownO, 48, 48),
        .backPicYOffset = 8,
    },

    [SPECIES_UNOWN_P] =
    {
        UNOWN_MISC_INFO(P),
        .noFlip = TRUE,
        FRONT_PIC(UnownP, 24, 32),
        BACK_PIC(UnownP, 32, 48),
        .backPicYOffset = 10,
    },

    [SPECIES_UNOWN_Q] =
    {
        UNOWN_MISC_INFO(Q),
        .noFlip = TRUE,
        FRONT_PIC(UnownQ, 32, 24),
        BACK_PIC(UnownQ, 40, 40),
        .backPicYOffset = 15,
    },

    [SPECIES_UNOWN_R] =
    {
        UNOWN_MISC_INFO(R),
        .noFlip = TRUE,
        FRONT_PIC(UnownR, 24, 32),
        BACK_PIC(UnownR, 32, 40),
        .backPicYOffset = 12,
    },

    [SPECIES_UNOWN_S] =
    {
        UNOWN_MISC_INFO(S),
        .noFlip = TRUE,
        FRONT_PIC(UnownS, 32, 40),
        BACK_PIC(UnownS, 40, 56),
        .backPicYOffset = 4,
    },

    [SPECIES_UNOWN_T] =
    {
        UNOWN_MISC_INFO(T),
        FRONT_PIC(UnownT, 24, 32),
        BACK_PIC(UnownT, 32, 40),
        .backPicYOffset = 13,
    },

    [SPECIES_UNOWN_U] =
    {
        UNOWN_MISC_INFO(U),
        FRONT_PIC(UnownU, 32, 32),
        BACK_PIC(UnownU, 48, 40),
        .backPicYOffset = 13,
    },

    [SPECIES_UNOWN_V] =
    {
        UNOWN_MISC_INFO(V),
        .noFlip = TRUE,
        FRONT_PIC(UnownV, 32, 32),
        BACK_PIC(UnownV, 40, 48),
        .backPicYOffset = 11,
    },

    [SPECIES_UNOWN_W] =
    {
        UNOWN_MISC_INFO(W),
        FRONT_PIC(UnownW, 32, 32),
        BACK_PIC(UnownW, 40, 40),
        .backPicYOffset = 13,
    },

    [SPECIES_UNOWN_X] =
    {
        UNOWN_MISC_INFO(X),
        FRONT_PIC(UnownX, 24, 24),
        BACK_PIC(UnownX, 40, 40),
        .backPicYOffset = 15,
    },

    [SPECIES_UNOWN_Y] =
    {
        UNOWN_MISC_INFO(Y),
        FRONT_PIC(UnownY, 24, 32),
        BACK_PIC(UnownY, 32, 48),
        .backPicYOffset = 10,
    },

    [SPECIES_UNOWN_Z] =
    {
        UNOWN_MISC_INFO(Z),
        .noFlip = TRUE,
        FRONT_PIC(UnownZ, 24, 32),
        BACK_PIC(UnownZ, 32, 48),
        .backPicYOffset = 10,
    },

    [SPECIES_UNOWN_EMARK] =
    {
        UNOWN_MISC_INFO(ExclamationMark),
        FRONT_PIC(UnownExclamationMark, 24, 40),
        BACK_PIC(UnownExclamationMark, 24, 56),
        .backPicYOffset = 6,
    },

    [SPECIES_UNOWN_QMARK] =
    {
        UNOWN_MISC_INFO(QuestionMark),
        .noFlip = TRUE,
        FRONT_PIC(UnownQuestionMark, 24, 40),
        BACK_PIC(UnownQuestionMark, 32, 56),
        .backPicYOffset = 6,
    },
#endif //P_FAMILY_UNOWN

#if P_FAMILY_WOBBUFFET
#if P_GEN_3_CROSS_EVOS
    [SPECIES_WYNAUT] =
    {
        .baseHP        = 95,
        .baseAttack    = 23,
        .baseDefense   = 48,
        .baseSpeed     = 23,
        .baseSpAttack  = 23,
        .baseSpDefense = 48,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 174,
        .expYield = 104,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wynaut"),
        .cryId = CRY_WYNAUT,
        .natDexNum = NATIONAL_DEX_WYNAUT,
        .categoryName = _("Bright"),
        .height = 6,
        .weight = 140,
        .description = COMPOUND_STRING(
            "A Wynaut loves to eat sweet fruits.\n"
            "It cleverly picks fruits using its earlike\n"
            "arms. They gather in fruit gardens, drawn\n"
            "by the fragrance."),
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Wynaut, 48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Wynaut,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 15,
        BACK_PIC(Wynaut, 48, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Wynaut),
        ICON(Wynaut, 0),
        LEARNSETS(Wynaut),
        .eggMoveLearnset = sWynautEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_WOBBUFFET}),
    },
#endif //P_GEN_3_CROSS_EVOS

    [SPECIES_WOBBUFFET] =
    {
        .baseHP        = 240,
        .baseAttack    = 33,
        .baseDefense   = 60,
        .baseSpeed     = 33,
        .baseSpAttack  = 33,
        .baseSpDefense = 60,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 80,
        .expYield = 222,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wobbuffet"),
        .cryId = CRY_WOBBUFFET,
        .natDexNum = NATIONAL_DEX_WOBBUFFET,
        .categoryName = _("Patient"),
        .height = 13,
        .weight = 285,
        .description = COMPOUND_STRING(
            "Usually docile, a Wobbuffet strikes back\n"
            "ferociously if its black tail is attacked.\n"
            "It makes its lair in caves where it waits\n"
            "for nightfall."),
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Wobbuffet, 64, 56),
        FRONT_PIC_FEMALE(Wobbuffet, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Wobbuffet,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Wobbuffet, 56, 56),
        BACK_PIC_FEMALE(Wobbuffet, 56, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Wobbuffet),
        ICON(Wobbuffet, 0),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        ICON_FEMALE(Wobbuffet, 0),
    #endif
        LEARNSETS(Wobbuffet),
        .eggMoveLearnset = sWynautEggMoveLearnset,
    },

    [SPECIES_WOBBUFFET_TEST] =
    {
        .baseHP        = 240,
        .baseAttack    = 33,
        .baseDefense   = 60,
        .baseSpeed     = 33,
        .baseSpAttack  = 33,
        .baseSpDefense = 60,
        .types = { TYPE_MYSTERY, TYPE_MYSTERY },
        .catchRate = 80,
        .expYield = 222,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 0,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wobbutest"),
        .cryId = CRY_WOBBUFFET,
        .natDexNum = NATIONAL_DEX_WOBBUFFET,
        .categoryName = _("Patient"),
        .height = 13,
        .weight = 285,
        .description = COMPOUND_STRING(
            "Usually docile, a Wobbuffet strikes back\n"
            "ferociously if its black tail is attacked.\n"
            "It makes its lair in caves where it waits\n"
            "for nightfall."),
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Wobbuffet, 64, 56),
        FRONT_PIC_FEMALE(Wobbuffet, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Wobbuffet,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Wobbuffet, 56, 56),
        BACK_PIC_FEMALE(Wobbuffet, 56, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Wobbuffet),
        ICON(Wobbuffet, 0),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        ICON_FEMALE(Wobbuffet, 0),
    #endif
        LEARNSETS(Wobbuffet),
        .eggMoveLearnset = sWynautEggMoveLearnset,
    },
#endif //P_FAMILY_WOBBUFFET

#if P_FAMILY_GIRAFARIG
    [SPECIES_GIRAFARIG] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 65,
        .baseSpeed     = 85,
        .baseSpAttack  = 90,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_PSYCHIC },
        .catchRate = 82,
        .expYield = 220,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_EARLY_BIRD, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Girafarig"),
        .cryId = CRY_GIRAFARIG,
        .natDexNum = NATIONAL_DEX_GIRAFARIG,
        .categoryName = _("Long Neck"),
        .height = 15,
        .weight = 415,
        .description = COMPOUND_STRING(
            "A Girafarig is an herbivore--it eats\n"
            "grass and tree shoots. While it is eating,\n"
            "its tail makes chewing and swallowing\n"
            "motions as if it were also eating."),
        .pokemonScale = 281,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Girafarig, 56, 64),
        FRONT_PIC_FEMALE(Girafarig, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Girafarig,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Girafarig, 64, 64),
        BACK_PIC_FEMALE(Girafarig, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Girafarig),
        ICON(Girafarig, 1),
        LEARNSETS(Girafarig),
        .eggMoveLearnset = sGirafarigEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_TWIN_BEAM, SPECIES_FARIGIRAF}),
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_FARIGIRAF] =
    {
        .baseHP        = 120,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 110,
        .baseSpDefense = 120,
        .types = { TYPE_NORMAL, TYPE_PSYCHIC },
        .catchRate = 30,
        .expYield = 327,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_CUD_CHEW, ABILITY_ARMOR_TAIL, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Farigiraf"),
        .cryId = CRY_FARIGIRAF,
        .natDexNum = NATIONAL_DEX_FARIGIRAF,
        .categoryName = _("Long Neck"),
        .height = 32,
        .weight = 1600,
        .description = COMPOUND_STRING(
            "Now that the brain waves from the\n"
            "head and tail are synced up, the\n"
            "psychic power of this Pokémon is 10\n"
            "times stronger than Girafarig's."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Farigiraf, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Farigiraf,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Farigiraf, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Farigiraf),
        ICON(Farigiraf, 0),
        //.footprint = gMonFootprint_Farigiraf,
        LEARNSETS(Farigiraf),
        .eggMoveLearnset = sGirafarigEggMoveLearnset,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_GIRAFARIG

#if P_FAMILY_PINECO
    [SPECIES_PINECO] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 90,
        .baseSpeed     = 15,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 159,
        .expYield = 116,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Pineco"),
        .cryId = CRY_PINECO,
        .natDexNum = NATIONAL_DEX_PINECO,
        .categoryName = _("Bagworm"),
        .height = 6,
        .weight = 72,
        .description = COMPOUND_STRING(
            "A Pineco hangs from a tree branch and\n"
            "waits for prey. While eating, if it is\n"
            "disturbed by someone shaking its tree, it\n"
            "falls on the ground and suddenly explodes."),
        .pokemonScale = 445,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pineco, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Pineco,
        .frontAnimId = ANIM_SWING_CONCAVE,
        BACK_PIC(Pineco, 56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Pineco),
        ICON(Pineco, 0),
        LEARNSETS(Pineco),
        .eggMoveLearnset = sPinecoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_FORRETRESS}),
    },

    [SPECIES_FORRETRESS] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 140,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_BUG, TYPE_STEEL },
        .catchRate = 78,
        .expYield = 225,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Forretress"),
        .cryId = CRY_FORRETRESS,
        .natDexNum = NATIONAL_DEX_FORRETRESS,
        .categoryName = _("Bagworm"),
        .height = 12,
        .weight = 1258,
        .description = COMPOUND_STRING(
            "It keeps itself inside its steel shell.\n"
            "The shell is opened when it is catching\n"
            "prey, but it is so quick that the shell's\n"
            "inside cannot be seen."),
        .pokemonScale = 293,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Forretress, 64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Forretress,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Forretress, 64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Forretress),
        ICON(Forretress, 2),
        LEARNSETS(Forretress),
        .eggMoveLearnset = sPinecoEggMoveLearnset,
    },
#endif //P_FAMILY_PINECO

#if P_FAMILY_DUNSPARCE
    [SPECIES_DUNSPARCE] =
    {
        .baseHP        = 100,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_FAIRY },
        .catchRate = 190,
        .expYield = 145,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_RUN_AWAY, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Dunsparce"),
        .cryId = CRY_DUNSPARCE,
        .natDexNum = NATIONAL_DEX_DUNSPARCE,
        .categoryName = _("Land Snake"),
        .height = 15,
        .weight = 140,
        .description = COMPOUND_STRING(
            "Its drill-tipped tail is used to burrow into\n"
            "the ground backwards. This Pokémon is\n"
            "known to make its nest in complex shapes\n"
            "deep under the ground."),
        .pokemonScale = 316,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Dunsparce, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Dunsparce,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 10,
        BACK_PIC(Dunsparce, 56, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Dunsparce),
        ICON(Dunsparce, 0),
        LEARNSETS(Dunsparce),
        .eggMoveLearnset = sDunsparceEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE_TWO_SEGMENT, MOVE_HYPER_DRILL, SPECIES_DUDUNSPARCE_TWO_SEGMENT},
                                {EVO_MOVE_THREE_SEGMENT, MOVE_HYPER_DRILL, SPECIES_DUDUNSPARCE_THREE_SEGMENT}),
    },

#if P_GEN_9_CROSS_EVOS
#define DUDUNSPARCE_MISC_INFO(segments)                                             \
        .baseHP        = 125,                                                       \
        .baseAttack    = 100,                                                       \
        .baseDefense   = 80,                                                        \
        .baseSpeed     = 55,                                                        \
        .baseSpAttack  = 85,                                                        \
        .baseSpDefense = 75,                                                        \
        .types = { TYPE_NORMAL, TYPE_FAIRY },                                       \
        .catchRate = 57,                                                            \
        .expYield = 251,                                                            \
        .evYield_HP = 2,                                                            \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 20,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_550,                                                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },                          \
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_RUN_AWAY, ABILITY_RATTLED },   \
        .bodyColor = BODY_COLOR_YELLOW,                                             \
        .speciesName = _("Dudunsparce"),                                            \
        .cryId = CRY_DUDUNSPARCE,                                                   \
        .natDexNum = NATIONAL_DEX_DUDUNSPARCE,                                      \
        .categoryName = _("Land Snake"),                                            \
        .pokemonScale = 356,                                                        \
        .pokemonOffset = 17,                                                        \
        .trainerScale = 256,                                                        \
        .trainerOffset = 0,                                                         \
        FRONT_PIC(Dudunsparce ##segments##Segment, 64, 64),                         \
        .frontPicYOffset = 10,                                                      \
        .frontAnimFrames = sAnims_Dudunsparce,                                      \
        BACK_PIC(Dudunsparce ##segments##Segment, 64, 64),                          \
        .backPicYOffset = 11,                                                       \
        PALETTES(Dudunsparce),                                                      \
        ICON(Dudunsparce, 0),                                                       \
        LEARNSETS(Dudunsparce),                                                     \
        .eggMoveLearnset = sDunsparceEggMoveLearnset,                               \
        .formSpeciesIdTable = sDudunsparceFormSpeciesIdTable
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        //.backAnimId = BACK_ANIM_NONE,
        //.footprint = gMonFootprint_Dudunsparce,

    [SPECIES_DUDUNSPARCE_TWO_SEGMENT] =
    {
        DUDUNSPARCE_MISC_INFO(Two),
        .height = 36,
        .weight = 392,
        .description = COMPOUND_STRING(
            "This Pokémon uses its hard tail to\n"
            "make its nest by boring holes into\n"
            "bedrock deep underground. The nest\n"
            "can reach lengths of over six miles."),
    },

    [SPECIES_DUDUNSPARCE_THREE_SEGMENT] =
    {
        DUDUNSPARCE_MISC_INFO(Three),
        .height = 45,
        .weight = 474,
        .description = COMPOUND_STRING(
            "A recent study uncovered that the\n"
            "number of segments a\n"
            "Dudunsparce's body has is determined by the\n"
            "Pokémon's genes."),
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DUNSPARCE

#if P_FAMILY_GLIGAR
    [SPECIES_GLIGAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 105,
        .baseSpeed     = 85,
        .baseSpAttack  = 35,
        .baseSpDefense = 65,
        .types = { TYPE_GROUND, TYPE_FLYING },
        .catchRate = 84,
        .expYield = 218,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SAND_VEIL, ABILITY_IMMUNITY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gligar"),
        .cryId = CRY_GLIGAR,
        .natDexNum = NATIONAL_DEX_GLIGAR,
        .categoryName = _("Fly Scorpion"),
        .height = 11,
        .weight = 648,
        .description = COMPOUND_STRING(
            "It glides without making a single sound.\n"
            "It grasps the face of its foe using its\n"
            "hind and large front claws, then stabs\n"
            "with its poison barb."),
        .pokemonScale = 350,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Gligar, 56, 56),
        FRONT_PIC_FEMALE(Gligar, 56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Gligar,
        .frontAnimId = ANIM_SHRINK_GROW,
        .enemyMonElevation = 8,
        BACK_PIC(Gligar, 64, 64),
        BACK_PIC_FEMALE(Gligar, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        PALETTES(Gligar),
        ICON(Gligar, 0),
        LEARNSETS(Gligar),
        .eggMoveLearnset = sGligarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM_HOLD_NIGHT, ITEM_RAZOR_FANG, SPECIES_GLISCOR},
                                {EVO_ITEM_NIGHT, ITEM_RAZOR_FANG, SPECIES_GLISCOR}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_GLISCOR] =
    {
        .baseHP        = 75,
        .baseAttack    = 115,
        .baseDefense   = 125,
        .baseSpeed     = 95,
        .baseSpAttack  = 45,
        .baseSpDefense = 75,
        .types = { TYPE_GROUND, TYPE_FLYING },
        .catchRate = 54,
        .expYield = 256,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SAND_VEIL, ABILITY_POISON_HEAL },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gliscor"),
        .cryId = CRY_GLISCOR,
        .natDexNum = NATIONAL_DEX_GLISCOR,
        .categoryName = _("Fang Scorp"),
        .height = 20,
        .weight = 425,
        .description = COMPOUND_STRING(
            "Gliscor observes prey while hanging\n"
            "upside down from branches. Its flight is\n"
            "soundless. When the chance presents\n"
            "itself, it swoops!"),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        FRONT_PIC(Gliscor, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Gliscor,
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 9,
        BACK_PIC(Gliscor, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Gliscor),
        ICON(Gliscor, 2),
        LEARNSETS(Gliscor),
        .eggMoveLearnset = sGligarEggMoveLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_GLIGAR

#if P_FAMILY_SNUBBULL
    [SPECIES_SNUBBULL] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = { TYPE_FAIRY, TYPE_FAIRY },
        .catchRate = 117,
        .expYield = 165,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_RUN_AWAY, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Snubbull"),
        .cryId = CRY_SNUBBULL,
        .natDexNum = NATIONAL_DEX_SNUBBULL,
        .categoryName = _("Fairy"),
        .height = 6,
        .weight = 78,
        .description = COMPOUND_STRING(
            "By baring its fangs and making a scary\n"
            "face, it sends smaller Pokémon scurrying\n"
            "in terror. The Snubbull does seem a\n"
            "little sad at making its foes flee."),
        .pokemonScale = 465,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Snubbull, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Snubbull,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Snubbull, 56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Snubbull),
        ICON(Snubbull, 0),
        LEARNSETS(Snubbull),
        .eggMoveLearnset = sSnubbullEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_GRANBULL}),
    },

    [SPECIES_GRANBULL] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 75,
        .baseSpeed     = 55,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = { TYPE_FAIRY, TYPE_FAIRY },
        .catchRate = 74,
        .expYield = 230,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_QUICK_FEET, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Granbull"),
        .cryId = CRY_GRANBULL,
        .natDexNum = NATIONAL_DEX_GRANBULL,
        .categoryName = _("Fairy"),
        .height = 14,
        .weight = 487,
        .description = COMPOUND_STRING(
            "It has a particularly well-developed lower\n"
            "jaw. The huge fangs are heavy, causing\n"
            "it to tilt its head. Unless it is startled,\n"
            "it will not try to bite."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Granbull, 56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Granbull,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Granbull, 56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Granbull),
        ICON(Granbull, 2),
        LEARNSETS(Granbull),
        .eggMoveLearnset = sSnubbullEggMoveLearnset,
    },
#endif //P_FAMILY_SNUBBULL

#if P_FAMILY_QWILFISH
#define QWILFISH_MISC_INFO                                                              \
        .baseHP        = 65,                                                            \
        .baseAttack    = 95,                                                            \
        .baseDefense   = 85,                                                            \
        .baseSpeed     = 85,                                                            \
        .baseSpAttack  = 55,                                                            \
        .baseSpDefense = 55,                                                            \
        .catchRate = 88,                                                                \
        .expYield = 193,                                                                \
        .evYield_Attack = 1,                                                            \
        .itemRare = ITEM_POISON_BARB,                                                   \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 20,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_450,                                                       \
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },                          \
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWIFT_SWIM, ABILITY_INTIMIDATE },  \
        .cryId = CRY_QWILFISH,                                                          \
        .categoryName = _("Balloon"),                                                   \
        .height = 5,                                                                    \
        .weight = 39,                                                                   \
        .pokemonScale = 430,                                                            \
        .pokemonOffset = 0,                                                             \
        .trainerScale = 256,                                                            \
        .trainerOffset = 0

    [SPECIES_QWILFISH] =
    {
        QWILFISH_MISC_INFO,
        .types = { TYPE_WATER, TYPE_POISON },
        .speciesName = _("Qwilfish"),
        .natDexNum = NATIONAL_DEX_QWILFISH,
        .bodyColor = BODY_COLOR_GRAY,
        .description = COMPOUND_STRING(
            "A Qwilfish uses the pressure of water\n"
            "it swallows to shoot toxic quills all at\n"
            "once from all over its body. It finds\n"
            "swimming to be somewhat challenging."),
        FRONT_PIC(Qwilfish, 40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Qwilfish,
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .frontAnimDelay = 39,
        BACK_PIC(Qwilfish, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(Qwilfish),
        ICON(Qwilfish, 0),
        LEARNSETS(Qwilfish),
        .eggMoveLearnset = sQwilfishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_QWILSPARK}),
    },

    [SPECIES_QWILSPARK] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 85,
        .baseSpeed     = 90,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = { TYPE_WATER, TYPE_POISON },
        .catchRate = 61,
        .expYield = 247,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWIFT_SWIM, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Qwilspark"),
        .cryId = CRY_OVERQWIL,
        .natDexNum = NATIONAL_DEX_QWILSPARK,
        .categoryName = _("Pin Cluster"),
        .height = 25,
        .weight = 605,
        .description = COMPOUND_STRING(
            "Its lancelike spikes and savage\n"
            "temperament have earned it the\n"
            "nickname “Sea Fiend”.\n"
            "It slurps up poison to nourish itself."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        FRONT_PIC(Overqwil, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Overqwil,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Overqwil, 64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Overqwil),
        ICON(Overqwil, 2),
        //.footprint = gMonFootprint_Overqwil,
        LEARNSETS(Qwilspark),
        .eggMoveLearnset = sQwilfishEggMoveLearnset,
    },

#if P_HISUIAN_FORMS
    [SPECIES_QWILFISH_HISUIAN] =
    {
        QWILFISH_MISC_INFO,
        .types = { TYPE_DARK, TYPE_POISON },
        .speciesName = _("Qwilpin"),
        .natDexNum = NATIONAL_DEX_QWILFISH_HISUIAN,
        .bodyColor = BODY_COLOR_BLACK,
        .description = COMPOUND_STRING(
            "Fishers detest this troublesome Pokémon\n"
            "because it sprays poison from its spines,\n"
            "getting it everywhere."),
        FRONT_PIC(QwilfishHisuian, 48, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_QwilfishHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        BACK_PIC(QwilfishHisuian, 56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(QwilfishHisuian),
        ICON(QwilfishHisuian, 0),
        LEARNSETS(QwilfishHisuian),
        .eggMoveLearnset = sQwilfishHisuianEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_BARB_BARRAGE, SPECIES_OVERQWIL}),
    },

    [SPECIES_OVERQWIL] =
    {
        .baseHP        = 85,
        .baseAttack    = 115,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_DARK, TYPE_POISON },
        .catchRate = 61,
        .expYield = 247,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWIFT_SWIM, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Overqwil"),
        .cryId = CRY_OVERQWIL,
        .natDexNum = NATIONAL_DEX_OVERQWIL,
        .categoryName = _("Pin Cluster"),
        .height = 25,
        .weight = 605,
        .description = COMPOUND_STRING(
            "Its lancelike spikes and savage\n"
            "temperament have earned it the\n"
            "nickname “Sea Fiend”.\n"
            "It slurps up poison to nourish itself."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        FRONT_PIC(Overqwil, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Overqwil,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Overqwil, 64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Overqwil),
        ICON(Overqwil, 2),
        //.footprint = gMonFootprint_Overqwil,
        LEARNSETS(Overqwil),
        .eggMoveLearnset = sQwilfishHisuianEggMoveLearnset,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_QWILFISH

#if P_FAMILY_SHUCKLE
    [SPECIES_SHUCKLE] =
    {
        .baseHP        = 70,
        .baseAttack    = 50,
        .baseDefense   = 230,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 230,
        .types = { TYPE_BUG, TYPE_ROCK },
        .catchRate = 25,
        .expYield = 340,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_BERRY_JUICE,
        .itemRare = ITEM_BERRY_JUICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_STURDY, ABILITY_GLUTTONY, ABILITY_CONTRARY },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Shuckle"),
        .cryId = CRY_SHUCKLE,
        .natDexNum = NATIONAL_DEX_SHUCKLE,
        .categoryName = _("Mold"),
        .height = 6,
        .weight = 205,
        .description = COMPOUND_STRING(
            "A Shuckle hides under rocks, keeping its\n"
            "body concealed inside its shell while\n"
            "eating stored berries. The berries mix with\n"
            "its body fluids to become a juice."),
        .pokemonScale = 485,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Shuckle, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Shuckle,
        .frontAnimId = ANIM_SWING_CONCAVE,
        BACK_PIC(Shuckle, 48, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Shuckle),
        ICON(Shuckle, 1),
        LEARNSETS(Shuckle),
        .eggMoveLearnset = sShuckleEggMoveLearnset,
    },
#endif //P_FAMILY_SHUCKLE

#if P_FAMILY_HERACROSS
#define HERACROSS_MISC_INFO                                 \
        .types = { TYPE_BUG, TYPE_FIGHTING },               \
        .evYield_Attack = 2,                                \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 25,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },      \
        .bodyColor = BODY_COLOR_BLUE,                       \
        .categoryName = _("Single Horn"),                   \
        .eggMoveLearnset = sHeracrossEggMoveLearnset

    [SPECIES_HERACROSS] =
    {
        HERACROSS_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 125,
        .baseDefense   = 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 40,
        .baseSpDefense = 95,
        .catchRate = 64,
        .expYield = 242,
        .growthRate = GROWTH_550,
        .abilities = { ABILITY_SWARM, ABILITY_GUTS, ABILITY_MOXIE },
        .speciesName = _("Heracross"),
        .natDexNum = NATIONAL_DEX_HERACROSS,
        .cryId = CRY_HERACROSS,
        .height = 15,
        .weight = 540,
        .description = COMPOUND_STRING(
            "They gather in forests seeking the sweet\n"
            "sap of trees. It is completely clad in a\n"
            "steel-hard shell. It is proud of its horn,\n"
            "which it uses to fling foes."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Heracross, 64, 64),
        FRONT_PIC_FEMALE(Heracross, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Heracross,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Heracross, 48, 64),
        BACK_PIC_FEMALE(Heracross, 48, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Heracross),
        ICON(Heracross, 0),
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_HERACROSS_MEGA}),
        LEARNSETS(Heracross),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_HERACROSS_MEGA] =
    {
        HERACROSS_MISC_INFO,
        .baseHP        = 85,
        .baseAttack    = 185,
        .baseDefense   = 115,
        .baseSpeed     = 85,
        .baseSpAttack  = 40,
        .baseSpDefense = 105,
        .catchRate = 30,
        .expYield = 327,
        .growthRate = GROWTH_650,
        .abilities = { ABILITY_SKILL_LINK, ABILITY_SKILL_LINK, ABILITY_SKILL_LINK },
        .speciesName = _("Megacross"),
        .natDexNum = NATIONAL_DEX_HERACROSS_MEGA,
        .cryId = CRY_HERACROSS_MEGA,
        .height = 17,
        .weight = 625,
        .description = COMPOUND_STRING(
            "A tremendous influx of energy builds it up,\n"
            "but when Mega Evolution ends, Megacross\n"
            "is bothered by terrible soreness in its\n"
            "muscles."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(HeracrossMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_HeracrossMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(HeracrossMega, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(HeracrossMega),
        ICON(HeracrossMega, 0),
        LEARNSETS(HeracrossMega),
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HERACROSS

#if P_FAMILY_SNEASEL
#define SNEASEL_MISC_INFO                                   \
        .baseHP        = 55,                                \
        .baseAttack    = 95,                                \
        .baseDefense   = 55,                                \
        .baseSpeed     = 115,                               \
        .baseSpAttack  = 85,                                \
        .baseSpDefense = 75,                                \
        .catchRate = 72,                                    \
        .expYield = 232,                                    \
        .evYield_Speed = 1,                                 \
        .itemRare = ITEM_QUICK_CLAW,                        \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = 35,                                   \
        .growthRate = GROWTH_550,                           \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },  \
        .noFlip = TRUE,                                     \
        .cryId = CRY_SNEASEL,                               \
        .categoryName = _("Sharp Claw"),                    \
        .height = 9,                                        \
        .pokemonScale = 413,                                \
        .pokemonOffset = -3,                                \
        .trainerScale = 256,                                \
        .trainerOffset = 0

    [SPECIES_SNEASEL] =
    {
        SNEASEL_MISC_INFO,
        .types = { TYPE_DARK, TYPE_ICE },
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_KEEN_EYE, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Sneasel"),
        .natDexNum = NATIONAL_DEX_SNEASEL,
        .weight = 280,
        .description = COMPOUND_STRING(
            "A Sneasel scales trees by punching its\n"
            "hooked claws into the bark. It seeks out\n"
            "unguarded nests and steals eggs for food\n"
            "while the parents are away."),
        FRONT_PIC(Sneasel, 56, 48),
        FRONT_PIC_FEMALE(Sneasel, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Sneasel,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Sneasel, 64, 64),
        BACK_PIC_FEMALE(Sneasel, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Sneasel),
        ICON(Sneasel, 0),
        LEARNSETS(Sneasel),
        .eggMoveLearnset = sSneaselEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM_HOLD_NIGHT, ITEM_RAZOR_CLAW, SPECIES_WEAVILE},
                                {EVO_ITEM_NIGHT, ITEM_RAZOR_CLAW, SPECIES_WEAVILE}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_WEAVILE] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 65,
        .baseSpeed     = 125,
        .baseSpAttack  = 110,
        .baseSpDefense = 85,
        .types = { TYPE_DARK, TYPE_ICE },
        .catchRate = 40,
        .expYield = 306,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Weavile"),
        .cryId = CRY_WEAVILE,
        .natDexNum = NATIONAL_DEX_WEAVILE,
        .categoryName = _("Sharp Claw"),
        .height = 11,
        .weight = 340,
        .description = COMPOUND_STRING(
            "They travel in groups of four or five,\n"
            "leaving signs for one another on trees\n"
            "and rocks. They bring down their prey\n"
            "with coordinated attacks."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Weavile, 56, 56),
        FRONT_PIC_FEMALE(Weavile, 56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Weavile,
        .frontAnimId = ANIM_H_VIBRATE,
        BACK_PIC(Weavile, 64, 64),
        BACK_PIC_FEMALE(Weavile, 64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Weavile),
        ICON(Weavile, 0),
        LEARNSETS(Weavile),
        .eggMoveLearnset = sSneaselEggMoveLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS

#if P_HISUIAN_FORMS
    [SPECIES_SNEASEL_HISUIAN] =
    {
        SNEASEL_MISC_INFO,
        .types = { TYPE_FIGHTING, TYPE_POISON },
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_KEEN_EYE, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Sneaske"),
        .natDexNum = NATIONAL_DEX_SNEASEL_HISUIAN,
        .weight = 270,
        .description = COMPOUND_STRING(
            "Its sturdy, curved claws are ideal for\n"
            "traversing precipitous cliffs. From the\n"
            "tips of these claws drips a venom that\n"
            "infiltrates the nerves of any prey caught."),
        FRONT_PIC(SneaselHisuian, 56, 56),
        FRONT_PIC_FEMALE(SneaselHisuian, 56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SneaselHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SneaselHisuian, 56, 64),
        BACK_PIC_FEMALE(SneaselHisuian, 56, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SneaselHisuian),
        ICON(SneaselHisuian, 2),
        LEARNSETS(SneaselHisuian),
        .eggMoveLearnset = sSneaselHisuianEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM_HOLD_DAY, ITEM_RAZOR_CLAW, SPECIES_SNEASLER},
                                {EVO_ITEM_DAY, ITEM_RAZOR_CLAW, SPECIES_SNEASLER}),
    },

    [SPECIES_SNEASLER] =
    {
        .baseHP        = 80,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 120,
        .baseSpAttack  = 105,
        .baseSpDefense = 80,
        .types = { TYPE_FIGHTING, TYPE_POISON },
        .catchRate = 40,
        .expYield = 306,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_PRESSURE, ABILITY_UNBURDEN, ABILITY_POISON_TOUCH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sneasler"),
        .cryId = CRY_SNEASLER,
        .natDexNum = NATIONAL_DEX_SNEASLER,
        .categoryName = _("Free Climb"),
        .height = 13,
        .weight = 430,
        .description = COMPOUND_STRING(
            "Because of its wicked poison and daunting\n"
            "physical prowess, no other species could\n"
            "hope to best it on frozen highlands. It\n"
            "prefers solitude and doesn't form packs."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sneasler, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Sneasler,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Sneasler, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Sneasler),
        ICON(Sneasler, 2),
        //.footprint = gMonFootprint_Sneasler,
        LEARNSETS(Sneasler),
        .eggMoveLearnset = sSneaselHisuianEggMoveLearnset,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_SNEASEL

#if P_FAMILY_TEDDIURSA
    [SPECIES_TEDDIURSA] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 139,
        .expYield = 132,
        .evYield_Attack = 1,
        .itemCommon = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_PICKUP, ABILITY_QUICK_FEET, ABILITY_HONEY_GATHER },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Teddiursa"),
        .cryId = CRY_TEDDIURSA,
        .natDexNum = NATIONAL_DEX_TEDDIURSA,
        .categoryName = _("Little Bear"),
        .height = 6,
        .weight = 88,
        .description = COMPOUND_STRING(
            "It licks its palms that are sweetened by\n"
            "being soaked in honey. A Teddiursa makes\n"
            "its own honey by blending fruits and pollen\n"
            "collected by Beedrill."),
        .pokemonScale = 455,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Teddiursa, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Teddiursa,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Teddiursa, 48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Teddiursa),
        ICON(Teddiursa, 0),
        LEARNSETS(Teddiursa),
        .eggMoveLearnset = sTeddiursaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_URSARING}),
    },

    [SPECIES_URSARING] =
    {
        .baseHP        = 90,
        .baseAttack    = 130,
        .baseDefense   = 75,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 57,
        .expYield = 251,
        .evYield_Attack = 2,
        .itemCommon = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_GUTS, ABILITY_QUICK_FEET, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Ursaring"),
        .cryId = CRY_URSARING,
        .natDexNum = NATIONAL_DEX_URSARING,
        .categoryName = _("Hibernator"),
        .height = 18,
        .weight = 1258,
        .description = COMPOUND_STRING(
            "In forests, it is said that there are many\n"
            "streams and towering trees where an\n"
            "Ursaring gathers food. It walks through\n"
            "its forest collecting food every day."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ursaring, 64, 64),
        FRONT_PIC_FEMALE(Ursaring, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Ursaring,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Ursaring, 56, 64),
        BACK_PIC_FEMALE(Ursaring, 56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Ursaring),
        ICON(Ursaring, 2),
        LEARNSETS(Ursaring),
        .eggMoveLearnset = sTeddiursaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM_NIGHT, ITEM_PEAT_BLOCK, SPECIES_URSALUNA},
                                {EVO_ITEM_DAY, ITEM_PEAT_BLOCK, SPECIES_URSALUNA_BLOODMOON}),
    },

#if P_GEN_8_CROSS_EVOS
#define URSALUNA_MISC_INFO                                  \
        .expYield = 322,                                    \
        .types = { TYPE_GROUND, TYPE_NORMAL },              \
        .eggCycles = 20,                                    \
        .itemCommon = ITEM_HONEY,                           \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_650,                           \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },  \
        .bodyColor = BODY_COLOR_BROWN,                      \
        .cryId = CRY_URSALUNA,                              \
        .categoryName = _("Peat"),                          \
        .eggMoveLearnset = sTeddiursaEggMoveLearnset

    [SPECIES_URSALUNA] =
    {
        URSALUNA_MISC_INFO,
        .baseHP        = 130,
        .baseAttack    = 140,
        .baseDefense   = 105,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 80,
        .catchRate = 33,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .abilities = { ABILITY_GUTS, ABILITY_BULLETPROOF, ABILITY_UNNERVE },
        .speciesName = _("Ursaluna"),
        .natDexNum = NATIONAL_DEX_URSALUNA,
        .height = 24,
        .weight = 2900,
        .description = COMPOUND_STRING(
            "Swampy terrain gives Ursaluna its burly\n"
            "physique and newfound capacity to\n"
            "manipulate peat at will."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        FRONT_PIC(Ursaluna, 56, 56),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Ursaluna,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Ursaluna, 64, 40),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Ursaluna),
        ICON(Ursaluna, 2),
        //.footprint = gMonFootprint_Ursaluna,
        LEARNSETS(Ursaluna),
    },

    [SPECIES_URSALUNA_BLOODMOON] =
    {
        URSALUNA_MISC_INFO,
        .baseHP        = 115,
        .baseAttack    = 75,
        .baseDefense   = 125,
        .baseSpeed     = 75,
        .baseSpAttack  = 145,
        .baseSpDefense = 70,
        .catchRate = 5,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .abilities = { ABILITY_MINDS_EYE, ABILITY_NONE },
        .speciesName = _("Ursaferra"),
        .natDexNum = NATIONAL_DEX_URSALUNA_BLOODMOON,
        .height = 27,
        .weight = 3330,
        .description = COMPOUND_STRING(
            "It crossed the sea and drifted\n"
            "ashore in a new land. Surviving in this\n"
            "place led it to take on a unique\n"
            "appearance and gain special powers."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        FRONT_PIC(UrsalunaBloodmoon, 64, 64),
        //.frontPicYOffset = 0,
        .frontAnimFrames = sAnims_UrsalunaBloodmoon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(UrsalunaBloodmoon, 64, 40),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(UrsalunaBloodmoon),
        //ICON(UrsalunaBloodmoon, 0),
        //.footprint = gMonFootprint_UrsalunaBloodmoon,
        LEARNSETS(UrsalunaBloodmoon),
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_TEDDIURSA

#if P_FAMILY_SLUGMA
    [SPECIES_SLUGMA] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 20,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 134,
        .expYield = 136,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_MAGMA_ARMOR, ABILITY_FLAME_BODY, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Slugma"),
        .cryId = CRY_SLUGMA,
        .natDexNum = NATIONAL_DEX_SLUGMA,
        .categoryName = _("Lava"),
        .height = 7,
        .weight = 350,
        .description = COMPOUND_STRING(
            "It is a species of Pokémon that lives in\n"
            "volcanic areas. If its body cools, its skin\n"
            "hardens and immobilizes it. To avoid that,\n"
            "it sleeps near magma."),
        .pokemonScale = 329,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Slugma, 32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Slugma,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Slugma, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Slugma),
        ICON(Slugma, 0),
        LEARNSETS(Slugma),
        .eggMoveLearnset = sSlugmaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_MAGCARGO}),
    },

    [SPECIES_MAGCARGO] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 135,
        .baseSpeed     = 30,
        .baseSpAttack  = 115,
        .baseSpDefense = 115,
        .types = { TYPE_FIRE, TYPE_ROCK },
        .catchRate = 46,
        .expYield = 295,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_MAGMA_ARMOR, ABILITY_FLAME_BODY, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Magcargo"),
        .cryId = CRY_MAGCARGO,
        .natDexNum = NATIONAL_DEX_MAGCARGO,
        .categoryName = _("Lava"),
        .height = 8,
        .weight = 550,
        .description = COMPOUND_STRING(
            "The shell on its back is made of hardened\n"
            "magma. Tens of thousands of years spent\n"
            "living in volcanic craters have turned\n"
            "Magcargo's bodies into magma."),
        .pokemonScale = 332,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magcargo, 56, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Magcargo,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Magcargo, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Magcargo),
        ICON(Magcargo, 0),
        LEARNSETS(Magcargo),
        .eggMoveLearnset = sSlugmaEggMoveLearnset,
    },
#endif //P_FAMILY_SLUGMA

#if P_FAMILY_SWINUB
    [SPECIES_SWINUB] =
    {
        .baseHP        = 80,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 60,
        .types = { TYPE_ICE, TYPE_GROUND },
        .catchRate = 115,
        .expYield = 167,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_SNOW_CLOAK, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Swinub"),
        .cryId = CRY_SWINUB,
        .natDexNum = NATIONAL_DEX_SWINUB,
        .categoryName = _("Pig"),
        .height = 4,
        .weight = 65,
        .description = COMPOUND_STRING(
            "It roots for food by rubbing its snout\n"
            "against the ground. Its favorite food is a\n"
            "mushroom that grows under dried grass.\n"
            "It occasionally roots out hot springs."),
        .pokemonScale = 324,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Swinub, 40, 32),
        .frontPicYOffset = 18,
        .frontAnimFrames = sAnims_Swinub,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Swinub, 56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Swinub),
        ICON(Swinub, 2),
        LEARNSETS(Swinub),
        .eggMoveLearnset = sSwinubEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_PILOSWINE}),
    },

    [SPECIES_PILOSWINE] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
        .types = { TYPE_ICE, TYPE_GROUND },
        .catchRate = 61,
        .expYield = 247,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_SNOW_CLOAK, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Piloswine"),
        .cryId = CRY_PILOSWINE,
        .natDexNum = NATIONAL_DEX_PILOSWINE,
        .categoryName = _("Swine"),
        .height = 11,
        .weight = 558,
        .description = COMPOUND_STRING(
            "A Piloswine is covered by a thick coat\n"
            "of long hair for enduring freezing cold.\n"
            "It uses its tusks to dig up food that has\n"
            "been buried under ice."),
        .pokemonScale = 306,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Piloswine, 48, 56),
        FRONT_PIC_FEMALE(Piloswine, 48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Piloswine,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Piloswine, 64, 48),
        BACK_PIC_FEMALE(Piloswine, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Piloswine),
        ICON(Piloswine, 2),
        LEARNSETS(Piloswine),
        .eggMoveLearnset = sSwinubEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_MAMOSWINE}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAMOSWINE] =
    {
        .baseHP        = 110,
        .baseAttack    = 130,
        .baseDefense   = 120,
        .baseSpeed     = 80,
        .baseSpAttack  = 85,
        .baseSpDefense = 120,
        .types = { TYPE_ICE, TYPE_GROUND },
        .catchRate = 24,
        .expYield = 343,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_SNOW_CLOAK, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Mamoswine"),
        .cryId = CRY_MAMOSWINE,
        .natDexNum = NATIONAL_DEX_MAMOSWINE,
        .categoryName = _("Twin Tusk"),
        .height = 25,
        .weight = 2910,
        .description = COMPOUND_STRING(
            "A frozen Mamoswine was dug from ice\n"
            "dating back 10,000 years. It woke up to\n"
            "much amazement. This Pokémon has been\n"
            "around for a long, long, long time."),
        .pokemonScale = 257,
        .pokemonOffset = 6,
        .trainerScale = 423,
        .trainerOffset = 8,
        FRONT_PIC(Mamoswine, 64, 56),
        FRONT_PIC_FEMALE(Mamoswine, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Mamoswine,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        BACK_PIC(Mamoswine, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Mamoswine),
        ICON(Mamoswine, 2),
        LEARNSETS(Mamoswine),
        .eggMoveLearnset = sSwinubEggMoveLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SWINUB

#if P_FAMILY_CORSOLA
#define CORSOLA_MISC_INFO                                       \
        .evYield_SpDefense = 1,                                 \
        .genderRatio = PERCENT_FEMALE(75),                      \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3 },  \
        .cryId = CRY_CORSOLA,                                   \
        .categoryName = _("Coral"),                             \
        .height = 6,                                            \
        .pokemonScale = 410,                                    \
        .pokemonOffset = 15,                                    \
        .trainerScale = 256,                                    \
        .trainerOffset = 0

    [SPECIES_CORSOLA] =
    {
        CORSOLA_MISC_INFO,
        .baseHP        = 85,
        .baseAttack    = 55,
        .baseDefense   = 115,
        .baseSpeed     = 40,
        .baseSpAttack  = 105,
        .baseSpDefense = 110,
        .catchRate = 61,
        .expYield = 247,
        .growthRate = GROWTH_550,
        .types = { TYPE_WATER, TYPE_ROCK },
        .evYield_Defense = 1,
        .itemRare = ITEM_LUMINOUS_MOSS,
        .abilities = { ABILITY_HUSTLE, ABILITY_NATURAL_CURE, ABILITY_REGENERATOR },
        .speciesName = _("Corsola"),
        .natDexNum = NATIONAL_DEX_CORSOLA,
        .bodyColor = BODY_COLOR_PINK,
        .weight = 50,
        .description = COMPOUND_STRING(
            "Corsola live in warm southern seas.\n"
            "If the sea becomes polluted, the beautiful\n"
            "coral stalks become discolored and crumble\n"
            "away in tatters."),
        FRONT_PIC(Corsola, 48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Corsola,
        .frontAnimId = ANIM_H_SLIDE,
        BACK_PIC(Corsola, 56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Corsola),
        ICON(Corsola, 0),
        LEARNSETS(Corsola),
        .eggMoveLearnset = sCorsolaEggMoveLearnset,
    },

#if P_GALARIAN_FORMS
    [SPECIES_CORSOLA_GALARIAN] =
    {
        CORSOLA_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 100,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .catchRate = 101,
        .expYield = 180,
        .growthRate = GROWTH_450,
        .types = { TYPE_GHOST, TYPE_ROCK },
        .abilities = { ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_CURSED_BODY },
        .speciesName = _("Carsola"),
        .natDexNum = NATIONAL_DEX_CORSOLA_GALARIAN,
        .bodyColor = BODY_COLOR_WHITE,
        .weight = 5,
        .description = COMPOUND_STRING(
            "Sudden climate change wiped out this\n"
            "ancient kind of Corsola. With its branches,\n"
            "it absorbs others' life-force. It curses\n"
            "those unaware that kick it by accident."),
        FRONT_PIC(CorsolaGalarian, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_CorsolaGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CorsolaGalarian, 56, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(CorsolaGalarian),
        ICON(CorsolaGalarian, 0),
        LEARNSETS(CorsolaGalarian),
        .eggMoveLearnset = sCorsolaGalarianEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_CURSOLA}),
    },

    [SPECIES_CURSOLA] =
    {
        .baseHP        = 60,
        .baseAttack    = 95,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 145,
        .baseSpDefense = 130,
        .types = { TYPE_GHOST, TYPE_ROCK },
        .catchRate = 61,
        .expYield = 247,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_PERISH_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Cursola"),
        .cryId = CRY_CURSOLA,
        .natDexNum = NATIONAL_DEX_CURSOLA,
        .categoryName = _("Coral"),
        .height = 10,
        .weight = 4,
        .description = COMPOUND_STRING(
            "Its shell is overflowing with its\n"
            "heightened otherworldly energy. The\n"
            "ectoplasm serves as protection for this\n"
            "Pokémon's core spirit."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Cursola, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cursola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Cursola, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Cursola),
        ICON(Cursola, 0),
        LEARNSETS(Cursola),
        .eggMoveLearnset = sCorsolaGalarianEggMoveLearnset,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_CORSOLA

#if P_FAMILY_REMORAID
    [SPECIES_REMORAID] =
    {
        .baseHP        = 35,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 35,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 149,
        .expYield = 124,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_HUSTLE, ABILITY_SNIPER, ABILITY_MOODY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Remoraid"),
        .cryId = CRY_REMORAID,
        .natDexNum = NATIONAL_DEX_REMORAID,
        .categoryName = _("Jet"),
        .height = 6,
        .weight = 120,
        .description = COMPOUND_STRING(
            "A Remoraid uses its abdominal muscles\n"
            "to forcefully expel swallowed water, then\n"
            "shoot down flying prey. When evolution\n"
            "approaches, it travels down rivers."),
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Remoraid, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Remoraid,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Remoraid, 56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Remoraid),
        ICON(Remoraid, 0),
        LEARNSETS(Remoraid),
        .eggMoveLearnset = sRemoraidEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_OCTILLERY}),
    },

    [SPECIES_OCTILLERY] =
    {
        .baseHP        = 75,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 75,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
        .types = { TYPE_WATER, TYPE_FIRE },
        .catchRate = 57,
        .expYield = 251,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_SUCTION_CUPS, ABILITY_SNIPER, ABILITY_MOODY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Octillery"),
        .cryId = CRY_OCTILLERY,
        .natDexNum = NATIONAL_DEX_OCTILLERY,
        .categoryName = _("Jet"),
        .height = 9,
        .weight = 285,
        .description = COMPOUND_STRING(
            "It ensnares its foe with its suction-\n"
            "cupped tentacles before delivering the\n"
            "finishing blow. If the foe turns out to be\n"
            "too strong, it spews ink to escape."),
        .pokemonScale = 296,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Octillery, 56, 48),
        FRONT_PIC_FEMALE(Octillery, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Octillery,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 20,
        BACK_PIC(Octillery, 64, 56),
        BACK_PIC_FEMALE(Octillery, 64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        PALETTES(Octillery),
        ICON(Octillery, 0),
        LEARNSETS(Octillery),
        .eggMoveLearnset = sRemoraidEggMoveLearnset,
    },
#endif //P_FAMILY_REMORAID

#if P_FAMILY_DELIBIRD
    [SPECIES_DELIBIRD] =
    {
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .types = { TYPE_ICE, TYPE_FLYING },
        .catchRate = 139,
        .expYield = 132,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_HUSTLE, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Delibird"),
        .cryId = CRY_DELIBIRD,
        .natDexNum = NATIONAL_DEX_DELIBIRD,
        .categoryName = _("Delivery"),
        .height = 9,
        .weight = 160,
        .description = COMPOUND_STRING(
            "It carries food bundled up in its tail.\n"
            "There was a famous explorer who\n"
            "managed to scale Mt. Everest thanks\n"
            "to a Delibird sharing its food."),
        .pokemonScale = 293,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Delibird, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Delibird,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Delibird, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Delibird),
        ICON(Delibird, 1),
        LEARNSETS(Delibird),
        .eggMoveLearnset = sDelibirdEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_IRON_BUNDLE}),
    },

    [SPECIES_IRON_BUNDLE] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 114,
        .baseSpeed     = 136,
        .baseSpAttack  = 124,
        .baseSpDefense = 65,
        .types = { TYPE_ICE, TYPE_FLYING },
        .catchRate = 34,
        .expYield = 319,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_QUARK_DRIVE, ABILITY_QUARK_DRIVE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Messebird"),
        .cryId = CRY_IRON_BUNDLE,
        .natDexNum = NATIONAL_DEX_IRON_BUNDLE,
        .categoryName = _("Messenger"),
        .height = 6,
        .weight = 110,
        .description = COMPOUND_STRING(
            "Its shape is similar to a robot\n"
            "featured in a paranormal magazine\n"
            "article. The robot was said to have been\n"
            "created by an ancient civilization."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(IronBundle, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_IronBundle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(IronBundle, 64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(IronBundle),
        ICON(IronBundle, 0),
        //.footprint = gMonFootprint_IronBundle,
        LEARNSETS(IronBundle),
        .eggMoveLearnset = sDelibirdEggMoveLearnset,
    },
#endif //P_FAMILY_DELIBIRD

#if P_FAMILY_MANTINE
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MANTYKE] =
    {
        .baseHP        = 45,
        .baseAttack    = 20,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 120,
        .types = { TYPE_WATER, TYPE_FLYING },
        .catchRate = 132,
        .expYield = 138,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_WATER_ABSORB, ABILITY_WATER_VEIL },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Mantyke"),
        .cryId = CRY_MANTYKE,
        .natDexNum = NATIONAL_DEX_MANTYKE,
        .categoryName = _("Kite"),
        .height = 10,
        .weight = 650,
        .description = COMPOUND_STRING(
            "When it swims close to the surface\n"
            "of the ocean, people aboard ships are\n"
            "able to observe the pattern on its back.\n"
            "It often swims in a school of Remoraid."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Mantyke, 48, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Mantyke,
        .frontAnimId = ANIM_TWIST_TWICE,
        BACK_PIC(Mantyke, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Mantyke),
        ICON(Mantyke, 0),
        LEARNSETS(Mantyke),
        .eggMoveLearnset = sMantykeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPECIFIC_MON_IN_PARTY, SPECIES_REMORAID, SPECIES_MANTINE}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_MANTINE] =
    {
        .baseHP        = 85,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 80,
        .baseSpDefense = 140,
        .types = { TYPE_WATER, TYPE_FLYING },
        .catchRate = 66,
        .expYield = 239,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_WATER_ABSORB, ABILITY_WATER_VEIL },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Mantine"),
        .cryId = CRY_MANTINE,
        .natDexNum = NATIONAL_DEX_MANTINE,
        .categoryName = _("Kite"),
        .height = 21,
        .weight = 2200,
        .description = COMPOUND_STRING(
            "On sunny days, schools of Mantine can be\n"
            "seen elegantly leaping over the waves.\n"
            "It is not bothered by the Remoraid that\n"
            "hitches rides."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
        FRONT_PIC(Mantine, 64, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Mantine,
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 6,
        BACK_PIC(Mantine, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Mantine),
        ICON(Mantine, 2),
        LEARNSETS(Mantine),
        .eggMoveLearnset = sMantykeEggMoveLearnset,
    },
#endif //P_FAMILY_MANTINE

#if P_FAMILY_SKARMORY
    [SPECIES_SKARMORY] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 140,
        .baseSpeed     = 70,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = { TYPE_STEEL, TYPE_FLYING },
        .catchRate = 78,
        .expYield = 225,
        .evYield_Defense = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_STURDY, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Skarmory"),
        .cryId = CRY_SKARMORY,
        .natDexNum = NATIONAL_DEX_SKARMORY,
        .categoryName = _("Armor Bird"),
        .height = 17,
        .weight = 505,
        .description = COMPOUND_STRING(
            "A Pokémon that has a body and wings of\n"
            "steel. People in the past used feathers\n"
            "fallen from Skarmory to make swords and\n"
            "knives."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 1,
        FRONT_PIC(Skarmory, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Skarmory,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Skarmory, 48, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Skarmory),
        ICON(Skarmory, 0),
        LEARNSETS(Skarmory),
        .eggMoveLearnset = sSkarmoryEggMoveLearnset,
    },
#endif //P_FAMILY_SKARMORY

#if P_FAMILY_HOUNDOUR
    [SPECIES_HOUNDOUR] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 35,
        .baseSpeed     = 65,
        .baseSpAttack  = 80,
        .baseSpDefense = 50,
        .types = { TYPE_DARK, TYPE_FIRE },
        .catchRate = 137,
        .expYield = 134,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_FLASH_FIRE, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Houndour"),
        .cryId = CRY_HOUNDOUR,
        .natDexNum = NATIONAL_DEX_HOUNDOUR,
        .categoryName = _("Dark"),
        .height = 6,
        .weight = 108,
        .description = COMPOUND_STRING(
            "Houndour communicate with each other\n"
            "using a variety of cries to corner their\n"
            "prey. This Pokémon's remarkable teamwork\n"
            "is simply unparalleled."),
        .pokemonScale = 393,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Houndour, 40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Houndour,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Houndour, 40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Houndour),
        ICON(Houndour, 0),
        LEARNSETS(Houndour),
        .eggMoveLearnset = sHoundourEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_HOUNDOOM}),
    },

#define HOUNDOOM_MISC_INFO                                  \
        .types = { TYPE_DARK, TYPE_FIRE },                  \
        .evYield_SpAttack = 2,                              \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = 35,                                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },  \
        .bodyColor = BODY_COLOR_BLACK,                      \
        .categoryName = _("Dark"),                          \
        .eggMoveLearnset = sHoundourEggMoveLearnset

    [SPECIES_HOUNDOOM] =
    {
        HOUNDOOM_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 55,
        .baseSpeed     = 95,
        .baseSpAttack  = 110,
        .baseSpDefense = 80,
        .catchRate = 59,
        .expYield = 249,
        .growthRate = GROWTH_550,
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_FLASH_FIRE, ABILITY_UNNERVE },
        .speciesName = _("Houndoom"),
        .natDexNum = NATIONAL_DEX_HOUNDOOM,
        .cryId = CRY_HOUNDOOM,
        .height = 14,
        .weight = 350,
        .description = COMPOUND_STRING(
            "In a Houndoom pack, the one with its horns\n"
            "raked sharply back serves a leadership\n"
            "role. They choose their leader by fighting\n"
            "among themselves."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Houndoom, 64, 64),
        FRONT_PIC_FEMALE(Houndoom, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Houndoom,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Houndoom, 64, 56),
        BACK_PIC_FEMALE(Houndoom, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Houndoom),
        ICON(Houndoom, 0),
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_HOUNDOOM_MEGA}),
        LEARNSETS(Houndoom),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_HOUNDOOM_MEGA] =
    {
        HOUNDOOM_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 115,
        .baseSpAttack  = 140,
        .baseSpDefense = 90,
        .catchRate = 31,
        .expYield = 325,
        .growthRate = GROWTH_650,
        .abilities = { ABILITY_SOLAR_POWER, ABILITY_SOLAR_POWER, ABILITY_SOLAR_POWER },
        .speciesName = _("Houndogar"),
        .natDexNum = NATIONAL_DEX_HOUNDOOM_MEGA,
        .cryId = CRY_HOUNDOOM_MEGA,
        .height = 19,
        .weight = 495,
        .description = COMPOUND_STRING(
            "Its red claws and the tips of its tail are\n"
            "melting from high internal temperatures\n"
            "that are painful to Houndoom itself.\n"),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(HoundoomMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_HoundoomMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(HoundoomMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(HoundoomMega),
        ICON(HoundoomMega, 0),
        LEARNSETS(HoundoomMega)
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HOUNDOUR

#if P_FAMILY_PHANPY
    [SPECIES_PHANPY] =
    {
        .baseHP        = 90,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .catchRate = 125,
        .expYield = 158,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Phanpy"),
        .cryId = CRY_PHANPY,
        .natDexNum = NATIONAL_DEX_PHANPY,
        .categoryName = _("Long Nose"),
        .height = 5,
        .weight = 335,
        .description = COMPOUND_STRING(
            "Phanpy's big ears serve as broad fans.\n"
            "When it becomes hot, it flaps the ears\n"
            "busily to cool down. Even the young are\n"
            "very strong."),
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Phanpy, 40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Phanpy,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        BACK_PIC(Phanpy, 56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Phanpy),
        ICON(Phanpy, 0),
        LEARNSETS(Phanpy),
        .eggMoveLearnset = sPhanpyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_DONPHAN},
                                {EVO_ITEM, ITEM_SUN_STONE, SPECIES_GREAT_TUSK},
                                {EVO_ITEM, ITEM_MOON_STONE, SPECIES_IRON_TREADS}),
    },

    [SPECIES_DONPHAN] =
    {
        .baseHP        = 100,
        .baseAttack    = 130,
        .baseDefense   = 130,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .catchRate = 42,
        .expYield = 303,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Donphan"),
        .cryId = CRY_DONPHAN,
        .natDexNum = NATIONAL_DEX_DONPHAN,
        .categoryName = _("Armor"),
        .height = 11,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "A Donphan is so strong it can easily haul\n"
            "a dump truck. Its hide has toughened to a\n"
            "rock-hard state. An ordinary sort of\n"
            "attack won't even leave a scratch."),
        .pokemonScale = 313,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Donphan, 64, 48),
        FRONT_PIC_FEMALE(Donphan, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Donphan,
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        BACK_PIC(Donphan, 64, 48),
        BACK_PIC_FEMALE(Donphan, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Donphan),
        ICON(Donphan, 0),
        LEARNSETS(Donphan),
        .eggMoveLearnset = sPhanpyEggMoveLearnset,
    },

    [SPECIES_GREAT_TUSK] =
    {
        .baseHP        = 115,
        .baseAttack    = 131,
        .baseDefense   = 131,
        .baseSpeed     = 87,
        .baseSpAttack  = 53,
        .baseSpDefense = 53,
        .types = { TYPE_GROUND, TYPE_FIGHTING },
        .catchRate = 42,
        .expYield = 303,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_PROTOSYNTHESIS, ABILITY_PROTOSYNTHESIS },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Phantusk"),
        .cryId = CRY_GREAT_TUSK,
        .natDexNum = NATIONAL_DEX_GREAT_TUSK,
        .categoryName = _("Armor"),
        .height = 22,
        .weight = 3200,
        .description = COMPOUND_STRING(
            "Sightings of this Pokémon have\n"
            "occurred in recent years. The name\n"
            "Great Tusk was taken from a creature\n"
            "listed in a certain book."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(GreatTusk, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_GreatTusk,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GreatTusk, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GreatTusk),
        ICON(GreatTusk, 0),
        //.footprint = gMonFootprint_GreatTusk,
        LEARNSETS(GreatTusk),
        .eggMoveLearnset = sPhanpyEggMoveLearnset,
    },

    [SPECIES_IRON_TREADS] =
    {
        .baseHP        = 90,
        .baseAttack    = 112,
        .baseDefense   = 120,
        .baseSpeed     = 106,
        .baseSpAttack  = 72,
        .baseSpDefense = 70,
        .types = { TYPE_GROUND, TYPE_STEEL },
        .catchRate = 42,
        .expYield = 303,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_QUARK_DRIVE, ABILITY_QUARK_DRIVE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Metaphan"),
        .cryId = CRY_IRON_TREADS,
        .natDexNum = NATIONAL_DEX_IRON_TREADS,
        .categoryName = _("Armor"),
        .height = 9,
        .weight = 2400,
        .description = COMPOUND_STRING(
            "Sightings of this Pokémon have\n"
            "occurred in recent years. It resembles\n"
            "a mysterious object described in an\n"
            "old expedition journal."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(IronTreads, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_IronTreads,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(IronTreads, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(IronTreads),
        ICON(IronTreads, 0),
        //.footprint = gMonFootprint_IronTreads,
        LEARNSETS(IronTreads),
        .eggMoveLearnset = sPhanpyEggMoveLearnset,
    },
#endif //P_FAMILY_PHANPY

#if P_FAMILY_STANTLER
    [SPECIES_STANTLER] =
    {
        .baseHP        = 73,
        .baseAttack    = 95,
        .baseDefense   = 62,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 78,
        .expYield = 225,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FRISK, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Stantler"),
        .cryId = CRY_STANTLER,
        .natDexNum = NATIONAL_DEX_STANTLER,
        .categoryName = _("Big Horn"),
        .height = 14,
        .weight = 712,
        .description = COMPOUND_STRING(
            "Stantler's magnificent antlers were\n"
            "once traded at high prices as works of art.\n"
            "As a result, this Pokémon was hunted\n"
            "close to extinction."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Stantler, 48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Stantler,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Stantler, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Stantler),
        ICON(Stantler, 2),
        LEARNSETS(Stantler),
        .eggMoveLearnset = sStantlerEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_PSYSHIELD_BASH, SPECIES_WYRDEER}),
    },

#if P_GEN_8_CROSS_EVOS
    [SPECIES_WYRDEER] =
    {
        .baseHP        = 103,
        .baseAttack    = 115,
        .baseDefense   = 72,
        .baseSpeed     = 97,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_PSYCHIC },
        .catchRate = 43,
        .expYield = 302,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FRISK, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Wyrdeer"),
        .cryId = CRY_WYRDEER,
        .natDexNum = NATIONAL_DEX_WYRDEER,
        .categoryName = _("Big Horn"),
        .height = 18,
        .weight = 951,
        .description = COMPOUND_STRING(
            "The black orbs shine with an uncanny light\n"
            "when it is erecting invisible barriers.\n"
            "The fur shed from its beard retains heat\n"
            "and is useful for winter clothing."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        FRONT_PIC(Wyrdeer, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Wyrdeer,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Wyrdeer, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Wyrdeer),
        ICON(Wyrdeer, 2),
        //.footprint = gMonFootprint_Wyrdeer,
        LEARNSETS(Wyrdeer),
        .eggMoveLearnset = sStantlerEggMoveLearnset,
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_STANTLER

#if P_FAMILY_SMEARGLE
    [SPECIES_SMEARGLE] =
    {
        .baseHP        = 55,
        .baseAttack    = 20,
        .baseDefense   = 35,
        .baseSpeed     = 110,
        .baseSpAttack  = 20,
        .baseSpDefense = 45,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 161,
        .expYield = 114,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_TECHNICIAN, ABILITY_MOODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Smeargle"),
        .cryId = CRY_SMEARGLE,
        .natDexNum = NATIONAL_DEX_SMEARGLE,
        .categoryName = _("Painter"),
        .height = 12,
        .weight = 580,
        .description = COMPOUND_STRING(
            "A Smeargle marks its territory using a\n"
            "fluid that leaks out from the tip of its\n"
            "tail. About 5,000 different marks left by\n"
            "this Pokémon have been found."),
        .pokemonScale = 287,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Smeargle, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Smeargle,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        BACK_PIC(Smeargle, 56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Smeargle),
        ICON(Smeargle, 1),
        LEARNSETS(Smeargle),
        // .eggMoveLearnset = sSmeargleEggMoveLearnset,
    },
#endif //P_FAMILY_SMEARGLE

#if P_FAMILY_MILTANK
    [SPECIES_MILTANK] =
    {
        .baseHP        = 95,
        .baseAttack    = 100,
        .baseDefense   = 125,
        .baseSpeed     = 100,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 48,
        .expYield = 293,
        .evYield_Defense = 2,
        .itemCommon = ITEM_MOOMOO_MILK,
        .itemRare = ITEM_MOOMOO_MILK,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_550,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_THICK_FAT, ABILITY_SCRAPPY, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Miltank"),
        .cryId = CRY_MILTANK,
        .natDexNum = NATIONAL_DEX_MILTANK,
        .categoryName = _("Milk Cow"),
        .height = 12,
        .weight = 755,
        .description = COMPOUND_STRING(
            "It gives over five gallons of milk daily.\n"
            "Its sweet milk is enjoyed by children and\n"
            "grown-ups alike. People who can't drink\n"
            "milk turn it into yogurt and eat it instead."),
        .pokemonScale = 280,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Miltank, 64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Miltank,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Miltank, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Miltank),
        ICON(Miltank, 0),
        LEARNSETS(Miltank),
        .eggMoveLearnset = sMiltankEggMoveLearnset,
    },
#endif //P_FAMILY_MILTANK

#if P_FAMILY_RAIKOU
    [SPECIES_RAIKOU] =
    {
        .baseHP        = 125,
        .baseAttack    = 90,
        .baseDefense   = 91,
        .baseSpeed     = 115,
        .baseSpAttack  = 137,
        .baseSpDefense = 125,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 17,
        .expYield = 400,
        .evYield_Speed = 2,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_750,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_PRESSURE, ABILITY_VOLT_ABSORB, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_YELLOW,
        .isLegendary = TRUE,
        .speciesName = _("Raikou"),
        .cryId = CRY_RAIKOU,
        .natDexNum = NATIONAL_DEX_RAIKOU,
        .categoryName = _("Thunder"),
        .height = 19,
        .weight = 1780,
        .description = COMPOUND_STRING(
            "Raikou embodies the speed of lightning.\n"
            "Its roars send shock waves shuddering\n"
            "through the air and ground as if\n"
            "lightning bolts were crashing down."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        FRONT_PIC(Raikou, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Raikou,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Raikou, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Raikou),
        ICON(Raikou, 2),
        LEARNSETS(Raikou),
        // .eggMoveLearnset = sRaikouEggMoveLearnset,
    },
#endif //P_FAMILY_RAIKOU

#if P_FAMILY_ENTEI
    [SPECIES_ENTEI] =
    {
        .baseHP        = 139,
        .baseAttack    = 115,
        .baseDefense   = 121,
        .baseSpeed     = 100,
        .baseSpAttack  = 115,
        .baseSpDefense = 93,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 17,
        .expYield = 400,
        .evYield_HP = 1,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_750,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_PRESSURE, ABILITY_FLASH_FIRE, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_BROWN,
        .isLegendary = TRUE,
        .speciesName = _("Entei"),
        .cryId = CRY_ENTEI,
        .natDexNum = NATIONAL_DEX_ENTEI,
        .categoryName = _("Volcano"),
        .height = 21,
        .weight = 1980,
        .description = COMPOUND_STRING(
            "Entei embodies the passion of magma.\n"
            "It is thought to have been born in the\n"
            "eruption of a volcano. It blasts fire that\n"
            "consumes all that it touches."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        FRONT_PIC(Entei, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Entei,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Entei, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Entei),
        ICON(Entei, 2),
        LEARNSETS(Entei),
        // .eggMoveLearnset = sEnteiEggMoveLearnset,
    },
#endif //P_FAMILY_ENTEI

#if P_FAMILY_SUICUNE
    [SPECIES_SUICUNE] =
    {
        .baseHP        = 110,
        .baseAttack    = 85,
        .baseDefense   = 129,
        .baseSpeed     = 109,
        .baseSpAttack  = 125,
        .baseSpDefense = 125,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 17,
        .expYield = 400,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_750,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_PRESSURE, ABILITY_WATER_ABSORB, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_BLUE,
        .isLegendary = TRUE,
        .speciesName = _("Suicune"),
        .cryId = CRY_SUICUNE,
        .natDexNum = NATIONAL_DEX_SUICUNE,
        .categoryName = _("Aurora"),
        .height = 20,
        .weight = 1870,
        .description = COMPOUND_STRING(
            "Suicune embodies the compassion of\n"
            "a pure spring of water. It runs across\n"
            "the land with gliding elegance. It has the\n"
            "power to purify dirty water."),
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        FRONT_PIC(Suicune, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Suicune,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Suicune, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Suicune),
        ICON(Suicune, 2),
        LEARNSETS(Suicune),
        // .eggMoveLearnset = sSuicuneEggMoveLearnset,
    },
#endif //P_FAMILY_SUICUNE

#if P_FAMILY_LARVITAR
    [SPECIES_LARVITAR] =
    {
        .baseHP        = 50,
        .baseAttack    = 64,
        .baseDefense   = 50,
        .baseSpeed     = 41,
        .baseSpAttack  = 45,
        .baseSpDefense = 50,
        .types = { TYPE_ROCK, TYPE_GROUND },
        .catchRate = 154,
        .expYield = 120,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_350,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Larvitar"),
        .cryId = CRY_LARVITAR,
        .natDexNum = NATIONAL_DEX_LARVITAR,
        .categoryName = _("Rock Skin"),
        .height = 6,
        .weight = 720,
        .description = COMPOUND_STRING(
            "A Larvitar is born deep under the ground.\n"
            "It must eat its way through the soil above\n"
            "and reach the surface for it to see its\n"
            "parents' faces."),
        .pokemonScale = 472,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Larvitar, 40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Larvitar,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Larvitar, 56, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Larvitar),
        ICON(Larvitar, 1),
        LEARNSETS(Larvitar),
        .eggMoveLearnset = sLarvitarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_PUPITAR}),
    },

    [SPECIES_PUPITAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 84,
        .baseDefense   = 70,
        .baseSpeed     = 51,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = { TYPE_ROCK, TYPE_GROUND },
        .catchRate = 101,
        .expYield = 180,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_450,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Pupitar"),
        .cryId = CRY_PUPITAR,
        .natDexNum = NATIONAL_DEX_PUPITAR,
        .categoryName = _("Hard Shell"),
        .height = 12,
        .weight = 1520,
        .description = COMPOUND_STRING(
            "A Pupitar creates a gas inside its body\n"
            "that it ejects under compression to propel\n"
            "itself like a jet. Its body can withstand\n"
            "a collision with solid steel."),
        .pokemonScale = 292,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pupitar, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Pupitar,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Pupitar, 48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Pupitar),
        ICON(Pupitar, 2),
        LEARNSETS(Pupitar),
        .eggMoveLearnset = sLarvitarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 55, SPECIES_TYRANITAR},
                                {EVO_FRIENDSHIP_DAY, 0, SPECIES_IRON_THORNS},
                                {EVO_FRIENDSHIP_NIGHT, 0, SPECIES_TYRANITAR_MEGA}),
    },

#define TYRANITAR_MISC_INFO                                     \
        .catchRate = 29,                                        \
        .evYield_Attack = 3,                                    \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 40,                                        \
        .friendship = 35,                                       \
        .growthRate = GROWTH_650,                               \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },  \
        .bodyColor = BODY_COLOR_GREEN,                          \
        .categoryName = _("Armor"),                             \
        .eggMoveLearnset = sLarvitarEggMoveLearnset

    [SPECIES_TYRANITAR] =
    {
        TYRANITAR_MISC_INFO,
        .baseHP        = 110,
        .baseAttack    = 134,
        .baseDefense   = 120,
        .baseSpeed     = 61,
        .baseSpAttack  = 95,
        .baseSpDefense = 100,
        .types = { TYPE_ROCK, TYPE_GROUND },
        .expYield = 330,
        .abilities = { ABILITY_SAND_STREAM, ABILITY_NONE, ABILITY_UNNERVE },
        .speciesName = _("Tyranitar"),
        .natDexNum = NATIONAL_DEX_TYRANITAR,
        .cryId = CRY_TYRANITAR,
        .height = 20,
        .weight = 2020,
        .description = COMPOUND_STRING(
            "A Tyranitar is so overwhelmingly powerful,\n"
            "it can bring down a whole mountain to make\n"
            "its nest. It roams in mountains seeking\n"
            "new opponents to fight."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        FRONT_PIC(Tyranitar, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Tyranitar,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 10,
        BACK_PIC(Tyranitar, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Tyranitar),
        ICON(Tyranitar, 4),
        LEARNSETS(Tyranitar),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_TYRANITAR_MEGA] =
    {
        TYRANITAR_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 164,
        .baseDefense   = 140,
        .baseSpeed     = 71,
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .types = { TYPE_ROCK, TYPE_DARK },
        .expYield = 330,
        .abilities = { ABILITY_SAND_STREAM, ABILITY_SAND_STREAM, ABILITY_SAND_STREAM },
        .speciesName = _("Tyranidark"),
        .natDexNum = NATIONAL_DEX_TYRANITAR_MEGA,
        .cryId = CRY_TYRANITAR_MEGA,
        .height = 25,
        .weight = 2550,
        .description = COMPOUND_STRING(
            "Due to the colossal power poured into it,\n"
            "this Pokémon's back split right open. Its\n"
            "destructive instincts are the only thing\n"
            "keeping it moving."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        FRONT_PIC(TyranitarMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TyranitarMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(TyranitarMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(TyranitarMega),
        ICON(TyranitarMega, 1),
        LEARNSETS(TyranitarMega),
    },
#endif //P_MEGA_EVOLUTIONS

    [SPECIES_IRON_THORNS] =
    {
        .baseHP        = 100,
        .baseAttack    = 134,
        .baseDefense   = 110,
        .baseSpeed     = 72,
        .baseSpAttack  = 120,
        .baseSpDefense = 84,
        .types = { TYPE_ROCK, TYPE_ELECTRIC },
        .catchRate = 29,
        .expYield = 330,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_650,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_QUARK_DRIVE, ABILITY_QUARK_DRIVE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Tyranizap"),
        .cryId = CRY_IRON_THORNS,
        .natDexNum = NATIONAL_DEX_IRON_THORNS,
        .categoryName = _("Armor"),
        .height = 16,
        .weight = 3030,
        .description = COMPOUND_STRING(
            "It has some similarities to a\n"
            "Pokémon introduced in a dubious magazine\n"
            "as a Tyranitar from one billion\n"
            "years into the future."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(IronThorns, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_IronThorns,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(IronThorns, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(IronThorns),
        ICON(IronThorns, 1),
        //.footprint = gMonFootprint_IronThorns,
        LEARNSETS(IronThorns),
        .eggMoveLearnset = sLarvitarEggMoveLearnset,
    },
#endif //P_FAMILY_LARVITAR

#if P_FAMILY_LUGIA
    [SPECIES_LUGIA] =
    {
        .baseHP        = 130,
        .baseAttack    = 110,
        .baseDefense   = 130,
        .baseSpeed     = 110,
        .baseSpAttack  = 154,
        .baseSpDefense = 154,
        .types = { TYPE_PSYCHIC, TYPE_FLYING },
        .catchRate = 6,
        .expYield = 507,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_850,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_MULTISCALE },
        .bodyColor = BODY_COLOR_WHITE,
        .isLegendary = TRUE,
        .speciesName = _("Lugia"),
        .cryId = CRY_LUGIA,
        .natDexNum = NATIONAL_DEX_LUGIA,
        .categoryName = _("Diving"),
        .height = 52,
        .weight = 2160,
        .description = COMPOUND_STRING(
            "Lugia is so powerful even a light\n"
            "fluttering of its wings can blow apart\n"
            "houses. As a result, it chooses to live out\n"
            "of sight deep under the sea."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        FRONT_PIC(Lugia, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Lugia,
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .frontAnimDelay = 20,
        .enemyMonElevation = 6,
        BACK_PIC(Lugia, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Lugia),
        ICON(Lugia, 0),
        LEARNSETS(Lugia),
        // .eggMoveLearnset = sLugiaEggMoveLearnset,
    },
#endif //P_FAMILY_LUGIA

#if P_FAMILY_HO_OH
    [SPECIES_HO_OH] =
    {
        .baseHP        = 106,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 90,
        .baseSpAttack  = 130,
        .baseSpDefense = 154,
        .types = { TYPE_FIRE, TYPE_FLYING },
        .catchRate = 13,
        .expYield = 415,
        .evYield_SpDefense = 3,
        .itemCommon = ITEM_SACRED_ASH,
        .itemRare   = ITEM_SACRED_ASH,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_750,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_RED,
        .isLegendary = TRUE,
        .speciesName = _("Ho-Oh"),
        .cryId = CRY_HO_OH,
        .natDexNum = NATIONAL_DEX_HO_OH,
        .categoryName = _("Rainbow"),
        .height = 38,
        .weight = 1990,
        .description = COMPOUND_STRING(
            "Its feathers--which glow in seven colors\n"
            "depending on the angle at which they are\n"
            "struck by light--are thought to bring joy.\n"
            "It is said to live at the foot of a rainbow."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
        FRONT_PIC(HoOh, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_HoOh,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 6,
        BACK_PIC(HoOh, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(HoOh),
        ICON(HoOh, 1),
        LEARNSETS(HoOh),
        // .eggMoveLearnset = sHoOhEggMoveLearnset,
    },
#endif //P_FAMILY_HO_OH

#if P_FAMILY_CELEBI
    [SPECIES_CELEBI] =
    {
        .baseHP        = 111,
        .baseAttack    = 111,
        .baseDefense   = 111,
        .baseSpeed     = 111,
        .baseSpAttack  = 111,
        .baseSpDefense = 111,
        .types = { TYPE_PSYCHIC, TYPE_GRASS },
        .catchRate = 20,
        .expYield = 390,
        .evYield_HP = 3,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_750,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .isMythical = TRUE,
        .speciesName = _("Celebi"),
        .cryId = CRY_CELEBI,
        .natDexNum = NATIONAL_DEX_CELEBI,
        .categoryName = _("Time Travel"),
        .height = 6,
        .weight = 50,
        .description = COMPOUND_STRING(
            "This Pokémon came from the future by\n"
            "crossing over time. It is thought that so\n"
            "long as Celebi appears, a bright and\n"
            "shining future awaits us."),
        .pokemonScale = 393,
        .pokemonOffset = -10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Celebi, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Celebi,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 15,
        BACK_PIC(Celebi, 48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        PALETTES(Celebi),
        ICON(Celebi, 1),
        LEARNSETS(Celebi),
        // .eggMoveLearnset = sCelebiEggMoveLearnset,
    },
#endif //P_FAMILY_CELEBI

#ifdef __INTELLISENSE__
};
#endif