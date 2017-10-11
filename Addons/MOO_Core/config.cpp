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
    class MOO_Core 
    {
         units[] = {};
         weapons[] = {};
         requiredVersion = 0.1;
         requiredAddons[] = {a3_characters_F, a3_characters_f_beta, a3_characters_f_gamma};
    };
};

class cfgFactionClasses
{
    class MOO_Core //Faction Calling Name
    {
         displayName = "MOO Core"; //Faction name in-game
         icon = "\MOO_Core\UI\MOO_Logo_256.paa"; //Path to texture next to the faction name in editor "PBOname\filename.paa"
         priority = 3; //How far down it is on the menu
         side = 1; // 0 Opfor, 1 Blufor, 2 Independent
         scope = 2;
         scopeCurator = 2;
    };
};



class CfgVehicleClasses
{
	class MOO_Core_Men
	{	
		 displayName = "Men";
		 priority = 1;
	};
    class MOO_Core_APC //Name of unit group e.g Air, Infantry, Armour
    {
         displayName = "APC"; //In-game name
         priority = 99; // How far down it is on the menu
    };
};



class CfgVehicles
{		

//Uniforms (A)
	class B_Soldier_F;
	class MOO_Core_A_Base: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_A_U";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_A_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_Core_A_Base_SS: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_A_U_SS";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_A_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };
	
	class I_Sniper_F;
	class MOO_Core_A_G_Base: I_Sniper_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.1;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_sniper.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_A_G";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_A_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };
	
//Uniforms (W)

class MOO_Core_W_Base: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_W_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_Core_W_Base_SS: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_U_SS";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_W_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };	
	
	class MOO_Core_W_G_Base: I_Sniper_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.1;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_sniper.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_W_G";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_W_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };
	
// Uniforms (B)

class MOO_Core_B_Base: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_B_U";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_B_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_Core_B_Base_SS: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_B_U_SS";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_B_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };	
	
//Uniforms (GL)

class MOO_Core_GL_Base: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_GL_U";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_GL_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_Core_GL_Base_SS: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_GL_U_SS";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_GL_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };	
	
	class MOO_Core_GL_G_Base: I_Sniper_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.1;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_sniper.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_GL_G";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_GL_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };
	
//Uniforms (ADT)

class MOO_Core_ADT_Base: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_ADT_U";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_ADT_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_Core_ADT_Base_SS: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_ADT_U_SS";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_ADT_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };	
	
	class MOO_Core_ADT_G_Base: I_Sniper_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.1;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_sniper.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_ADT_G";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_ADT_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };
	
//Uniforms (AG)

class MOO_Core_AG_Base: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_AG_U";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_AG_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_Core_AG_Base_SS: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_AG_U_SS";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_AG_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };	
	
	class MOO_Core_AG_G_Base: I_Sniper_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.1;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_sniper.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_AG_G";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_AG_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };
	
	
//Uniforms (J)
	class B_Soldier_F;
	class MOO_Core_J_Base: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_J_U";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_J_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };
	
	class MOO_Core_J_Base_SS: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.3;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_J_U_SS";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_J_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };
	
	class I_Sniper_F;
	class MOO_Core_J_G_Base: I_Sniper_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
        scope = 1;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 0;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "MOO Base";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 0.1;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_f_beta\INDEP\ia_sniper.p3d";        // The path to the model this character uses.
        uniformClass = "MOO_Core_J_G";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_J_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
		vehicleclass = "MOO_Core_Men"; //Unit Group
        backpack = "";        // Which backpack the character is wearing.
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS};        // Which items the character respawns with.
    };
	

// Arid Backpacks

