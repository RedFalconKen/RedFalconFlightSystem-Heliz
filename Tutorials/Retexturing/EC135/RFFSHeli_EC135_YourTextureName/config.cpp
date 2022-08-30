class CfgPatches
{
	class RFFSHeli_EC135_YourTextureName_Heli
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Vehicles_Parts",
			"DZ_Vehicles_Wheeled",
			"DZ_Scripts",
			"DZ_Data",
			"RFFSHeli_EC135_Heli",
			"RFFSHeli_Core"
		};
	};
};
class CfgMods
{
	class RFFSHeli_EC135_YourTextureName_Heli
	{
		dir="RFFSHeli_EC135_YourTextureName";
		hideName=0;
		hidePicture=0;
		name="RFFSHeli_EC135_YourTextureName";
		credits="";
		author="Your Name";
		authorID="";
		version="version 1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"RFFSHeli_EC135_YourTextureName/scripts/4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class RFFSHeli_EC135;
	class RFFSHeli_EC135_YourTextureName: RFFSHeli_EC135
	{
		scope=2;
		displayName="Eurocopter EC135 Helicopter - YourTextureName";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_EC135_YourTextureName\data\ec135_e01_YourTextureName.paa",
			"RFFSHeli_EC135_YourTextureName\data\ec135_e02_YourTextureName.paa",
			"RFFSHeli_EC135_YourTextureName\data\ec135_e03_YourTextureName.paa",
			"RFFSHeli_EC135_YourTextureName\data\ec135_e04_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_EC135\data\ec135_e01_YourTextureName.rvmat",
			"RFFSHeli_EC135\data\ec135_e02_YourTextureName.rvmat",
			"RFFSHeli_EC135\data\ec135_e03_YourTextureNamervmat",
			"RFFSHeli_EC135\data\ec135_e04_YourTextureNamervmat"
		};
		class Cargo
		{
			itemsCargoSize[]={10,60};
		};
	};
	class RFFSHeli_EC135_DriverDoor;
	class RFFSHeli_EC135_CodriverDoor;
	class RFFSHeli_EC135_Cargo1;
	class RFFSHeli_EC135_Cargo2;
	class RFFSHeli_EC135_Cargo3;
	class RFFSHeli_EC135_Cargo4;
		
	class RFFSHeli_EC135_DriverDoor_YourTextureName: RFFSHeli_EC135_DriverDoor
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_EC135_YourTextureName\data\ec135_e01_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_EC135\data\ec135_e01_YourTextureName.rvmat"
		};
	};
	class RFFSHeli_EC135_CodriverDoor_YourTextureName: RFFSHeli_EC135_CodriverDoor
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_EC135_YourTextureName\data\ec135_e01_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_EC135\data\ec135_e01_YourTextureName.rvmat"
		};
	};
	class RFFSHeli_EC135_Cargo1_YourTextureName: RFFSHeli_EC135_Cargo1
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_EC135_YourTextureName\data\ec135_e01_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_EC135\data\ec135_e01_YourTextureName.rvmat"
		};
	};
	class RFFSHeli_EC135_Cargo2_YourTextureName: RFFSHeli_EC135_Cargo2
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_EC135_YourTextureName\data\ec135_e01_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_EC135\data\ec135_e01_YourTextureName.rvmat"
		};
	};
	class RFFSHeli_EC135_Cargo3_YourTextureName: RFFSHeli_EC135_Cargo3
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_EC135_YourTextureName\data\ec135_e01_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_EC135\data\ec135_e01_YourTextureName.rvmat"
		};
	};
	class RFFSHeli_EC135_Cargo4_YourTextureName: RFFSHeli_EC135_Cargo4
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_EC135_YourTextureName\data\ec135_e01_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_EC135\data\ec135_e01_YourTextureName.rvmat"
		};
	};

	class RFFSHeli_EC135_Wreck;
	class RFFSHeli_EC135_YourTextureName_Wreck: RFFSHeli_EC135_Wreck
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_EC135_YourTextureName\data\ec135_e01_YourTextureName.paa",
			"RFFSHeli_EC135_YourTextureName\data\ec135_e02_YourTextureName.paa",
			"RFFSHeli_EC135_YourTextureName\data\ec135_e03_YourTextureName.paa",
			"RFFSHeli_EC135_YourTextureName\data\ec135_e04_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_EC135\data\ec135_e01_YourTextureName.rvmat",
			"RFFSHeli_EC135\data\ec135_e02_YourTextureName.rvmat",
			"RFFSHeli_EC135\data\ec135_e03_YourTextureName.rvmat",
			"RFFSHeli_EC135\data\ec135_e04_YourTextureName.rvmat"
		};
	};
};

