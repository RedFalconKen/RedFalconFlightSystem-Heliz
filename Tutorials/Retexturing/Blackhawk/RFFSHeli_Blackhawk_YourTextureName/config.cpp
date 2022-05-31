class CfgPatches
{
	class RFFSHeli_Blackhawk_YourTextureName_Heli
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
			"RFFSHeli_Blackhawk_Heli",
			"RFFSHeli_Core"
		};
	};
};
class CfgMods
{
	class RFFSHeli_Blackhawk_YourTextureName_Heli
	{
		dir="RFFSHeli_Blackhawk_YourTextureName";
		hideName=0;
		hidePicture=0;
		name="RFFSHeli_Blackhawk_YourTextureName";
		credits="";
		author="RedFalcon";
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
					"RFFSHeli_Blackhawk_YourTextureName/scripts/4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class RFFSHeli_Blackhawk;
	class RFFSHeli_Blackhawk_YourTextureName: RFFSHeli_Blackhawk
	{
		scope=2;
		displayName="UH-60 Blackhawk - YourTextureName";
		hiddenSelections[]=
		{
			"camo_main",
			"camo_fuselage",
			"camo_rotor_panels"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Blackhawk_YourTextureName\data\YourTextureName_main_co.paa",
			"RFFSHeli_Blackhawk_YourTextureName\data\YourTextureName_fuselage_co.paa",
			"RFFSHeli_Blackhawk_YourTextureName\data\YourTextureName_rotor_panels_co.paa"			
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Blackhawk\data\main.rvmat",
			"RFFSHeli_Blackhawk\data\fuselage.rvmat",
			"RFFSHeli_Blackhawk\data\rotor_panels.rvmat"
		};
	};
	class RFFSHeli_Blackhawk_DriverDoor;
	class RFFSHeli_Blackhawk_CodriverDoor;
	class RFFSHeli_Blackhawk_Cargo1;
	class RFFSHeli_Blackhawk_Cargo1a;
	class RFFSHeli_Blackhawk_Cargo2;
	class RFFSHeli_Blackhawk_Cargo2a;
	class RFFSHeli_Blackhawk_Cargo3;
	class RFFSHeli_Blackhawk_Cargo4;

	class RFFSHeli_Blackhawk_DriverDoor_YourTextureName: RFFSHeli_Blackhawk_DriverDoor
	{
		hiddenSelections[]=
		{
			"camo_main"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Blackhawk_YourTextureName\data\YourTextureName_main_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Blackhawk\data\main.rvmat"
		};
	};
	class RFFSHeli_Blackhawk_CodriverDoor_YourTextureName: RFFSHeli_Blackhawk_CodriverDoor
	{
		hiddenSelections[]=
		{
			"camo_main"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Blackhawk_YourTextureName\data\YourTextureName_main_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Blackhawk\data\main.rvmat"
		};
	};
	class RFFSHeli_Blackhawk_Cargo1_YourTextureName: RFFSHeli_Blackhawk_Cargo1
	{
		hiddenSelections[]=
		{
			"camo_main"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Blackhawk_YourTextureName\data\YourTextureName_main_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Blackhawk\data\main.rvmat"
		};
	};
	class RFFSHeli_Blackhawk_Cargo1a_YourTextureName: RFFSHeli_Blackhawk_Cargo1a
	{
		hiddenSelections[]=
		{
			"camo_main"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Blackhawk_YourTextureName\data\YourTextureName_main_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Blackhawk\data\main.rvmat"
		};
	};
	class RFFSHeli_Blackhawk_Cargo2_YourTextureName: RFFSHeli_Blackhawk_Cargo2
	{
		hiddenSelections[]=
		{
			"camo_main"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Blackhawk_YourTextureName\data\YourTextureName_main_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Blackhawk\data\main.rvmat"
		};
	};
	class RFFSHeli_Blackhawk_Cargo2a_YourTextureName: RFFSHeli_Blackhawk_Cargo2a
	{
		hiddenSelections[]=
		{
			"camo_main"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Blackhawk_YourTextureName\data\YourTextureName_main_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Blackhawk\data\main.rvmat"
		};
	};
	class RFFSHeli_Blackhawk_Cargo3_YourTextureName: RFFSHeli_Blackhawk_Cargo3
	{
		hiddenSelections[]=
		{
			"camo_main"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Blackhawk_YourTextureName\data\YourTextureName_main_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Blackhawk\data\main.rvmat"
		};
	};
	class RFFSHeli_Blackhawk_Cargo4_YourTextureName: RFFSHeli_Blackhawk_Cargo4
	{
		hiddenSelections[]=
		{
			"camo_main"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Blackhawk_YourTextureName\data\YourTextureName_main_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Blackhawk\data\main.rvmat"
		};
	};	
	
	class RFFSHeli_Blackhawk_Wreck;
	class RFFSHeli_Blackhawk_YourTextureName_Wreck: RFFSHeli_Blackhawk_Wreck
	{
		hiddenSelections[]=
		{
			"camo_main",
			"camo_fuselage",
			"camo_rotor_panels"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Blackhawk_YourTextureName\data\YourTextureName_main_co.paa",
			"RFFSHeli_Blackhawk_YourTextureName\data\YourTextureName_fuselage_co.paa",
			"RFFSHeli_Blackhawk_YourTextureName\data\YourTextureName_rotor_panels_co.paa"	
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Blackhawk\data\main.rvmat",
			"RFFSHeli_Blackhawk\data\fuselage.rvmat",
			"RFFSHeli_Blackhawk\data\rotor_panels.rvmat"
		};
	};
};