class Bag_Base;
class B_Carryall_Base;
class MOO_Core_A_DS: B_Carryall_Base
	{
		displayname = "MOO Daysack (A)";
		author = "Nam - MOO";
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_A_DS.paa"};
		maximumLoad = 400;
        mass = 40;
	};
	
	class MOO_Core_A_KB: Bag_Base
    {
        author = "Nam - MOO";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast.p3d";
        displayName = "MOO Kitbag (A)";
        picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
        hiddenSelectionsTextures[]={"\MOO_Core\Data\MOO_Core_A_KB.paa"};
        maximumLoad = 300;
        mass = 20;
    };	
	
	class MOO_Core_A_AS: Bag_Base
    {
        author = "Nam - MOO";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact.p3d";
        displayName = "MOO Assaultsack (A)";
        picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
        hiddenSelectionsTextures[]={"\MOO_Core\Data\MOO_Core_A_AS_co.paa"};
        maximumLoad = 200;
        mass = 20;
    };	
	
// Arid Dual-Tex Backpacks

class MOO_Core_ADT_DS: B_Carryall_Base
	{
		displayname = "MOO Daysack (ADT)";
		author = "Nam - MOO";
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_ADT_DS.paa"};
		maximumLoad = 400;
        mass = 40;
	};
	
	class MOO_Core_ADT_KB: Bag_Base
    {
        author = "Nam - MOO";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast.p3d";
        displayName = "MOO Kitbag (ADT)";
        picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
        hiddenSelectionsTextures[]={"\MOO_Core\Data\MOO_Core_ADT_KB.paa"};
        maximumLoad = 300;
        mass = 20;
    };	
	
	class MOO_Core_ADT_AS: Bag_Base
    {
        author = "Nam - MOO";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact.p3d";
        displayName = "MOO Assaultsack (ADT)";
        picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
        hiddenSelectionsTextures[]={"\MOO_Core\Data\MOO_Core_ADT_AS_co.paa"};
        maximumLoad = 200;
        mass = 20;
    };	
	
// Arid Green Backpacks

class MOO_Core_AG_DS: B_Carryall_Base
	{
		displayname = "MOO Daysack (AG)";
		author = "Nam - MOO";
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_AG_DS.paa"};
		maximumLoad = 400;
        mass = 40;
	};
	
	class MOO_Core_AG_KB: Bag_Base
    {
        author = "Nam - MOO";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast.p3d";
        displayName = "MOO Kitbag (AG)";
        picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
        hiddenSelectionsTextures[]={"\MOO_Core\Data\MOO_Core_AG_KB.paa"};
        maximumLoad = 300;
        mass = 20;
    };	
	
	class MOO_Core_AG_AS: Bag_Base
    {
        author = "Nam - MOO";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact.p3d";
        displayName = "MOO Assaultsack (AG)";
        picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
        hiddenSelectionsTextures[]={"\MOO_Core\Data\MOO_Core_AG_AS_co.paa"};
        maximumLoad = 200;
        mass = 20;
    };	
	
// Woodland Backpacks

class MOO_Core_W_DS: B_Carryall_Base
	{
		displayname = "MOO Daysack (W)";
		author = "Nam - MOO";
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_W_DS.paa"};
		maximumLoad = 400;
        mass = 40;
	};
	
	class MOO_Core_W_KB: Bag_Base
    {
        author = "Nam - MOO";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast.p3d";
        displayName = "MOO Kitbag (W)";
        picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
        hiddenSelectionsTextures[]={"\MOO_Core\Data\MOO_Core_W_KB.paa"};
        maximumLoad = 300;
        mass = 20;
    };	
	
	class MOO_Core_W_AS: Bag_Base
    {
        author = "Nam - MOO";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact.p3d";
        displayName = "MOO Assaultsack (W)";
        picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
        hiddenSelectionsTextures[]={"\MOO_Core\Data\MOO_Core_W_AS_co.paa"};
        maximumLoad = 200;
        mass = 20;
    };	
	
// Grassland Backpacks

