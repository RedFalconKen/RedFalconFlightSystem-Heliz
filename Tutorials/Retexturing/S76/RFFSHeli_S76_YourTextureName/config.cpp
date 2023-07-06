class CfgPatches
{
	class RFFSHeli_S76_YourTextureName_Heli
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
			"RFFSHeli_S76_Heli",
			"RFFSHeli_Core"
		};
	};
};
class CfgMods
{
	class RFFSHeli_S76_YourTextureName_Heli
	{
		dir="RFFSHeli_S76_YourTextureName";
		hideName=0;
		hidePicture=0;
		name="RFFSHeli_S76_YourTextureName";
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
					"RFFSHeli_S76_YourTextureName/scripts/4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class RFFSHeli_S76;
	class RFFSHeli_S76_YourTextureName: RFFSHeli_S76
	{
		scope=2;
		displayName="Sikorsky S76 Helicopter - YourTextureName";
		hiddenSelections[]=
		{
			"camo_ext01",
			"camo_ext02",
			"camo_ext03"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_S76_YourTextureName\data\S76_ext01_YourTextureName.paa",
			"RFFSHeli_S76_YourTextureName\data\S76_ext02_YourTextureName.paa",
			"RFFSHeli_S76_YourTextureName\data\S76_ext03_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_S76\data\S76_ext01.rvmat",
			"RFFSHeli_S76\data\S76_ext02.rvmat",
			"RFFSHeli_S76\data\S76_ext03.rvmat"
		};
		class Cargo
		{
			itemsCargoSize[]={10,60};
		};
	};
	class RFFSHeli_S76_DriverDoor;
	class RFFSHeli_S76_CodriverDoor;
	class RFFSHeli_S76_Cargo1;
	class RFFSHeli_S76_Cargo2;
		
	class RFFSHeli_S76_DriverDoor_YourTextureName: RFFSHeli_S76_DriverDoor
	{
		hiddenSelections[]=
		{
			"camo_ext01"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_S76_YourTextureName\data\S76_ext01_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_S76\data\S76_ext01.rvmat"
		};
	};
	class RFFSHeli_S76_CodriverDoor_YourTextureName: RFFSHeli_S76_CodriverDoor
	{
		hiddenSelections[]=
		{
			"camo_ext01"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_S76_YourTextureName\data\S76_ext01_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_S76\data\S76_ext01.rvmat"
		};
	};
	class RFFSHeli_S76_Cargo1_YourTextureName: RFFSHeli_S76_Cargo1
	{
		hiddenSelections[]=
		{
			"camo_ext01"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_S76_YourTextureName\data\S76_ext01_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_S76\data\S76_ext01.rvmat"
		};
	};
	class RFFSHeli_S76_Cargo2_YourTextureName: RFFSHeli_S76_Cargo2
	{
		hiddenSelections[]=
		{
			"camo_ext01"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_S76_YourTextureName\data\S76_ext01_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_S76\data\S76_ext01.rvmat"
		};
	};

	class RFFSHeli_S76_Wreck;
	class RFFSHeli_S76_YourTextureName_Wreck: RFFSHeli_S76_Wreck
	{
		hiddenSelections[]=
		{
			"camo_ext01",
			"camo_ext02",
			"camo_ext03"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_S76_YourTextureName\data\S76_ext01_YourTextureName.paa",
			"RFFSHeli_S76_YourTextureName\data\S76_ext02_YourTextureName.paa",
			"RFFSHeli_S76_YourTextureName\data\S76_ext03_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_S76\data\S76_ext01.rvmat",
			"RFFSHeli_S76\data\S76_ext02.rvmat",
			"RFFSHeli_S76\data\S76_ext03.rvmat"
		};
	};
};

