#pragma once
#include "..\\PrayEngine_SOURCE\\prResources.h"
#include "..\\PrayEngine_SOURCE\\prTexture.h"

namespace pr
{
	void LoadResources()
	{

		// HUD
		Resources::Load<graphics::Texture>(L"ActionWindow", L"..\\Resources\\HUD\\action_window.bmp");
		Resources::Load<graphics::Texture>(L"ActionWindowBack", L"..\\Resources\\HUD\\action_window_back.bmp");
		Resources::Load<graphics::Texture>(L"BaseLeft", L"..\\Resources\\HUD\\base_left.bmp");
		Resources::Load<graphics::Texture>(L"BaseRight", L"..\\Resources\\HUD\\base_right.bmp");
		Resources::Load<graphics::Texture>(L"BattleClose", L"..\\Resources\\HUD\\battle_close.bmp");
		Resources::Load<graphics::Texture>(L"BattleItemWindow", L"..\\Resources\\HUD\\battle_item_window.bmp");
		Resources::Load<graphics::Texture>(L"BattleItemWindowBack", L"..\\Resources\\HUD\\battle_item_window_back.bmp");
		Resources::Load<graphics::Texture>(L"BattleWindow", L"..\\Resources\\HUD\\battle_window.bmp");
		Resources::Load<graphics::Texture>(L"BlueBar", L"..\\Resources\\HUD\\blue_bar.bmp");
		Resources::Load<graphics::Texture>(L"Button", L"..\\Resources\\HUD\\button.bmp");
		Resources::Load<graphics::Texture>(L"Capture", L"..\\Resources\\HUD\\capture.png");
		Resources::Load<graphics::Texture>(L"CharacterCreate", L"..\\Resources\\HUD\\character_create.bmp");
		Resources::Load<graphics::Texture>(L"CharacterInput", L"..\\Resources\\HUD\\character_input.bmp");
		Resources::Load<graphics::Texture>(L"CharacterSelect", L"..\\Resources\\HUD\\character_select.bmp");
		Resources::Load<graphics::Texture>(L"Escape", L"..\\Resources\\HUD\\escape.bmp");
		Resources::Load<graphics::Texture>(L"Fail", L"..\\Resources\\HUD\\fail.png");
		Resources::Load<graphics::Texture>(L"FireBar", L"..\\Resources\\HUD\\fire_bar.bmp");
		Resources::Load<graphics::Texture>(L"Get", L"..\\Resources\\HUD\\get.png");
		Resources::Load<graphics::Texture>(L"Guard", L"..\\Resources\\HUD\\guard.bmp");
		Resources::Load<graphics::Texture>(L"Input0", L"..\\Resources\\HUD\\input_0.bmp");
		Resources::Load<graphics::Texture>(L"Input1", L"..\\Resources\\HUD\\input_1.bmp");
		Resources::Load<graphics::Texture>(L"Input2", L"..\\Resources\\HUD\\input_2.bmp");
		Resources::Load<graphics::Texture>(L"InputWindowBack", L"..\\Resources\\HUD\\input_window_back.bmp");
		Resources::Load<graphics::Texture>(L"ItemWindow", L"..\\Resources\\HUD\\item_window.bmp");
		Resources::Load<graphics::Texture>(L"ItemWindowBack", L"..\\Resources\\HUD\\item_window_back.bmp");
		Resources::Load<graphics::Texture>(L"LandBar", L"..\\Resources\\HUD\\land_bar.bmp");
		Resources::Load<graphics::Texture>(L"LeftButton", L"..\\Resources\\HUD\\leftbutton.bmp");
		Resources::Load<graphics::Texture>(L"Main", L"..\\Resources\\HUD\\main.bmp");
		Resources::Load<graphics::Texture>(L"MainMenu", L"..\\Resources\\HUD\\main_menu.bmp");
		Resources::Load<graphics::Texture>(L"MainMenuBack", L"..\\Resources\\HUD\\main_menuBack.bmp");
		Resources::Load<graphics::Texture>(L"MenuBar", L"..\\Resources\\HUD\\menu_bar.bmp");
		Resources::Load<graphics::Texture>(L"Miss", L"..\\Resources\\HUD\\miss.bmp");
		Resources::Load<graphics::Texture>(L"Number", L"..\\Resources\\HUD\\number.bmp");
		Resources::Load<graphics::Texture>(L"PetInfoWindow", L"..\\Resources\\HUD\\pet_info_window.bmp");
		Resources::Load<graphics::Texture>(L"PetInfoWindowBack", L"..\\Resources\\HUD\\pet_info_window_back.bmp");
		Resources::Load<graphics::Texture>(L"PetLeave", L"..\\Resources\\HUD\\pet_leave.bmp");
		Resources::Load<graphics::Texture>(L"PetSkillWindow", L"..\\Resources\\HUD\\pet_skill_window.bmp");
		Resources::Load<graphics::Texture>(L"PetSkillWindow2", L"..\\Resources\\HUD\\pet_skill_window2.bmp");
		Resources::Load<graphics::Texture>(L"PetSkillWindowBack", L"..\\Resources\\HUD\\pet_skill_window_back.bmp");
		Resources::Load<graphics::Texture>(L"PetWindow", L"..\\Resources\\HUD\\pet_window.bmp");
		Resources::Load<graphics::Texture>(L"PetWindowBack", L"..\\Resources\\HUD\\pet_window_back.bmp");
		Resources::Load<graphics::Texture>(L"PlayerAttribute", L"..\\Resources\\HUD\\player_attribute.bmp");
		Resources::Load<graphics::Texture>(L"PlayerFaceSetting", L"..\\Resources\\HUD\\player_face_setting.bmp");
		Resources::Load<graphics::Texture>(L"PlayerFace", L"..\\Resources\\HUD\\player_face.bmp");
		Resources::Load<graphics::Texture>(L"Return", L"..\\Resources\\HUD\\return.bmp");
		Resources::Load<graphics::Texture>(L"RightButton", L"..\\Resources\\HUD\\rightbutton.bmp");
		Resources::Load<graphics::Texture>(L"SaveInput", L"..\\Resources\\HUD\\saveinput.bmp");
		Resources::Load<graphics::Texture>(L"SelectSkillWindow", L"..\\Resources\\HUD\\select_skill_window.bmp");
		Resources::Load<graphics::Texture>(L"ShopWindow", L"..\\Resources\\HUD\\shop_window.bmp");
		Resources::Load<graphics::Texture>(L"ShopWindowBack", L"..\\Resources\\HUD\\shop_window_back.bmp");
		Resources::Load<graphics::Texture>(L"StateWindow", L"..\\Resources\\HUD\\statewindow.bmp");
		Resources::Load<graphics::Texture>(L"StateWindowBack", L"..\\Resources\\HUD\\state_window_back.bmp");
		Resources::Load<graphics::Texture>(L"ToolBar", L"..\\Resources\\HUD\\tool_bar.bmp");
		Resources::Load<graphics::Texture>(L"ToolSelect", L"..\\Resources\\HUD\\tool_select.bmp");
		Resources::Load<graphics::Texture>(L"ToolType", L"..\\Resources\\HUD\\tooltype.bmp");
		Resources::Load<graphics::Texture>(L"UnderBar", L"..\\Resources\\HUD\\under_bar.bmp");
		Resources::Load<graphics::Texture>(L"UnderBar2", L"..\\Resources\\HUD\\under_bar2.bmp");
		Resources::Load<graphics::Texture>(L"WindBar", L"..\\Resources\\HUD\\wind_bar.bmp");



		// Maptool

		Resources::Load<graphics::Texture>(L"BattleMap1", L"..\\Resources\\maptool\\battlemap1.bmp");
		Resources::Load<graphics::Texture>(L"Display", L"..\\Resources\\maptool\\display.bmp");
		Resources::Load<graphics::Texture>(L"Fence", L"..\\Resources\\maptool\\fence.bmp");
		Resources::Load<graphics::Texture>(L"Gate", L"..\\Resources\\maptool\\gate.bmp");
		Resources::Load<graphics::Texture>(L"Npc", L"..\\Resources\\maptool\\npc.bmp");
		Resources::Load<graphics::Texture>(L"Object", L"..\\Resources\\maptool\\object.bmp");
		Resources::Load<graphics::Texture>(L"Plants", L"..\\Resources\\maptool\\plants.bmp");
		Resources::Load<graphics::Texture>(L"Rock", L"..\\Resources\\maptool\\rock.bmp");
		Resources::Load<graphics::Texture>(L"Structure", L"..\\Resources\\maptool\\structure.bmp");
		Resources::Load<graphics::Texture>(L"Tile", L"..\\Resources\\maptool\\tile.bmp");
		Resources::Load<graphics::Texture>(L"TileType", L"..\\Resources\\maptool\\tiletype.bmp");
		Resources::Load<graphics::Texture>(L"WallBasic", L"..\\Resources\\maptool\\wallbasic.bmp");
		Resources::Load<graphics::Texture>(L"WallDungeon", L"..\\Resources\\maptool\\wall_dungeon.bmp");
		Resources::Load<graphics::Texture>(L"WallDungeon1", L"..\\Resources\\maptool\\wall_dungeon1.bmp");


		// Pet
		// Duri
		Resources::Load<graphics::Texture>(L"DuriAttack", L"..\\Resources\\pet\\duriType\\duri\\duri_attack.bmp");
		Resources::Load<graphics::Texture>(L"DuriDead", L"..\\Resources\\pet\\duriType\\duri\\duri_dead.bmp");
		Resources::Load<graphics::Texture>(L"DuriDefense", L"..\\Resources\\pet\\duriType\\duri\\duri_defense.bmp");
		Resources::Load<graphics::Texture>(L"DuriHurt", L"..\\Resources\\pet\\duriType\\duri\\duri_hurt.bmp");
		Resources::Load<graphics::Texture>(L"DuriRun", L"..\\Resources\\pet\\duriType\\duri\\duri_run.bmp");
		Resources::Load<graphics::Texture>(L"DuriStand", L"..\\Resources\\pet\\duriType\\duri\\duri_stand.bmp");

		// SpottedUri
		Resources::Load<graphics::Texture>(L"SpottedUriAttack", L"..\\Resources\\pet\\duriType\\spottedUri\\spottedUri_attack.bmp");
		Resources::Load<graphics::Texture>(L"SpottedUriDead", L"..\\Resources\\pet\\duriType\\spottedUri\\spottedUri_dead.bmp");
		Resources::Load<graphics::Texture>(L"SpottedUriDefense", L"..\\Resources\\pet\\duriType\\spottedUri\\spottedUri_defense.bmp");
		Resources::Load<graphics::Texture>(L"SpottedUriHurt", L"..\\Resources\\pet\\duriType\\spottedUri\\spottedUri_hurt.bmp");
		Resources::Load<graphics::Texture>(L"SpottedUriRun", L"..\\Resources\\pet\\duriType\\spottedUri\\spottedUri_run.bmp");
		Resources::Load<graphics::Texture>(L"SpottedUriStand", L"..\\Resources\\pet\\duriType\\spottedUri\\spottedUri_stand.bmp");

		// Uri
		Resources::Load<graphics::Texture>(L"UriAttack", L"..\\Resources\\pet\\duriType\\uri\\uri_attack.bmp");
		Resources::Load<graphics::Texture>(L"UriDead", L"..\\Resources\\pet\\duriType\\uri\\uri_dead.bmp");
		Resources::Load<graphics::Texture>(L"UriDefense", L"..\\Resources\\pet\\duriType\\uri\\uri_defense.bmp");
		Resources::Load<graphics::Texture>(L"UriHurt", L"..\\Resources\\pet\\duriType\\uri\\uri_hurt.bmp");
		Resources::Load<graphics::Texture>(L"UriRun", L"..\\Resources\\pet\\duriType\\uri\\uri_run.bmp");
		Resources::Load<graphics::Texture>(L"UriStand", L"..\\Resources\\pet\\duriType\\uri\\uri_stand.bmp");

		// Mammonas
		Resources::Load<graphics::Texture>(L"MammonasAttack", L"..\\Resources\\pet\\mammoType\\mammonas\\mammonas_attack.bmp");
		Resources::Load<graphics::Texture>(L"MammonasDead", L"..\\Resources\\pet\\mammoType\\mammonas\\mammonas_dead.bmp");
		Resources::Load<graphics::Texture>(L"MammonasDefense", L"..\\Resources\\pet\\mammoType\\mammonas\\mammonas_defense.bmp");
		Resources::Load<graphics::Texture>(L"MammonasHurt", L"..\\Resources\\pet\\mammoType\\mammonas\\mammonas_hurt.bmp");
		Resources::Load<graphics::Texture>(L"MammonasRun", L"..\\Resources\\pet\\mammoType\\mammonas\\mammonas_run.bmp");
		Resources::Load<graphics::Texture>(L"MammonasStand", L"..\\Resources\\pet\\mammoType\\mammonas\\mammonas_stand.bmp");

		// Mammo
		Resources::Load<graphics::Texture>(L"MammoAttack", L"..\\Resources\\pet\\mammoType\\mammo\\mammo_attack.bmp");
		Resources::Load<graphics::Texture>(L"MammoDead", L"..\\Resources\\pet\\mammoType\\mammo\\mammo_dead.bmp");
		Resources::Load<graphics::Texture>(L"MammoDefense", L"..\\Resources\\pet\\mammoType\\mammo\\mammo_defense.bmp");
		Resources::Load<graphics::Texture>(L"MammoHurt", L"..\\Resources\\pet\\mammoType\\mammo\\mammo_hurt.bmp");
		Resources::Load<graphics::Texture>(L"MammoRun", L"..\\Resources\\pet\\mammoType\\mammo\\mammo_run.bmp");
		Resources::Load<graphics::Texture>(L"MammoStand", L"..\\Resources\\pet\\mammoType\\mammo\\mammo_stand.bmp");

		// Mammon
		Resources::Load<graphics::Texture>(L"MammonAttack", L"..\\Resources\\pet\\mammoType\\mammon\\mammon_attack.bmp");
		Resources::Load<graphics::Texture>(L"MammonDead", L"..\\Resources\\pet\\mammoType\\mammon\\mammon_dead.bmp");
		Resources::Load<graphics::Texture>(L"MammonDefense", L"..\\Resources\\pet\\mammoType\\mammon\\mammon_defense.bmp");
		Resources::Load<graphics::Texture>(L"MammonHurt", L"..\\Resources\\pet\\mammoType\\mammon\\mammon_hurt.bmp");
		Resources::Load<graphics::Texture>(L"MammonRun", L"..\\Resources\\pet\\mammoType\\mammon\\mammon_run.bmp");
		Resources::Load<graphics::Texture>(L"MammonStand", L"..\\Resources\\pet\\mammoType\\mammon\\mammon_stand.bmp");

		// Golros
		Resources::Load<graphics::Texture>(L"GolrosAttack", L"..\\Resources\\pet\\ogarosType\\golros\\golros_attack.bmp");
		Resources::Load<graphics::Texture>(L"GolrosDead", L"..\\Resources\\pet\\ogarosType\\golros\\golros_dead.bmp");
		Resources::Load<graphics::Texture>(L"GolrosDefense", L"..\\Resources\\pet\\ogarosType\\golros\\golros_defense.bmp");
		Resources::Load<graphics::Texture>(L"GolrosHurt", L"..\\Resources\\pet\\ogarosType\\golros\\golros_hurt.bmp");
		Resources::Load<graphics::Texture>(L"GolrosRun", L"..\\Resources\\pet\\ogarosType\\golros\\golros_run.bmp");
		Resources::Load<graphics::Texture>(L"GolrosStand", L"..\\Resources\\pet\\ogarosType\\golros\\golros_stand.bmp");

		// Mogaros
		Resources::Load<graphics::Texture>(L"MogarosAttack", L"..\\Resources\\pet\\ogarosType\\mogaros\\mogaros_attack.bmp");
		Resources::Load<graphics::Texture>(L"MogarosDead", L"..\\Resources\\pet\\ogarosType\\mogaros\\mogaros_dead.bmp");
		Resources::Load<graphics::Texture>(L"MogarosDefense", L"..\\Resources\\pet\\ogarosType\\mogaros\\mogaros_defense.bmp");
		Resources::Load<graphics::Texture>(L"MogarosHurt", L"..\\Resources\\pet\\ogarosType\\mogaros\\mogaros_hurt.bmp");
		Resources::Load<graphics::Texture>(L"MogarosRun", L"..\\Resources\\pet\\ogarosType\\mogaros\\mogaros_run.bmp");
		Resources::Load<graphics::Texture>(L"MogarosStand", L"..\\Resources\\pet\\ogarosType\\mogaros\\mogaros_stand.bmp");

		// Ogaros
		Resources::Load<graphics::Texture>(L"OgarosAttack", L"..\\Resources\\pet\\ogarosType\\ogaros\\ogaros_attack.bmp");
		Resources::Load<graphics::Texture>(L"OgarosDead", L"..\\Resources\\pet\\ogarosType\\ogaros\\ogaros_dead.bmp");
		Resources::Load<graphics::Texture>(L"OgarosDefense", L"..\\Resources\\pet\\ogarosType\\ogaros\\ogaros_defense.bmp");
		Resources::Load<graphics::Texture>(L"OgarosHurt", L"..\\Resources\\pet\\ogarosType\\ogaros\\ogaros_hurt.bmp");
		Resources::Load<graphics::Texture>(L"OgarosRun", L"..\\Resources\\pet\\ogarosType\\ogaros\\ogaros_run.bmp");
		Resources::Load<graphics::Texture>(L"OgarosStand", L"..\\Resources\\pet\\ogarosType\\ogaros\\ogaros_stand.bmp");




		//Player
		// Blue Basic
		Resources::Load<graphics::Texture>(L"BlueAngryBasic", L"..\\Resources\\player\\blue\\basic\\angry_basic.bmp");
		Resources::Load<graphics::Texture>(L"BlueAttackBasic", L"..\\Resources\\player\\blue\\basic\\attack_basic.bmp");
		Resources::Load<graphics::Texture>(L"BlueCryBasic", L"..\\Resources\\player\\blue\\basic\\cry_basic.bmp");
		Resources::Load<graphics::Texture>(L"BlueDeadBasic", L"..\\Resources\\player\\blue\\basic\\dead_basic.bmp");
		Resources::Load<graphics::Texture>(L"BlueDefenseBasic", L"..\\Resources\\player\\blue\\basic\\defense_basic.bmp");
		Resources::Load<graphics::Texture>(L"BlueHappyBasic", L"..\\Resources\\player\\blue\\basic\\happy_basic.bmp");
		Resources::Load<graphics::Texture>(L"BlueHelloBasic", L"..\\Resources\\player\\blue\\basic\\hello_basic.bmp");
		Resources::Load<graphics::Texture>(L"BlueHurtBasic", L"..\\Resources\\player\\blue\\basic\\hurt_basic.bmp");
		Resources::Load<graphics::Texture>(L"BlueRunBasic", L"..\\Resources\\player\\blue\\basic\\run_basic.bmp");
		Resources::Load<graphics::Texture>(L"BlueSeatBasic", L"..\\Resources\\player\\blue\\basic\\seat_basic.bmp");
		Resources::Load<graphics::Texture>(L"BlueStandBasic", L"..\\Resources\\player\\blue\\basic\\stand_basic.bmp");



		// Red Basic
		Resources::Load<graphics::Texture>(L"RedAngryBasic", L"..\\Resources\\player\\red\\basic\\angry_basic.bmp");
		Resources::Load<graphics::Texture>(L"RedAttackBasic", L"..\\Resources\\player\\red\\basic\\attack_basic.bmp");
		Resources::Load<graphics::Texture>(L"RedCryBasic", L"..\\Resources\\player\\red\\basic\\cry_basic.bmp");
		Resources::Load<graphics::Texture>(L"RedDeadBasic", L"..\\Resources\\player\\red\\basic\\dead_basic.bmp");
		Resources::Load<graphics::Texture>(L"RedDefenseBasic", L"..\\Resources\\player\\red\\basic\\defense_basic.bmp");
		Resources::Load<graphics::Texture>(L"RedHappyBasic", L"..\\Resources\\player\\red\\basic\\happy_basic.bmp");
		Resources::Load<graphics::Texture>(L"RedHelloBasic", L"..\\Resources\\player\\red\\basic\\hello_basic.bmp");
		Resources::Load<graphics::Texture>(L"RedHurtBasic", L"..\\Resources\\player\\red\\basic\\hurt_basic.bmp");
		Resources::Load<graphics::Texture>(L"RedRunBasic", L"..\\Resources\\player\\red\\basic\\run_basic.bmp");
		Resources::Load<graphics::Texture>(L"RedSeatBasic", L"..\\Resources\\player\\red\\basic\\seat_basic.bmp");
		Resources::Load<graphics::Texture>(L"RedStandBasic", L"..\\Resources\\player\\red\\basic\\stand_basic.bmp");

		// Player Pictures
		Resources::Load<graphics::Texture>(L"PlayerMan1", L"..\\Resources\\playerpicture\\man1.bmp");
		Resources::Load<graphics::Texture>(L"PlayerMan2", L"..\\Resources\\playerpicture\\man2.bmp");
		Resources::Load<graphics::Texture>(L"PlayerMan3", L"..\\Resources\\playerpicture\\man3.bmp");
		Resources::Load<graphics::Texture>(L"PlayerMan4", L"..\\Resources\\playerpicture\\man4.bmp");
		Resources::Load<graphics::Texture>(L"PlayerMan5", L"..\\Resources\\playerpicture\\man5.bmp");
		Resources::Load<graphics::Texture>(L"PlayerMan6", L"..\\Resources\\playerpicture\\man6.bmp");
		Resources::Load<graphics::Texture>(L"PlayerWoman1", L"..\\Resources\\playerpicture\\woman1.bmp");
		Resources::Load<graphics::Texture>(L"PlayerWoman2", L"..\\Resources\\playerpicture\\woman2.bmp");
		Resources::Load<graphics::Texture>(L"PlayerWoman3", L"..\\Resources\\playerpicture\\woman3.bmp");
		Resources::Load<graphics::Texture>(L"PlayerWoman4", L"..\\Resources\\playerpicture\\woman4.bmp");
		Resources::Load<graphics::Texture>(L"PlayerWoman5", L"..\\Resources\\playerpicture\\woman5.bmp");
		Resources::Load<graphics::Texture>(L"PlayerWoman6", L"..\\Resources\\playerpicture\\woman6.bmp");


		//Item
		// Items
		Resources::Load<graphics::Texture>(L"Item", L"..\\Resources\\item\\item.bmp");
		Resources::Load<graphics::Texture>(L"ItemBook", L"..\\Resources\\item\\item_book.bmp");
		Resources::Load<graphics::Texture>(L"ItemBottle", L"..\\Resources\\item\\item_bottle.bmp");
		Resources::Load<graphics::Texture>(L"ItemLotto", L"..\\Resources\\item\\item_lotto.bmp");


		//Resources::Load<graphics::Texture>(L"TitleBG", L"C:\\Users\\User\\Desktop\\WinApi\\PrayEngine\\Resources\\main.bmp");
		//Resources::Load<graphics::Texture>(L"TitleBG", L"C:\\Users\\User\\Desktop\\WinApi\\PrayEngine\\Resources\\main.bmp");
	}
}			