class MOO_Core_GL_DS: B_Carryall_Base
	{
		displayname = "MOO Daysack (GL)";
		author = "Nam - MOO";
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_GL_DS.paa"};
		maximumLoad = 400;
        mass = 40;
	};
	
	class MOO_Core_GL_KB: Bag_Base
    {
        author = "Nam - MOO";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast.p3d";
        displayName = "MOO Kitbag (GL)";
        picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
        hiddenSelectionsTextures[]={"\MOO_Core\Data\MOO_Core_GL_KB.paa"};
        maximumLoad = 300;
        mass = 20;
    };	
	
	class MOO_Core_GL_AS: Bag_Base
    {
        author = "Nam - MOO";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact.p3d";
        displayName = "MOO Assaultsack (GL)";
        picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
        hiddenSelectionsTextures[]={"\MOO_Core\Data\MOO_Core_GL_AS_co.paa"};
        maximumLoad = 200;
        mass = 20;
    };	
	
// Jungle Backpacks

class MOO_Core_J_DS: B_Carryall_Base
	{
		displayname = "MOO Daysack (J)";
		author = "Nam - MOO";
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_J_DS.paa"};
		maximumLoad = 400;
        mass = 40;
	};
	
	class MOO_Core_J_KB: Bag_Base
    {
        author = "Nam - MOO";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast.p3d";
        displayName = "MOO Kitbag (J)";
        picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
        hiddenSelectionsTextures[]={"\MOO_Core\Data\MOO_Core_J_KB.paa"};
        maximumLoad = 300;
        mass = 20;
    };	
	
	class MOO_Core_J_AS: Bag_Base
    {
        author = "Nam - MOO";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact.p3d";
        displayName = "MOO Assaultsack (J)";
        picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
        hiddenSelectionsTextures[]={"\MOO_Core\Data\MOO_Core_J_AS_co.paa"};
        maximumLoad = 200;
        mass = 20;
    };	
	

