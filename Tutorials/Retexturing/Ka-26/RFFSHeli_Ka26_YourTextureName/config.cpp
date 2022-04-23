class CfgPatches
{
	class RFFSHeli_Ka26_YourTextureName_Heli
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
			"RFFSHeli_Ka26_Heli",
			"RFFSHeli_Core"
		};
	};
};
class CfgMods
{
	class RFFSHeli_Ka26_YourTextureName_Heli
	{
		dir="RFFSHeli_Ka26_YourTextureName";
		hideName=0;
		hidePicture=0;
		name="RFFSHeli_Ka26_YourTextureName";
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
					"RFFSHeli_Ka26_YourTextureName/scripts/4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class RFFSHeli_Ka26;
	class RFFSHeli_Ka26_YourTextureName: RFFSHeli_Ka26
	{
		scope=2;
		displayName="Ka-26 Helicopter - YourTextureName";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext01_YourTextureName.paa",
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext02_YourTextureName.paa",
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext03_YourTextureName.paa",
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext04_YourTextureName.paa",
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext05_YourTextureName.paa"
		};
	};
	class RFFSHeli_Ka26_DriverDoor;
	class RFFSHeli_Ka26_CodriverDoor;
	class RFFSHeli_Ka26_Cargo1;
	class RFFSHeli_Ka26_Cargo2;
	
	class RFFSHeli_Ka26_DriverDoor_YourTextureName: RFFSHeli_Ka26_DriverDoor
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext01_YourTextureName.paa"
		};
	};
	class RFFSHeli_Ka26_CodriverDoor_YourTextureName: RFFSHeli_Ka26_CodriverDoor
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext01_YourTextureName.paa"
		};
	};
	class RFFSHeli_Ka26_Cargo1_YourTextureName: RFFSHeli_Ka26_Cargo1
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext01_YourTextureName.paa",
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext02_YourTextureName.paa"
		};
	};
	class RFFSHeli_Ka26_Cargo2_YourTextureName: RFFSHeli_Ka26_Cargo2
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext01_YourTextureName.paa",
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext02_YourTextureName.paa"
		};
	};


	class RFFSHeli_Ka26_Wreck;
	class RFFSHeli_Ka26_YourTextureName_Wreck: RFFSHeli_Ka26_Wreck
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext01_YourTextureName.paa",
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext02_YourTextureName.paa",
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext03_YourTextureName.paa",
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext02_YourTextureName.paa",
			"RFFSHeli_Ka26_YourTextureName\data\Ka26_ext03_YourTextureName.paa"
		};
	};
};

