EventScript_StartMenu::
	goto_if_set FLAG_SYS_SAFARI_MODE, EventScript_StartMenu_BuildSafariZoneMenu
	goto_if_in_battle_pyramid EventScript_StartMenu_BuildBattlePyramidMenu
	goto_if_in_battle_pike EventScript_StartMenu_BuildBattlePikeMenu
    call_if_set FLAG_DEXNAV_DEXNAV_GET, EventScript_StartMenu_ToggleDexNav
	call_if_set FLAG_SYS_POKEDEX_GET, EventScript_StartMenu_TogglePokedex
	call_if_set FLAG_SYS_POKEMON_GET, EventScript_StartMenu_TogglePokemon
	call_if_set FLAG_SYS_BAG, EventScript_StartMenu_ToggleBag
	call_if_set FLAG_SYS_POKENAV_GET, EventScript_StartMenu_TogglePokenav
	call_if_set FLAG_SYS_TRAINER_CARD, EventScript_StartMenu_ToggleTrainerCard
    call_if_set FLAG_SYS_QUEST_MENU_GET, EventScript_StartMenu_ToggleQuests
	call_if_set FLAG_SYS_SAVE, EventScript_StartMenu_ToggleSave
	dynmultipush StartMenu_Text_Option, 6
	dynmultipush StartMenu_Text_Exit, 7
	special PlayRainStoppingSoundEffect
	dynmultistack 22, 0, FALSE, 8, FALSE, VAR_START_MENU_CURSOR_POS, DYN_MULTICHOICE_CB_UPDATE_START_MENU_CURSOR_POS
	switch VAR_RESULT
	case 0, EventScript_StartMenu_PokedexAccess
	case 1, EventScript_StartMenu_PokemonAccess
	case 2, EventScript_StartMenu_BagAccess
	case 3, EventScript_StartMenu_PokenavAccess
	case 4, EventScript_StartMenu_TrainerCardAccess
	case 5, EventScript_StartMenu_SaveAccess
	case 6, EventScript_StartMenu_OptionAccess
	case 7, EventScript_StartMenu_ExitAccess
    case 8, EventScript_StartMenu_DexNavAccess
    case 9, EventScript_StartMenu_QuestsAccess
	case MULTI_B_PRESSED, EventScript_StartMenu_ExitAccess
	end

EventScript_StartMenu_TogglePokedex:
	dynmultipush StartMenu_Text_Pokedex, 0
	return
EventScript_StartMenu_TogglePokemon:
	dynmultipush StartMenu_Text_Pokemon, 1
	return
EventScript_StartMenu_ToggleBag:
	dynmultipush StartMenu_Text_Bag, 2
	return
EventScript_StartMenu_TogglePokenav:
	dynmultipush StartMenu_Text_Pokenav, 3
	return
EventScript_StartMenu_ToggleTrainerCard:
	dynmultipush StartMenu_Text_TrainerCard, 4
	return
EventScript_StartMenu_ToggleSave:
	dynmultipush StartMenu_Text_Save, 5
	return
EventScript_StartMenu_ToggleDexNav:
	dynmultipush StartMenu_Text_DexNav, 8
	return
EventScript_StartMenu_ToggleQuests:
	dynmultipush StartMenu_Text_Quests, 9
	return

EventScript_StartMenu_PokedexAccess:
	special RemoveExtraStartMenuWindows
	fadescreen FADE_TO_BLACK
	special Script_StartMenu_OpenPokedexMenu
	end
EventScript_StartMenu_PokemonAccess:
	special RemoveExtraStartMenuWindows
	fadescreen FADE_TO_BLACK
	special Script_StartMenu_OpenPokemonMenu
	end
EventScript_StartMenu_BagAccess:
	special RemoveExtraStartMenuWindows
	fadescreen FADE_TO_BLACK
	special Script_StartMenu_OpenBagMenu
	end
EventScript_StartMenu_PokenavAccess:
	special RemoveExtraStartMenuWindows
	fadescreen FADE_TO_BLACK
	special Script_StartMenu_OpenPokenavMenu
	end
