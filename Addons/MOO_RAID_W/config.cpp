#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CfgPatches
{
    class MOO_RAID_W 
    {
         units[] = {};
         weapons[] = {};
         requiredVersion = 0.1;
         requiredAddons[] = {a3_characters_F, a3_characters_f_beta, a3_characters_f_gamma};
    };
};

class cfgFactionClasses
{
    class MOO_RAID_W //Faction Calling Name
    {
         displayName = "MOO Raiders (W)"; //Faction name in-game
         icon = "\MOO_RAID_W\UI\MOO_Logo_256.paa"; //Path to texture next to the faction name in editor "PBOname\filename.paa"
         priority = 2; //How far down it is on the menu
         side = 1; // 0 Opfor, 1 Blufor, 2 Independent
         scope = 2;
         scopeCurator = 2;
    };
};



class CfgVehicleClasses
{
    class MOO_Men //Name of unit group e.g Air, Infantry, Armour
    {
         displayName = "Men"; //In-game name
         priority = 1; // How far down it is on the menu
    };
	
};
 
 
class CfgVehicles
{
    class MOO_Core_W_Base;
    class MOO_RAID_W_PM: MOO_Core_W_Base       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam - MOO";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_RAID_W"; //Your Faction
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Pointman";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U";                          // This links this soldier to a particular uniform. For the details, see below.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Men"; //Unit Group
        backpack = "MOO_RAID_W_PM_Bag";        // Which backpack the character is wearing.
        weapons[] = {hlc_rifle_ACR68_SBR_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, ACE_MX2A, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hlc_rifle_ACR68_SBR_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, ACE_MX2A, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};         // Which items the character respawns with.
        magazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};               // What ammunition the character has.
        respawnMagazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};        // What ammunition the character respawns with.
        linkedItems[] = {milgp_v_marciras_assaulter_belt_cb, milgp_h_opscore_04_goggles_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {milgp_v_marciras_assaulter_belt_cb, milgp_h_opscore_04_goggles_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_Core_W_Base_SS;
	class MOO_RAID_W_LG: MOO_Core_W_Base_SS      // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam - MOO";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_RAID_W"; //Your Faction
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Light Gunner";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U_SS";                          // This links this soldier to a particular uniform. For the details, see below.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconManMG";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Men"; //Unit Group
        backpack = "MOO_RAID_W_LG_Bag";        // Which backpack the character is wearing.
        weapons[] = {LMG_03_F_rd_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {LMG_03_F_rd, hlc_pistol_P226R_Elite_pointer, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};         // Which items the character respawns with.
        magazines[] = {mag_5(200Rnd_556x45_Box_Tracer_Red_F), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};               // What ammunition the character has.
        respawnMagazines[] = {mag_5(200Rnd_556x45_Box_Tracer_Red_F), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};        // What ammunition the character respawns with.
        linkedItems[] = {milgp_v_marciras_hgunner_belt_cb, milgp_h_opscore_01_goggles_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {milgp_v_marciras_hgunner_belt_cb, milgp_h_opscore_01_goggles_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_RAID_W_SG: MOO_Core_W_Base_SS      // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam - MOO";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_RAID_W"; //Your Faction
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Support Gunner";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U_SS";                          // This links this soldier to a particular uniform. For the details, see below.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconManMG";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Men"; //Unit Group
        backpack = "MOO_RAID_W_SG_Bag";        // Which backpack the character is wearing.
        weapons[] = {hlc_lmg_mk48mod1_rd_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hlc_lmg_mk48mod1_rd_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};         // Which items the character respawns with.
        magazines[] = {mag_3(hlc_100Rnd_762x51_Barrier_M60E4), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};               // What ammunition the character has.
        respawnMagazines[] = {mag_3(hlc_100Rnd_762x51_Barrier_M60E4), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};        // What ammunition the character respawns with.
        linkedItems[] = {milgp_v_marciras_hgunner_belt_cb, milgp_h_opscore_01_goggles_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {milgp_v_marciras_hgunner_belt_cb, milgp_h_opscore_01_goggles_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_RAID_W_HG: MOO_Core_W_Base      // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam - MOO";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_RAID_W"; //Your Faction
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Heavy Gunner";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U";                          // This links this soldier to a particular uniform. For the details, see below.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconManMG";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Men"; //Unit Group
        backpack = "MOO_RAID_W_HG_Bag";        // Which backpack the character is wearing.
        weapons[] = {MMG_02_black_F_rd_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {MMG_02_black_F_rd_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};         // Which items the character respawns with.
        magazines[] = {mag_3(130Rnd_338_Mag), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};               // What ammunition the character has.
        respawnMagazines[] = {mag_3(130Rnd_338_Mag), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};        // What ammunition the character respawns with.
        linkedItems[] = {milgp_v_marciras_hgunner_belt_cb, milgp_h_opscore_01_goggles_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {milgp_v_marciras_hgunner_belt_cb, milgp_h_opscore_01_goggles_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_RAID_W_AHG: MOO_Core_W_Base       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam - MOO";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_RAID_W"; //Your Faction
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Asst. Heavy Gunner";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U";                          // This links this soldier to a particular uniform. For the details, see below.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Men"; //Unit Group
        backpack = "MOO_RAID_W_HG_Bag";        // Which backpack the character is wearing.
        weapons[] = {hlc_rifle_ACR68_Carb_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hlc_rifle_ACR68_Carb_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};         // Which items the character respawns with.
        magazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};               // What ammunition the character has.
        respawnMagazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};        // What ammunition the character respawns with.
        linkedItems[] = {milgp_v_marciras_assaulter_cb, milgp_h_opscore_05_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {milgp_v_marciras_assaulter_cb, milgp_h_opscore_05_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_RAID_W_AB: MOO_Core_W_Base       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam - MOO";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_RAID_W"; //Your Faction
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Ammo Bearer";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U";                          // This links this soldier to a particular uniform. For the details, see below.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Men"; //Unit Group
        backpack = "MOO_RAID_W_AB_Bag";        // Which backpack the character is wearing.
        weapons[] = {hlc_rifle_ACR68_Carb_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hlc_rifle_ACR68_Carb_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};         // Which items the character respawns with.
        magazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};               // What ammunition the character has.
        respawnMagazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};        // What ammunition the character respawns with.
        linkedItems[] = {milgp_v_marciras_assaulter_cb, milgp_h_opscore_05_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {milgp_v_marciras_assaulter_cb, milgp_h_opscore_05_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_RAID_W_CM: MOO_Core_W_Base       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam - MOO";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_RAID_W"; //Your Faction
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Combat Medic";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U";                          // This links this soldier to a particular uniform. For the details, see below.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManMedic";               // If a character has a special role, a special icon shall be used.
        picture = "pictureHeal";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Men"; //Unit Group
        backpack = "MOO_RAID_W_CM_Bag";        // Which backpack the character is wearing.
        weapons[] = {hlc_rifle_ACR68_SBR_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hlc_rifle_ACR68_SBR_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};         // Which items the character respawns with.
        magazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_3(SmokeShellGreen)};               // What ammunition the character has.
        respawnMagazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_3(SmokeShellGreen)};        // What ammunition the character respawns with.
        linkedItems[] = {milgp_v_marciras_medic_belt_cb, milgp_h_opscore_05_goggles_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {milgp_v_marciras_medic_belt_cb, milgp_h_opscore_05_goggles_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_RAID_W_CT: MOO_Core_W_Base       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam - MOO";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_RAID_W"; //Your Faction
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Contractor";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U";                          // This links this soldier to a particular uniform. For the details, see below.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {hlc_rifle_ACR68_Carb_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hlc_rifle_ACR68_Carb_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};         // Which items the character respawns with.
        magazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};               // What ammunition the character has.
        respawnMagazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};        // What ammunition the character respawns with.
        linkedItems[] = {milgp_v_marciras_assaulter_cb, milgp_h_opscore_02_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {milgp_v_marciras_assaulter_cb, milgp_h_opscore_02_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_RAID_W_CAT: MOO_Core_W_Base       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam - MOO";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_RAID_W"; //Your Faction
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Contractor (AT)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U";                          // This links this soldier to a particular uniform. For the details, see below.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconManAT";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {hlc_rifle_ACR68_Carb_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, launch_NLAW_F, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hlc_rifle_ACR68_Carb_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, launch_NLAW_F, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};         // Which items the character respawns with.
        magazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};               // What ammunition the character has.
        respawnMagazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};        // What ammunition the character respawns with.
        linkedItems[] = {milgp_v_marciras_assaulter_cb, milgp_h_opscore_02_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {milgp_v_marciras_assaulter_cb, milgp_h_opscore_02_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};        // Which items the character respawns with.
    };
	
	
	class MOO_RAID_W_MM: MOO_Core_W_Base_SS       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam - MOO";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_RAID_W"; //Your Faction
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Marksman";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U_SS";                          // This links this soldier to a particular uniform. For the details, see below.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {hlc_rifle_ACR68_full_black_mrco_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hlc_rifle_ACR68_full_black_mrco_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};         // Which items the character respawns with.
        magazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};               // What ammunition the character has.
        respawnMagazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};        // What ammunition the character respawns with.
        linkedItems[] = {milgp_v_marciras_marksman_cb, milgp_h_opscore_06_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {milgp_v_marciras_marksman_cb, milgp_h_opscore_06_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_RAID_W_SP: MOO_Core_W_Base       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam - MOO";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_RAID_W"; //Your Faction
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Sapper";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U";                          // This links this soldier to a particular uniform. For the details, see below.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Men"; //Unit Group
        backpack = "MOO_RAID_W_SP_Bag";        // Which backpack the character is wearing.
        weapons[] = {hlc_rifle_ACR68_SBR_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hlc_rifle_ACR68_SBR_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};         // Which items the character respawns with.
        magazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};               // What ammunition the character has.
        respawnMagazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};        // What ammunition the character respawns with.
        linkedItems[] = {milgp_v_marciras_assaulter_belt_cb, milgp_h_opscore_02_goggles_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {milgp_v_marciras_assaulter_belt_cb, milgp_h_opscore_02_goggles_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_rf7800str, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_RAID_W_FAC: MOO_Core_W_Base       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam - MOO";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_RAID_W"; //Your Faction
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Forward Air Controller";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U";                          // This links this soldier to a particular uniform. For the details, see below.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {hlc_rifle_ACR68_Carb_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, Laserdesignator_01_khk_F, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hlc_rifle_ACR68_Carb_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, Laserdesignator_01_khk_F, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};         // Which items the character respawns with.
        magazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade), Laserbatteries};               // What ammunition the character has.
        respawnMagazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade), Laserbatteries};        // What ammunition the character respawns with.
        linkedItems[] = {milgp_v_marciras_teamleader_CB, milgp_h_airframe_03_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_anprc152, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {milgp_v_marciras_teamleader_CB, milgp_h_airframe_03_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_anprc152, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_RAID_W_PL: MOO_Core_W_Base_SS       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam - MOO";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_RAID_W"; //Your Faction
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Patrol Leader";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U_SS";                          // This links this soldier to a particular uniform. For the details, see below.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconManLeader";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Men"; //Unit Group
        backpack = "MOO_Core_W_KB";        // Which backpack the character is wearing.
        weapons[] = {hlc_rifle_ACR68_Carb_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, Rangefinder, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hlc_rifle_ACR68_Carb_black_rd_pointer, hlc_pistol_P226R_Elite_pointer, Rangefinder, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1};         // Which items the character respawns with.
        magazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};               // What ammunition the character has.
        respawnMagazines[] = {mag_5(hlc_30rnd_68x43_FMJ), mag_5(hlc_30rnd_68x43_MFMJ), mag_3(hlc_30rnd_68x43_MIRDIM), mag_3(hlc_15Rnd_9x19_JHP_P226), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};        // What ammunition the character respawns with.
        linkedItems[] = {milgp_v_mmac_teamleader_belt_CB, milgp_h_airframe_06_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_anprc152, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {milgp_v_mmac_teamleader_belt_CB, milgp_h_airframe_06_CB_hexagon, ItemMap, ItemCompass, tf_microdagr, tf_anprc152, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_RAID_W_SS: MOO_Core_W_Base_SS       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam - MOO";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_RAID_W"; //Your Faction
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Sharpshooter";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.2;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U_SS";                          // This links this soldier to a particular uniform. For the details, see below.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconManRecon";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Men"; //Unit Group
        backpack = "MOO_RAID_W_SS_Bag";        // Which backpack the character is wearing.
        weapons[] = {hlc_rifle_awmagnum_lrps, hlc_pistol_P229R_40Combat_pointer, Rangefinder, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hlc_rifle_awmagnum_lrps, hlc_pistol_P229R_40Combat_pointer, Rangefinder, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1, optic_NVS};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1, optic_NVS};         // Which items the character respawns with.
        magazines[] = {mag_6(hlc_5rnd_300WM_mk248_AWM), mag_3(hlc_5rnd_300WM_AP_AWM), mag_3(hlc_10Rnd_40sw_SD_P229), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};               // What ammunition the character has.
        respawnMagazines[] = {mag_6(hlc_5rnd_300WM_mk248_AWM), mag_3(hlc_5rnd_300WM_AP_AWM), mag_3(hlc_10Rnd_40sw_SD_P229), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};        // What ammunition the character respawns with.
        linkedItems[] = {milgp_v_marciras_marksman_belt_cb, MOO_Core_W_BH, ItemMap, ItemCompass, tf_microdagr, tf_anprc152, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {milgp_v_marciras_marksman_belt_cb, MOO_Core_W_BH, ItemMap, ItemCompass, tf_microdagr, tf_anprc152, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_RAID_W_SPT: MOO_Core_W_Base_SS       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam - MOO";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_RAID_W"; //Your Faction
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Spotter";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.2;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U_SS";                          // This links this soldier to a particular uniform. For the details, see below.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconManRecon";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Men"; //Unit Group
        backpack = "tf_rt1523g_big_bwmod";        // Which backpack the character is wearing.
        weapons[] = {hlc_rifle_Colt727_supp, hlc_pistol_P229R_40Combat_pointer, Rangefinder, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hlc_rifle_Colt727_supp, hlc_pistol_P229R_40Combat_pointer, Rangefinder, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1, optic_NVS};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, ACE_IR_Strobe_Item, ACE_NVG_Gen1, optic_NVS};         // Which items the character respawns with.
        magazines[] = {mag_9(hlc_30rnd_556x45_S), mag_3(hlc_30rnd_556x45_MDim), mag_3(hlc_10Rnd_40sw_SD_P229), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};               // What ammunition the character has.
        respawnMagazines[] = {mag_9(hlc_30rnd_556x45_S), mag_3(hlc_30rnd_556x45_MDim), mag_3(hlc_10Rnd_40sw_SD_P229), SmokeShell, SmokeShell, SmokeShellGreen, ACE_Chemlight_IR, Chemlight_red, mag_2(SmokeShellBlue),mag_2(HandGrenade)};        // What ammunition the character respawns with.
        linkedItems[] = {milgp_v_marciras_assaulter_belt_cb, MOO_Core_W_BH, ItemMap, ItemCompass, tf_microdagr, tf_anprc152, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {milgp_v_marciras_assaulter_belt_cb, MOO_Core_W_BH, ItemMap, ItemCompass, tf_microdagr, tf_anprc152, ItemGPS};        // Which items the character respawns with.
    };
	
	
	
	
	
	
	
// Invis Backpacks

	class MOO_Core_W_KB;
	class MOO_RAID_W_LG_Bag: MOO_Core_W_KB
    {
        scope = 1;      
        class TransportMagazines
        {
            mag_xx(200Rnd_556x45_Box_Tracer_Red_F,5);
        };
    };
	
	class MOO_Core_W_DS;
	class MOO_RAID_W_AB_Bag: MOO_Core_W_DS
    {
        scope = 1;      
        class TransportMagazines
        {
            mag_xx(hlc_30rnd_68x43_FMJ,20);
			mag_xx(hlc_30rnd_68x43_MFMJ,5);
			mag_xx(hlc_30rnd_68x43_MIRDIM,5);
			mag_xx(HandGrenade,5);
			mag_xx(SmokeShellBlue,5);
			mag_xx(SmokeShell,5);
        };
    };
	
	class MOO_RAID_W_SG_Bag: MOO_Core_W_DS
    {
        scope = 1;      
        class TransportMagazines
        {
            mag_xx(hlc_100Rnd_762x51_Barrier_M60E4,8);
			mag_xx(hlc_100Rnd_762x51_Mdim_M60E4,4);
        };
    };
	
	class MOO_RAID_W_HG_Bag: MOO_Core_W_DS
    {
        scope = 1;      
        class TransportMagazines
        {
            mag_xx(130Rnd_338_Mag,6);
        };
    };
	
	class MOO_Core_W_AS;
	class MOO_RAID_W_CM_Bag: MOO_Core_W_AS
    {
        scope = 1;      
        class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
    };
	
	class MOO_RAID_W_SP_Bag: MOO_Core_W_AS
    {
        scope = 1;      
        class TransportItems
		{
			class _xx_ToolKit
			{
				name = "Toolkit";
				count = 1;
			};
			class _xx_ACE_EntrenchingTool
			{
				name = "ACE_EntrenchingTool";
				count = 1;
			};
		};
    };
	
	class milgp_bp_Pointman_cb;
	class MOO_RAID_W_PM_Bag: milgp_bp_Pointman_cb
    {
        scope = 1;      
        class TransportItems
		{
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};	
		};
		class TransportMagazines
        {
            mag_xx(HandGrenade,4);
			mag_xx(ACE_M84,4);
			mag_xx(ACE_Chemlight_HiRed,4);
			mag_xx(SmokeShellBlue,2);
        };
    };
	
	class ace_gunbag;
	class MOO_RAID_W_SS_Bag: ace_gunbag
    {
        scope = 1;
		maximumLoad = 250;	
        class TransportWeapons 
		{

			class _xx_hlc_rifle_Colt727_supp 
			{
				weapon = "hlc_rifle_Colt727_supp";
				count = 1;
		    };
	};
		class TransportMagazines
        {
            mag_xx(hlc_30rnd_556x45_S,12);
        };
    };
	
	
};

class cfgWeapons
{
	class hlc_rifle_ACR68_Carb_black;
	class hlc_rifle_ACR68_Carb_black_rd_pointer: hlc_rifle_ACR68_Carb_black
	{
		_generalMacro = "hlc_rifle_ACR68_Carb_black_rd_pointer";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn_smg";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	
	
	class hlc_rifle_ACR68_SBR_black;
	class hlc_rifle_ACR68_SBR_black_rd_pointer: hlc_rifle_ACR68_SBR_black
	{
		_generalMacro = "hlc_rifle_ACR68_SBR_black_rd_pointer";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn_smg";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	
	class hlc_rifle_ACR68_full_black;
	class hlc_rifle_ACR68_full_black_mrco_pointer: hlc_rifle_ACR68_full_black
	{
		author = "Nam";
		_generalMacro = "hlc_rifle_ACR68_full_black_mrco_pointer";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "bipod_01_F_blk";
		};
		};
	};
	
	class hlc_pistol_P226R_Elite;
	class hlc_pistol_P226R_Elite_pointer: hlc_pistol_P226R_Elite
	{
		_generalMacro = "hlc_rifle_ACR68_SBR_black_rd_pointer";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "hlc_acc_DBALPL";
			};
		};
	};
	
	class hlc_pistol_P229R_40Combat;
	class hlc_pistol_P229R_40Combat_pointer: hlc_pistol_P229R_40Combat
	{
		_generalMacro = "hlc_pistol_P229R_40Combat_pointer";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "hlc_acc_DBALPL";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_Evo40";
			};
		};
	};
	
	class LMG_03_F;
	class LMG_03_F_rd_pointer: LMG_03_F
	{
		author = "Nam";
		_generalMacro = "LMG_03_F_rd_pointer";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn_smg";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	
	class hlc_lmg_mk48mod1;
	class hlc_lmg_mk48mod1_rd_pointer: hlc_lmg_mk48mod1
	{
		author = "Nam";
		_generalMacro = "hlc_lmg_mk48mod1_rd_pointer";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn_smg";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	
	class MMG_02_black_F;
	class MMG_02_black_F_rd_pointer: MMG_02_black_F
	{
		author = "Nam";
		_generalMacro = "MMG_02_black_F_rd_pointer";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn_smg";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "bipod_01_F_blk";
		};
		};
	};
	
	class hlc_rifle_awmagnum;
	class hlc_rifle_awmagnum_lrps: hlc_rifle_awmagnum
	{
		author = "Nam";
		_generalMacro = "hlc_rifle_awmagnum_lrps";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_LRPS";
			};
		};
	};
	
	class hlc_rifle_Colt727;
	class hlc_rifle_Colt727_supp: hlc_rifle_Colt727
	{
		_generalMacro = "hlc_pistol_P229R_40Combat_pointer";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_556NATO_KAC";
			};
		};
	};

};