//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 210.149954 on Stable branch
// Generated with ALiVE version 1.17.0.2209061
//////////////////////////////////////////////////////////////////////////////////

class CfgFactionClasses
{
  class GVAR(Mrazota)
  {
    displayName = "[JAGER] Mrazota";
    side = 0;
    flag = "";
    icon = "";
    priority = 3;
  };
};

class CfgVehicles
{
  class EventHandlers;
  class O_soldier_Melee_fists;
  class GVAR(test) : O_soldier_Melee_fists
  {
    faction = QGVAR(Mrazota);
    scope = 2;
    scopeCurator = 2;
    displayName = "Test";
    weapons[] = {};
    respawnWeapons[] = {};
    Items[] = {};
    RespawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {};
    respawnLinkedItems[] = {};

    primaryWeaponsPool[] = {"rhs_weap_ak74", "arifle_Mk20_plain_F"};
    secondaryWeaponsPool[] = {"Bat_Clear", "Bat_Spike"};
    itemsPool[] = {};
    linkedItemsPool[] = {};
    uniformPool[] = {};

    class EventHandlers : EventHandlers
    {
      init = "_this call JAGER_factions_fnc_randomize;";
    };
  };
};
// class CfgVehicles
// {

//   class O_soldier_Melee_Hybrid;
//   class O_soldier_Melee_Hybrid_OCimport_01 : O_soldier_Melee_Hybrid
//   {
//     scope = 0;
//     class EventHandlers;
//   };
//   class O_soldier_Melee_Hybrid_OCimport_02 : O_soldier_Melee_Hybrid_OCimport_01
//   {
//     class EventHandlers;
//   };

//   class B_soldier_Melee_fists;
//   class B_soldier_Melee_fists_OCimport_01 : B_soldier_Melee_fists
//   {
//     scope = 0;
//     class EventHandlers;
//   };
//   class B_soldier_Melee_fists_OCimport_02 : B_soldier_Melee_fists_OCimport_01
//   {
//     class EventHandlers;
//   };

//   class B_soldier_Melee_RUSH;
//   class B_soldier_Melee_RUSH_OCimport_01 : B_soldier_Melee_RUSH
//   {
//     scope = 0;
//     class EventHandlers;
//   };
//   class B_soldier_Melee_RUSH_OCimport_02 : B_soldier_Melee_RUSH_OCimport_01
//   {
//     class EventHandlers;
//   };

//   class B_soldier_Melee;
//   class B_soldier_Melee_OCimport_01 : B_soldier_Melee
//   {
//     scope = 0;
//     class EventHandlers;
//   };
//   class B_soldier_Melee_OCimport_02 : B_soldier_Melee_OCimport_01
//   {
//     class EventHandlers;
//   };

//   class B_soldier_Melee_RUSH_fists;
//   class B_soldier_Melee_RUSH_fists_OCimport_01 : B_soldier_Melee_RUSH_fists
//   {
//     scope = 0;
//     class EventHandlers;
//   };
//   class B_soldier_Melee_RUSH_fists_OCimport_02 : B_soldier_Melee_RUSH_fists_OCimport_01
//   {
//     class EventHandlers;
//   };

//   class O_Soldier_F;
//   class O_Soldier_F_OCimport_01 : O_Soldier_F
//   {
//     scope = 0;
//     class EventHandlers;
//   };
//   class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01
//   {
//     class EventHandlers;
//   };

//   class O_OMovariMrazota_Hybrid_01 : O_soldier_Melee_Hybrid_OCimport_02
//   {
//     author = "DiRaven";
//     scope = 2;
//     scopeCurator = 2;
//     displayName = "Hybrid";
//     side = 0;
//     faction = "o_movarimrazota";

//     identityTypes[] = {"Head_Russian", "LanguageENG_F", "G_NATO_default"};

//     uniformClass = "U_C_E_LooterJacket_01_F";

//     linkedItems[] = {};
//     respawnlinkedItems[] = {};