EventScript_StartMenu_TrainerCardAccess:
	special RemoveExtraStartMenuWindows
	fadescreen FADE_TO_BLACK
	special Script_StartMenu_OpenTrainerCardMenu
	end
EventScript_StartMenu_SaveAccess:
	special RemoveExtraStartMenuWindows
	call Common_EventScript_SaveGame
	releaseall
	end
EventScript_StartMenu_OptionAccess:
	special RemoveExtraStartMenuWindows
	fadescreen FADE_TO_BLACK
	special Script_StartMenu_OpenOptionsMenu
	end
EventScript_StartMenu_ExitAccess:
	special RemoveExtraStartMenuWindows
	end
EventScript_StartMenu_DexNavAccess:
    special RemoveExtraStartMenuWindows
    fadescreen FADE_TO_BLACK
	special Script_StartMenu_OpenDexNavMenu
	end
EventScript_StartMenu_QuestsAccess:
    special RemoveExtraStartMenuWindows
    fadescreen FADE_TO_BLACK
	special Script_StartMenu_OpenQuestsMenu
	end

StartMenu_Text_Pokedex:
    .string "Pokédex$"
StartMenu_Text_Pokemon:
    .string "Pokémon$"
StartMenu_Text_Bag:
    .string "Bag$"
StartMenu_Text_Pokenav:
    .string "Pokénav$"
StartMenu_Text_TrainerCard:
    .string "{PLAYER}$"
StartMenu_Text_Save:
    .string "Save$"
StartMenu_Text_Option:
    .string "Options$"
StartMenu_Text_Exit:
    .string "Exit$"

StartMenu_Text_DexNav:
    .string "DexNav$"
StartMenu_Text_Quests:
    .string "Quests$"

EventScript_StartMenu_BuildSafariZoneMenu:
	dynmultipush StartMenu_Text_Retire, 0
	call_if_set FLAG_SYS_POKEDEX_GET, EventScript_StartMenu_TogglePokedexInSafari
	call_if_set FLAG_SYS_POKEMON_GET, EventScript_StartMenu_TogglePokemonInSafari
	call_if_set FLAG_SYS_BAG, EventScript_StartMenu_ToggleBagInSafari
	call_if_set FLAG_SYS_TRAINER_CARD, EventScript_StartMenu_ToggleTrainerCardInSafari
	dynmultipush StartMenu_Text_Option, 5
	dynmultipush StartMenu_Text_Exit, 6
	special PlayRainStoppingSoundEffect
	special ShowSafariBallsWindow
	dynmultistack 22, 0, FALSE, 8, FALSE, VAR_START_MENU_CURSOR_POS, DYN_MULTICHOICE_CB_UPDATE_START_MENU_CURSOR_POS
	switch VAR_RESULT
	case 0, EventScript_StartMenu_RetireSafariAccess
	case 1, EventScript_StartMenu_PokedexAccess
	case 2, EventScript_StartMenu_PokemonAccess
	case 3, EventScript_StartMenu_BagAccess
	case 4, EventScript_StartMenu_TrainerCardAccess
	case 5, EventScript_StartMenu_OptionAccess
	case 6, EventScript_StartMenu_ExitAccess
	case MULTI_B_PRESSED, EventScript_StartMenu_ExitAccess
	end

EventScript_StartMenu_TogglePokedexInSafari:
	dynmultipush StartMenu_Text_Pokedex, 1
	return
EventScript_StartMenu_TogglePokemonInSafari:
	dynmultipush StartMenu_Text_Pokemon, 2
	return
EventScript_StartMenu_ToggleBagInSafari:
	dynmultipush StartMenu_Text_Bag, 3
	return
EventScript_StartMenu_ToggleTrainerCardInSafari:
	dynmultipush StartMenu_Text_TrainerCard, 4
	return

EventScript_StartMenu_RetireSafariAccess:
	special Script_StartMenu_OpenRetireSafari
	end

StartMenu_Text_Retire:
    .string "Retire$"