// Argus
    class I_APC_Wheeled_03_cannon_F;
	class MOO_Core_APC_Argus_B: I_APC_Wheeled_03_cannon_F
	{
		author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
		side = 1;
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		vehicleclass = "MOO_Core_APC";
		displayName = "MOO Argus (B/Armed)";
		crew = "MOO_Core_W_Base_SS";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_APC_Ext_B.paa","MOO_Core\Data\MOO_Core_APC_Ext2_B.paa","MOO_Core\Data\MOO_Core_APC_RCWS_B.paa","MOO_Core\Data\MOO_Core_APC_Ext3_B.paa"};
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
	
	class MOO_Core_APC_Argus_W: I_APC_Wheeled_03_cannon_F
	{
		author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
		side = 1;
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		vehicleclass = "MOO_Core_APC";
		displayName = "MOO Argus (W/Armed)";
		crew = "MOO_Core_W_Base_SS";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_APC_Ext_W.paa","MOO_Core\Data\MOO_Core_APC_Ext2_W.paa","MOO_Core\Data\MOO_Core_APC_RCWS_W.paa","MOO_Core\Data\MOO_Core_APC_Ext3_W.paa"};
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
	
	class MOO_Core_APC_Argus_A: I_APC_Wheeled_03_cannon_F
	{
		author = "Nam";         // The name of the author of the asset, which is displayed in the editor.
		faction = "MOO_Core"; //Your Faction
		side = 1;
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		vehicleclass = "MOO_Core_APC";
		displayName = "MOO Argus (A/Armed)";
		crew = "MOO_Core_W_Base_SS";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_APC_Ext_A.paa","MOO_Core\Data\MOO_Core_APC_Ext2_A.paa","MOO_Core\Data\MOO_Core_APC_RCWS_A.paa","MOO_Core\Data\MOO_Core_APC_Ext3_A.paa"};
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
	
	class I_APC_Wheeled_03_base_F;
	class MOO_Core_APC_Argus_UA_B: I_APC_Wheeled_03_base_F
	{
		author = Nam & Night515;
		faction = "MOO_Core"; //Your Faction
		//editorPreview = "\EditorPreviews_F_Aegis\Data\CfgVehicles\I_APC_Wheeled_03_example_F.jpg";
		_generalMacro = "MOO_Core_APC_Argus_UA_B";
		side = 1;
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		vehicleclass = "MOO_Core_APC";
		displayName = "MOO Argus (B/Unarmed)";
		crew = "MOO_Core_W_Base_SS";
		class Library
		{
			libTextDesc = $STR_A3_CfgVehicles_APC_Wheeled_03_WAPC_Library0;
		};
		model = "\A3\armor_f_gamma\APC_Wheeled_03\APC_Wheeled_03_cannon_F.p3d";
		picture = "\MOO_Core\UI\Argus_Trans_Side.paa";
		Icon = "\MOO_Core\UI\Argus_Trans_Top.paa";
		unitInfoType = RscUnitInfoTank;
		radarType = 8;
		driverCanSee = 4+8+2+32+16;
		gunnerCanSee = 4+2+8+32+16;
		threat[] = {0,0,0};
		class CargoTurret;
		class Turrets{};
		weapons[] =
		{
			TruckHorn,
			SmokeLauncher
		};
		magazines[] = {SmokeLauncherMag};
		class TransportMagazines{};
		class TransportWeapons{};
		class AnimationSources
		{
			class HideTurret
			{
				source = user;
				initPhase = 1;
				animPeriod = 0.001;
			};
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] =
		{
			"MOO_Core\Data\MOO_Core_APC_Ext_B.paa",
			"MOO_Core\Data\MOO_Core_APC_Ext2_B.paa",
			"MOO_Core\Data\MOO_Core_APC_RCWS_B.paa",
			"MOO_Core\Data\MOO_Core_APC_Ext3_B.paa"
		};
	};
	
	class MOO_Core_APC_Argus_UA_W: I_APC_Wheeled_03_base_F
	{
		author = Nam & Night515;
		faction = "MOO_Core"; //Your Faction
		//editorPreview = "\EditorPreviews_F_Aegis\Data\CfgVehicles\I_APC_Wheeled_03_example_F.jpg";
		_generalMacro = "MOO_Core_APC_Argus_UA_W";
		side = 1;
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		vehicleclass = "MOO_Core_APC";
		displayName = "MOO Argus (W/Unarmed)";
		crew = "MOO_Core_W_Base_SS";
		class Library
		{
			libTextDesc = $STR_A3_CfgVehicles_APC_Wheeled_03_WAPC_Library0;
		};
		model = "\A3\armor_f_gamma\APC_Wheeled_03\APC_Wheeled_03_cannon_F.p3d";
		picture = "\MOO_Core\UI\Argus_Trans_Side.paa";
		Icon = "\MOO_Core\UI\Argus_Trans_Top.paa";
		unitInfoType = RscUnitInfoTank;
		radarType = 8;
		driverCanSee = 4+8+2+32+16;
		gunnerCanSee = 4+2+8+32+16;
		threat[] = {0,0,0};
		class CargoTurret;
		class Turrets{};
		weapons[] =
		{
			TruckHorn,
			SmokeLauncher
		};
		magazines[] = {SmokeLauncherMag};
		class TransportMagazines{};
		class TransportWeapons{};
		class AnimationSources
		{
			class HideTurret
			{
				source = user;
				initPhase = 1;
				animPeriod = 0.001;
			};
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] =
		{
			"MOO_Core\Data\MOO_Core_APC_Ext_W.paa",
			"MOO_Core\Data\MOO_Core_APC_Ext2_W.paa",
			"MOO_Core\Data\MOO_Core_APC_RCWS_W.paa",
			"MOO_Core\Data\MOO_Core_APC_Ext3_W.paa"
		};
	};
	
	class MOO_Core_APC_Argus_UA_A: I_APC_Wheeled_03_base_F
	{
		author = Nam & Night515;
		faction = "MOO_Core"; //Your Faction
		//editorPreview = "\EditorPreviews_F_Aegis\Data\CfgVehicles\I_APC_Wheeled_03_example_F.jpg";
		_generalMacro = "MOO_Core_APC_Argus_UA_A";
		side = 1;
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		vehicleclass = "MOO_Core_APC";
		displayName = "MOO Argus (A/Unarmed)";
		crew = "MOO_Core_W_Base_SS";
		class Library
		{
			libTextDesc = $STR_A3_CfgVehicles_APC_Wheeled_03_WAPC_Library0;
		};
		model = "\A3\armor_f_gamma\APC_Wheeled_03\APC_Wheeled_03_cannon_F.p3d";
		picture = "\MOO_Core\UI\Argus_Trans_Side.paa";
		Icon = "\MOO_Core\UI\Argus_Trans_Top.paa";
		unitInfoType = RscUnitInfoTank;
		radarType = 8;
		driverCanSee = 4+8+2+32+16;
		gunnerCanSee = 4+2+8+32+16;
		threat[] = {0,0,0};
		class CargoTurret;
		class Turrets{};
		weapons[] =
		{
			TruckHorn,
			SmokeLauncher
		};
		magazines[] = {SmokeLauncherMag};
		class TransportMagazines{};
		class TransportWeapons{};
		class AnimationSources
		{
			class HideTurret
			{
				source = user;
				initPhase = 1;
				animPeriod = 0.001;
			};
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] =
		{
			"MOO_Core\Data\MOO_Core_APC_Ext_A.paa",
			"MOO_Core\Data\MOO_Core_APC_Ext2_A.paa",
			"MOO_Core\Data\MOO_Core_APC_RCWS_A.paa",
			"MOO_Core\Data\MOO_Core_APC_Ext3_A.paa"
		};
		
	};
};	
	
	
	class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class MOO_Core_A_U: Uniform_Base
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Uniform (A)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_A_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_A_Base"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
	class MOO_Core_A_U_SS: Uniform_Base
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Uniform (A)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_A_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_A_Base_SS"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
	class U_I_GhillieSuit;
	class MOO_Core_A_G: U_I_GhillieSuit
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Ghillie (A)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_A_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_A_G_Base"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
	class MOO_Core_W_U: Uniform_Base
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Uniform (W)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_W_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_W_Base"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
	class MOO_Core_W_U_SS: Uniform_Base
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Uniform (W)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_W_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_W_Base_SS"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
	class MOO_Core_W_G: U_I_GhillieSuit
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Ghillie (W)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_W_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_W_G_Base"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    };

    class MOO_Core_B_U: Uniform_Base
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Uniform (B)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_B_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_B_Base"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    };

    class MOO_Core_B_U_SS: Uniform_Base
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Uniform (B)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_B_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_B_Base_SS"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
	class MOO_Core_GL_U: Uniform_Base
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Uniform (GL)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_GL_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_GL_Base"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
	class MOO_Core_GL_U_SS: Uniform_Base
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Uniform (GL)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_GL_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_GL_Base_SS"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
	class MOO_Core_GL_G: U_I_GhillieSuit
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Ghillie (GL)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_GL_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_GL_G_Base"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    };
	
	class MOO_Core_ADT_U: Uniform_Base
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Uniform (ADT)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_ADT_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_ADT_Base"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
	class MOO_Core_ADT_U_SS: Uniform_Base
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Uniform (ADT)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_ADT_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_ADT_Base_SS"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
	class MOO_Core_ADT_G: U_I_GhillieSuit
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Ghillie (ADT)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_ADT_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_ADT_G_Base"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    };
	
class MOO_Core_AG_U: Uniform_Base
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Uniform (AG)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_AG_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_AG_Base"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
	class MOO_Core_AG_U_SS: Uniform_Base
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Uniform (AG)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_AG_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_AG_Base_SS"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
	class U_I_GhillieSuit;
	class MOO_Core_AG_G: U_I_GhillieSuit
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Ghillie (AG)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_AG_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_AG_G_Base"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
    class MOO_Core_J_U: Uniform_Base
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Uniform (J)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_J_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_J_Base"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
	class MOO_Core_J_U_SS: Uniform_Base
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Uniform (J)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_J_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_J_Base_SS"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
	class MOO_Core_J_G: U_I_GhillieSuit
    {
		author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Core Ghillie (J)"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
        hiddenSelections[] = {"camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_J_U.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "MOO_Core_J_G_Base"; //A Unit that wears it
            containerClass = "Supply60"; //Carry Amount
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    }; 
	
// Vests
	class ItemCore;
    class Vest_Camo_Base: ItemCore
    {
        class ItemInfo;
    };
    class MOO_Core_A_CM_V: Vest_Camo_Base
    {
        author = "Nam";
        scope = 2;
        displayName = "MOO Plate Carrier (A)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_A_V.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_Beta\indep\equip_ia_vest01.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
    class MOO_Core_A_V: Vest_Camo_Base
    {
        author = "Nam";
        scope = 2;
        displayName = "MOO Plate Carrier Holster (A)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_A_V.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_Beta\indep\equip_ia_vest02.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
	class MOO_Core_A_LV: Vest_Camo_Base
    {
        author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Light Plate Carrier (A)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_A_LV.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_epc\Civil\equip_press_vest_01.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
	class MOO_Core_A_AV: Vest_Camo_Base
    {
        author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Assault Vest (A)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_A_AV.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F\Common\equip_tacticalvest.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
	class MOO_Core_W_CM_V: Vest_Camo_Base
    {
        author = "Nam";
        scope = 2;
        displayName = "MOO Plate Carrier (W)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_W_V.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_Beta\indep\equip_ia_vest01.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
    class MOO_Core_W_V: Vest_Camo_Base
    {
        author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Plate Carrier Holster (W)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_W_V.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_Beta\indep\equip_ia_vest02.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
	class MOO_Core_W_LV: Vest_Camo_Base
    {
        author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Light Plate Carrier (W)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_W_LV.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_epc\Civil\equip_press_vest_01.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
	class MOO_Core_W_AV: Vest_Camo_Base
    {
        author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Assault Vest (W)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_W_AV.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F\Common\equip_tacticalvest.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
//AG Vests
	
    class MOO_Core_AG_CM_V: Vest_Camo_Base
    {
        author = "Nam";
        scope = 2;
        displayName = "MOO Plate Carrier (AG)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_AG_V.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_Beta\indep\equip_ia_vest01.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
    class MOO_Core_AG_V: Vest_Camo_Base
    {
        author = "Nam";
        scope = 2;
        displayName = "MOO Plate Carrier Holster (AG)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_AG_V.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_Beta\indep\equip_ia_vest02.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
	class MOO_Core_AG_LV: Vest_Camo_Base
    {
        author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Light Plate Carrier (AG)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_AG_LV.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_epc\Civil\equip_press_vest_01.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
	class MOO_Core_AG_AV: Vest_Camo_Base
    {
        author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Assault Vest (AG)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_AG_AV.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F\Common\equip_tacticalvest.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	

// Jungle Vests
	
    class MOO_Core_J_CM_V: Vest_Camo_Base
    {
        author = "Nam";
        scope = 2;
        displayName = "MOO Plate Carrier (J)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_J_V.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_Beta\indep\equip_ia_vest01.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
    class MOO_Core_J_V: Vest_Camo_Base
    {
        author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Plate Carrier Holster (J)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_J_V.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_Beta\indep\equip_ia_vest02.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
	class MOO_Core_J_LV: Vest_Camo_Base
    {
        author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Light Plate Carrier (J)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_J_LV.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_epc\Civil\equip_press_vest_01.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
	class MOO_Core_J_AV: Vest_Camo_Base
    {
        author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Assault Vest (J)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_J_AV.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F\Common\equip_tacticalvest.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
	
// Olive Vests	

   class MOO_Core_O_LV: Vest_Camo_Base
    {
        author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Light Plate Carrier (O)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_O_LV.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_epc\Civil\equip_press_vest_01.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
	class MOO_Core_O_AV: Vest_Camo_Base
    {
        author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Assault Vest (O)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_O_AV.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F\Common\equip_tacticalvest.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
// Black Vests	

class MOO_Core_B_AV: Vest_Camo_Base
    {
        author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Assault Vest (B)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_B_AV.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F\Common\equip_tacticalvest.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };

// Arid Helmets

	class HeadgearItem;
    class MOO_Core_A_H: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Combat Helmet (A)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_A_H.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f_beta\indep\headgear_helmet_canvas.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 60;
                     passThrough = 0.0;
                };
            };
        };
    };	
	
	class MOO_Core_A_LCH: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Light Combat Helmet (A)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_A_LCH.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f\blufor\headgear_b_helmet_light.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 60;
                     passThrough = 0.0;
                };
            };
        };
    };	
	
//Arid Green Helmet

    class MOO_Core_AG_H: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Combat Helmet (AG)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_AG_H.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f_beta\indep\headgear_helmet_canvas.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 60;
                     passThrough = 0.0;
                };
            };
        };
    };
	
// GL Vests

    class MOO_Core_GL_AV: Vest_Camo_Base
    {
        author = "Nam - MOO";
        scope = 2;
        displayName = "MOO Assault Vest (GL)";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        hiddenSelectionsTextures[] = {"MOO_Core\Data\MOO_Core_GL_AV.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F\Common\equip_tacticalvest.p3d";          
            containerClass = Supply250;     
            mass = 60;
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
            };
        };
    };
	
//Jungle Helmet

    class MOO_Core_J_H: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Combat Helmet (J)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_J_H.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f_beta\indep\headgear_helmet_canvas.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 60;
                     passThrough = 0.0;
                };
            };
        };
    };
	
// Arid Hats

	class MOO_Core_A_PC: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Patrol Cap (A)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_A_PC.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f\common\cappatrol.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 0;
                     passThrough = 0.0;
                };
            };
        };
    };
	
	class MOO_Core_A_BH: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Boonie Hat (A)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_A_BH.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f\common\booniehat.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 0;
                     passThrough = 0.0;
                };
            };
        };
    };
	