//     weapons[] = {"rhs_weap_savz61", "WBK_ww1_Club"};
//     respawnWeapons[] = {"rhs_weap_savz61", "WBK_ww1_Club"};

//     magazines[] = {"rhsgref_20rnd_765x17_vz61", "rhsgref_20rnd_765x17_vz61"};
//     respawnMagazines[] = {"rhsgref_20rnd_765x17_vz61", "rhsgref_20rnd_765x17_vz61"};

//     ALiVE_orbatCreator_loadout[] = {{"rhs_weap_savz61", "", "", "", {"rhsgref_20rnd_765x17_vz61", 20}, {}, ""}, {}, {"WBK_ww1_Club", "", "", "", {}, {}, ""}, {"U_C_E_LooterJacket_01_F", {{"ACE_fieldDressing", 5}, {"rhsgref_10rnd_765x17_vz61", 3, 10}}}, {}, {}, "", "G_Balaclava_TI_blk_F", {}, {"", "", "", "", "", ""}};

//     class EventHandlers : EventHandlers
//     {
//       class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base
//       {
//       };

//       class ALiVE_orbatCreator
//       {
//         init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
//       };
//     };

//     // custom attributes (do not delete)
//     ALiVE_orbatCreator_owned = 1;
//   };

//   class O_OMovariMrazota_Grunt_Fists_01 : B_soldier_Melee_fists_OCimport_02
//   {
//     author = "DiRaven";
//     scope = 2;
//     scopeCurator = 2;
//     displayName = "Grunt Fists";
//     side = 0;
//     faction = "o_movarimrazota";

//     identityTypes[] = {"Head_Russian", "LanguageENG_F", "G_NATO_default"};

//     uniformClass = "U_I_L_Uniform_01_tshirt_skull_F";

//     linkedItems[] = {};
//     respawnlinkedItems[] = {};

//     weapons[] = {};
//     respawnWeapons[] = {};

//     magazines[] = {};
//     respawnMagazines[] = {};

//     ALiVE_orbatCreator_loadout[] = {{}, {}, {}, {"U_I_L_Uniform_01_tshirt_skull_F", {}}, {}, {}, "", "G_Balaclava_TI_blk_F", {}, {"", "", "", "", "", ""}};

//     class EventHandlers : EventHandlers
//     {
//       class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base
//       {
//       };

//       class ALiVE_orbatCreator
//       {
//         init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
//       };
//     };

//     // custom attributes (do not delete)
//     ALiVE_orbatCreator_owned = 1;
//   };

//   class O_OMovariMrazota_Rusher_01 : B_soldier_Melee_RUSH_OCimport_02
//   {
//     author = "DiRaven";
//     scope = 2;
//     scopeCurator = 2;
//     displayName = "Rusher";
//     side = 0;
//     faction = "o_movarimrazota";

//     identityTypes[] = {"Head_Russian", "LanguageENG_F", "G_NATO_default"};

//     uniformClass = "U_I_L_Uniform_01_tshirt_olive_F";

//     linkedItems[] = {};
//     respawnlinkedItems[] = {};

//     weapons[] = {"Pipe_aluminium"};
//     respawnWeapons[] = {"Pipe_aluminium"};

//     magazines[] = {};
//     respawnMagazines[] = {};

//     ALiVE_orbatCreator_loadout[] = {{}, {}, {"Pipe_aluminium", "", "", "", {}, {}, ""}, {"U_I_L_Uniform_01_tshirt_olive_F", {}}, {}, {}, "", "G_Balaclava_TI_blk_F", {}, {"", "", "", "", "", ""}};

//     class EventHandlers : EventHandlers
//     {
//       class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base
//       {
//       };

//       class ALiVE_orbatCreator
//       {
//         init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
//       };
//     };

//     // custom attributes (do not delete)
//     ALiVE_orbatCreator_owned = 1;
//   };

//   class O_OMovariMrazota_Grunt_01 : B_soldier_Melee_OCimport_02
//   {
//     author = "DiRaven";
//     scope = 2;
//     scopeCurator = 2;
//     displayName = "Grunt";
//     side = 0;
//     faction = "o_movarimrazota";