EventScript_StartMenu_BuildBattlePyramidMenu:
	call_if_set FLAG_SYS_POKEMON_GET, EventScript_StartMenu_TogglePokemonInBattlePyramid
	call_if_set FLAG_SYS_BAG, EventScript_StartMenu_ToggleBagInBattlePyramid
	call_if_set FLAG_SYS_TRAINER_CARD, EventScript_StartMenu_ToggleTrainerCardInBattlePyramid
	dynmultipush StartMenu_Text_Rest, 3
	dynmultipush StartMenu_Text_Retire, 4
	dynmultipush StartMenu_Text_Option, 5
	dynmultipush StartMenu_Text_Exit, 6
	special PlayRainStoppingSoundEffect
	special ShowPyramidFloorWindow
	dynmultistack 22, 0, FALSE, 8, FALSE, VAR_START_MENU_CURSOR_POS, DYN_MULTICHOICE_CB_UPDATE_START_MENU_CURSOR_POS
	switch VAR_RESULT
	case 0, EventScript_StartMenu_PokemonAccess
	case 1, EventScript_StartMenu_BagAccess
	case 2, EventScript_StartMenu_TrainerCardAccess
	case 3, EventScript_StartMenu_Rest
	case 4, EventScript_StartMenu_RetireBattlePyramidAccess
	case 5, EventScript_StartMenu_OptionAccess
	case 6, EventScript_StartMenu_ExitAccess
	case MULTI_B_PRESSED, EventScript_StartMenu_ExitAccess
	end

EventScript_StartMenu_TogglePokemonInBattlePyramid:
	dynmultipush StartMenu_Text_Pokemon, 0
	return
EventScript_StartMenu_ToggleBagInBattlePyramid:
	dynmultipush StartMenu_Text_Bag, 1
	return
EventScript_StartMenu_ToggleTrainerCardInBattlePike:
EventScript_StartMenu_ToggleTrainerCardInBattlePyramid:
	dynmultipush StartMenu_Text_TrainerCard, 2
	return

EventScript_StartMenu_Rest:
	special RemoveExtraStartMenuWindows
	call Common_EventScript_SaveGame
	goto_if_eq VAR_RESULT, NO, EventScript_StartMenu_BuildBattlePyramidMenu
	callnative DoSoftReset
	releaseall
	end

EventScript_StartMenu_RetireBattlePyramidAccess:
	msgbox gText_BattlePyramidConfirmRetire, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_StartMenu_RebuildBattlePyramidMenu
	closemessage
	special RemoveExtraStartMenuWindows
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	end

EventScript_StartMenu_RebuildBattlePyramidMenu:
	closemessage
	goto EventScript_StartMenu_BuildBattlePyramidMenu
	end

StartMenu_Text_Rest:
    .string "Rest$"

EventScript_StartMenu_BuildBattlePikeMenu:
	call_if_set FLAG_SYS_POKEDEX_GET, EventScript_StartMenu_TogglePokedex
	call_if_set FLAG_SYS_POKEMON_GET, EventScript_StartMenu_TogglePokemon
	call_if_set FLAG_SYS_TRAINER_CARD, EventScript_StartMenu_ToggleTrainerCardInBattlePike
	dynmultipush StartMenu_Text_Option, 3
	dynmultipush StartMenu_Text_Exit, 4
	special PlayRainStoppingSoundEffect
	dynmultistack 22, 0, FALSE, 8, FALSE, VAR_START_MENU_CURSOR_POS, DYN_MULTICHOICE_CB_UPDATE_START_MENU_CURSOR_POS
	switch VAR_RESULT
	case 0, EventScript_StartMenu_PokedexAccess
	case 1, EventScript_StartMenu_PokemonAccess
	case 2, EventScript_StartMenu_TrainerCardAccess
	case 3, EventScript_StartMenu_OptionAccess
	case 4, EventScript_StartMenu_ExitAccess
	case MULTI_B_PRESSED, EventScript_StartMenu_ExitAccess
	end