// Arid Green Hats

	class MOO_Core_AG_PC: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Patrol Cap (AG)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_AG_PC.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f\common\cappatrol.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 0;
                     passThrough = 0.0;
                };
            };
        };
    };
	
	class MOO_Core_AG_BH: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Boonie Hat (AG)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_AG_BH.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f\common\booniehat.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 0;
                     passThrough = 0.0;
                };
            };
        };
    };
	
// Woodland Hats

	class MOO_Core_W_PC: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Patrol Cap (W)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_W_PC.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f\common\cappatrol.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 0;
                     passThrough = 0.0;
                };
            };
        };
    };
	
	class MOO_Core_W_BH: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Boonie Hat (W)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_W_BH.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f\common\booniehat.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 0;
                     passThrough = 0.0;
                };
            };
        };
    };
	
// Woodland Helmets

	class HeadgearItem;
    class MOO_Core_W_H: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Combat Helmet (W)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_W_H.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f_beta\indep\headgear_helmet_canvas.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 60;
                     passThrough = 0.0;
                };
            };
        };
    };

	class MOO_Core_W_LCH: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Light Combat Helmet (W)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_W_LCH.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f\blufor\headgear_b_helmet_light.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 60;
                     passThrough = 0.0;
                };
            };
        };
    };

// Grassland Hats

	class MOO_Core_GL_PC: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Patrol Cap (GL)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_GL_PC.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f\common\cappatrol.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 0;
                     passThrough = 0.0;
                };
            };
        };
    };
	
	class MOO_Core_GL_BH: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Boonie Hat (GL)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_GL_BH.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f\common\booniehat.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 0;
                     passThrough = 0.0;
                };
            };
        };
    };

	
// Jungle Hats

	class MOO_Core_J_PC: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Patrol Cap (J)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_J_PC.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f\common\cappatrol.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 0;
                     passThrough = 0.0;
                };
            };
        };
    };
	
	class MOO_Core_J_BH: ItemCore
	{
        author = "Nam - MOO";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MOO Boonie Hat (J)";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MOO_Core\Data\MOO_Core_J_BH.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_f\common\booniehat.p3d";
            hiddenSelections[] = {"camo"};
 
            //subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
 
            class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 0;
                     passThrough = 0.0;
                };
            };
        };
    };
	
	
	
};

