	.macro questmenu case:req, questId:req
	.byte SCR_OP_QUESTMENU
	.byte \case
	.byte \questId
	.endm

	.macro subquestmenu case:req, parentId:req, childId:req
	.byte SCR_OP_SUBQUESTMENU
	.byte \case
	.2byte \parentId
	.2byte \childId
	.endm

	@ Check the quest state and return a number associated with quest state
	.macro returnqueststate questId:req
	.byte SCR_OP_RETURNQUESTSTATE
	.byte \questId
	.endm

	.macro openquestmenu
	questmenu 0 0
	.endm

	@ Starts the specified quest.
	.macro startquest quest:req
	closemessage
	delay 30
	questmenu QUEST_MENU_SET_ACTIVE, \quest
	questmenu QUEST_MENU_BUFFER_QUEST_NAME \quest
	bufferstring 1 gText_QuestActive
	playfanfare MUS_LEVEL_UP
	msgbox gText_QuestAnnounce, MSGBOX_SIGN
	waitfanfare
	.endm

	@ Completes the specified quest.
	.macro completequest quest:req
	closemessage
	delay 30
	questmenu QUEST_MENU_COMPLETE_QUEST, \quest
	questmenu QUEST_MENU_BUFFER_QUEST_NAME \quest
	bufferstring 1 gText_QuestComplete
	playfanfare MUS_LEVEL_UP
	msgbox gText_QuestAnnounce, MSGBOX_SIGN
	waitfanfare
	.endm

	.macro goto_if_quest_inactive quest:req, dest:req
	questmenu QUEST_MENU_CHECK_INACTIVE \quest
	goto_if_eq VAR_RESULT, TRUE, \dest
	.endm

	.macro goto_if_quest_active quest:req, dest:req
	questmenu QUEST_MENU_CHECK_ACTIVE \quest
	goto_if_eq VAR_RESULT, TRUE, \dest
	.endm

	.macro goto_if_quest_reward quest:req, dest:req
	questmenu QUEST_MENU_CHECK_REWARD \quest
	goto_if_eq VAR_RESULT, TRUE, \dest
	.endm

	.macro goto_if_quest_complete quest:req, dest:req
	questmenu QUEST_MENU_CHECK_COMPLETE \quest
	goto_if_eq VAR_RESULT, TRUE, \dest
	.endm

	.macro goto_if_quest_not_inactive quest:req, dest:req
	questmenu QUEST_MENU_CHECK_INACTIVE \quest
	goto_if_eq VAR_RESULT, FALSE, \dest
	.endm

	.macro goto_if_quest_not_active quest:req, dest:req
	questmenu QUEST_MENU_CHECK_ACTIVE \quest
	goto_if_eq VAR_RESULT, FALSE, \dest
	.endm

	.macro goto_if_quest_not_reward quest:req, dest:req
	questmenu QUEST_MENU_CHECK_REWARD \quest
	goto_if_eq VAR_RESULT, FALSE, \dest
	.endm

	.macro goto_if_quest_not_complete quest:req, dest:req
	questmenu QUEST_MENU_CHECK_COMPLETE \quest
	goto_if_eq VAR_RESULT, FALSE, \dest
	.endm

	.macro call_if_quest_inactive quest:req, dest:req
	questmenu QUEST_MENU_CHECK_INACTIVE \quest
	call_if_eq VAR_RESULT, TRUE, \dest
	.endm

	.macro call_if_quest_active quest:req, dest:req
	questmenu QUEST_MENU_CHECK_ACTIVE \quest
	call_if_eq VAR_RESULT, TRUE, \dest
	.endm

	.macro call_if_quest_reward quest:req, dest:req
	questmenu QUEST_MENU_CHECK_REWARD \quest
	call_if_eq VAR_RESULT, TRUE, \dest
	.endm

	.macro call_if_quest_complete quest:req, dest:req
	questmenu QUEST_MENU_CHECK_COMPLETE \quest
	call_if_eq VAR_RESULT, TRUE, \dest
	.endm

	.macro call_if_quest_not_inactive quest:req, dest:req
	questmenu QUEST_MENU_CHECK_INACTIVE \quest
	call_if_eq VAR_RESULT, FALSE, \dest
	.endm

	.macro call_if_quest_not_active quest:req, dest:req
	questmenu QUEST_MENU_CHECK_ACTIVE \quest
	call_if_eq VAR_RESULT, FALSE, \dest
	.endm

	.macro call_if_quest_not_reward quest:req, dest:req
	questmenu QUEST_MENU_CHECK_REWARD \quest
	call_if_eq VAR_RESULT, FALSE, \dest
	.endm

	.macro call_if_quest_not_complete quest:req, dest:req
	questmenu QUEST_MENU_CHECK_COMPLETE \quest
	call_if_eq VAR_RESULT, FALSE, \dest
	.endm

	.macro completesubquest quest:req, subquest:req
	closemessage
	subquestmenu QUEST_MENU_COMPLETE_QUEST, \quest, \subquest
	.endm

	.macro goto_if_subquest_complete parent:req,child:req, dest:req
	subquestmenu QUEST_MENU_CHECK_COMPLETE \parent \child
	goto_if_eq VAR_RESULT, TRUE, \dest
	.endm

	.macro call_if_subquest_complete parent:req,child:req, dest:req
	subquestmenu QUEST_MENU_CHECK_COMPLETE \parent \child
	call_if_eq VAR_RESULT, TRUE, \dest
	.endm

	.macro goto_if_subquest_not_complete parent:req,child:req, dest:req
	subquestmenu QUEST_MENU_CHECK_COMPLETE \parent \child
	goto_if_eq VAR_RESULT, FALSE, \dest
	.endm

	.macro call_if_subquest_not_complete parent:req,child:req, dest:req
	subquestmenu QUEST_MENU_CHECK_COMPLETE \parent \child
	call_if_eq VAR_RESULT, FALSE, \dest
	.endm