//     identityTypes[] = {"Head_Russian", "LanguageENG_F", "G_NATO_default"};

//     uniformClass = "U_I_L_Uniform_01_tshirt_skull_F";

//     linkedItems[] = {};
//     respawnlinkedItems[] = {};

//     weapons[] = {"Pipe_aluminium"};
//     respawnWeapons[] = {"Pipe_aluminium"};

//     magazines[] = {};
//     respawnMagazines[] = {};

//     ALiVE_orbatCreator_loadout[] = {{}, {}, {"Pipe_aluminium", "", "", "", {}, {}, ""}, {"U_I_L_Uniform_01_tshirt_skull_F", {}}, {}, {}, "", "G_Balaclava_TI_blk_F", {}, {"", "", "", "", "", ""}};

//     class EventHandlers : EventHandlers
//     {
//       class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base
//       {
//       };

//       class ALiVE_orbatCreator
//       {
//         init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
//       };
//     };

//     // custom attributes (do not delete)
//     ALiVE_orbatCreator_owned = 1;
//   };

//   class O_OMovariMrazota_Rusher_Fists_01 : B_soldier_Melee_RUSH_fists_OCimport_02
//   {
//     author = "DiRaven";
//     scope = 2;
//     scopeCurator = 2;
//     displayName = "Rusher Fists";
//     side = 0;
//     faction = "o_movarimrazota";

//     identityTypes[] = {"Head_Russian", "LanguageENG_F", "G_NATO_default"};

//     uniformClass = "U_I_L_Uniform_01_tshirt_olive_F";

//     linkedItems[] = {};
//     respawnlinkedItems[] = {};

//     weapons[] = {};
//     respawnWeapons[] = {};

//     magazines[] = {};
//     respawnMagazines[] = {};

//     ALiVE_orbatCreator_loadout[] = {{}, {}, {}, {"U_I_L_Uniform_01_tshirt_olive_F", {}}, {}, {}, "", "G_Balaclava_TI_blk_F", {}, {"", "", "", "", "", ""}};

//     class EventHandlers : EventHandlers
//     {
//       class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base
//       {
//       };

//       class ALiVE_orbatCreator
//       {
//         init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
//       };
//     };

//     // custom attributes (do not delete)
//     ALiVE_orbatCreator_owned = 1;
//   };

//   class O_OMovariMrazota_Shooter_Handgun_01 : O_Soldier_F_OCimport_02
//   {
//     author = "DiRaven";
//     scope = 2;
//     scopeCurator = 2;
//     displayName = "Shooter Handgun";
//     side = 0;
//     faction = "o_movarimrazota";

//     identityTypes[] = {"Head_Russian", "LanguagePER_F", "G_IRAN_default"};

//     uniformClass = "U_C_E_LooterJacket_01_F";

//     linkedItems[] = {};
//     respawnlinkedItems[] = {};

//     weapons[] = {"rhs_weap_makarov_pm"};
//     respawnWeapons[] = {"rhs_weap_makarov_pm"};

//     magazines[] = {"rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S"};
//     respawnMagazines[] = {"rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S"};

//     ALiVE_orbatCreator_loadout[] = {{}, {}, {"rhs_weap_makarov_pm", "", "", "", {"rhs_mag_9x18_8_57N181S", 8}, {}, ""}, {"U_C_E_LooterJacket_01_F", {{"ACE_fieldDressing", 5}, {"rhs_mag_9x18_8_57N181S", 3, 8}}}, {}, {}, "", "G_Balaclava_TI_blk_F", {}, {"", "", "", "", "", ""}};

//     class EventHandlers : EventHandlers
//     {
//       class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base
//       {
//       };

//       class ALiVE_orbatCreator
//       {
//         init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
//       };
//     };

//     // custom attributes (do not delete)
//     ALiVE_orbatCreator_owned = 1;
//   };
// };