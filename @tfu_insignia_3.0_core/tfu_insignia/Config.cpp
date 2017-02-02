enum {
	 //  = 2,	// Error parsing: Empty enum name
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

class CfgPatches {

	class insignia_addon
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
		version = "1.0.0";
		author= "Rainman";
		authorUrl = "http://www.taskforceunicorn.com";
	};

};

class CfgUnitInsignia
{

	class insignia_tfu_default
	{
		displayName = "TFU Insignia";
		author = "Rainman";
		texture = "\tfu_insignia\data\textures\tfu_insignia_default.paa";
		textureVehicle = "";
	};

	class insignia_tfu_silver
	{
		displayName = "TFU Insignia (Silver)";
		author = "Rainman";
		texture = "\tfu_insignia\data\textures\tfu_insignia_silver.paa";
		textureVehicle = "";
	};

	class insignia_tfu_green
	{
		displayName = "TFU Insignia (Green)";
		author = "Rainman";
		texture = "\tfu_insignia\data\textures\tfu_insignia_green.paa";
		textureVehicle = "";
	};

};

class cfgWeapons {
	class H_Beret_02;
	class HeadgearItem;

	class H_Beret_TFU_Black_01: H_Beret_02 {
		author = "Rainman";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret [TFU] (Black)";
		picture = "\tfu_insignia\data\ui\icon_h_beret_black_01_ca.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tfu_insignia\data\textures\headgear_beret_black_01\headgear_beret_black_01_co.paa"};
		hiddenSelectionsMaterials[] = {"tfu_insignia\data\textures\headgear_beret_black_01\headgear_beret_black_01.rvmat"};

		class ItemInfo : HeadgearItem {
			mass = 6;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
			allowedslots[] = {801, 901, 701, 605};
		};
	};

	class H_Beret_TFU_Tan_01: H_Beret_02 {
		author = "Rainman";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret [TFU] (Tan)";
		picture = "\tfu_insignia\data\ui\icon_h_beret_tan_01_ca.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tfu_insignia\data\textures\headgear_beret_tan_01\headgear_beret_tan_01_co.paa"};
		hiddenSelectionsMaterials[] = {"tfu_insignia\data\textures\headgear_beret_black_01\headgear_beret_black_01.rvmat"};

		class ItemInfo : HeadgearItem {
			mass = 6;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
			allowedslots[] = {801, 901, 701, 605};
		};
	};

	class H_Beret_TFU_Green_01: H_Beret_02 {
		author = "Rainman";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret [TFU] (Green)";
		picture = "\tfu_insignia\data\ui\icon_h_beret_green_01_ca.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tfu_insignia\data\textures\headgear_beret_green_01\headgear_beret_green_01_co.paa"};
		hiddenSelectionsMaterials[] = {"tfu_insignia\data\textures\headgear_beret_black_01\headgear_beret_black_01.rvmat"};

		class ItemInfo : HeadgearItem {
			mass = 6;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
			allowedslots[] = {801, 901, 701, 605};
		};
	};

	class H_Beret_TFU_Olive_01: H_Beret_02 {
		author = "Rainman";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret [TFU] (Olive)";
		picture = "\tfu_insignia\data\ui\icon_h_beret_olive_01_ca.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tfu_insignia\data\textures\headgear_beret_olive_01\headgear_beret_olive_01_co.paa"};
		hiddenSelectionsMaterials[] = {"tfu_insignia\data\textures\headgear_beret_black_01\headgear_beret_black_01.rvmat"};

		class ItemInfo : HeadgearItem {
			mass = 6;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
			allowedslots[] = {801, 901, 701, 605};
		};
	};

	class H_Beret_TFU_Red_01: H_Beret_02 {
		author = "Rainman";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret [TFU] (Red)";
		picture = "\tfu_insignia\data\ui\icon_h_beret_red_01_ca.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tfu_insignia\data\textures\headgear_beret_red_01\headgear_beret_red_01_co.paa"};
		hiddenSelectionsMaterials[] = {"tfu_insignia\data\textures\headgear_beret_black_01\headgear_beret_black_01.rvmat"};

		class ItemInfo : HeadgearItem {
			mass = 6;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
			allowedslots[] = {801, 901, 701, 605};
		};
	};

};
