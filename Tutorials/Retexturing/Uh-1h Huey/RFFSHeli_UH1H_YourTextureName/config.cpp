class CfgPatches
{
	class RFFSHeli_UH1H_YourTextureName_Heli
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
			"RFFSHeli_UH1H_Heli",
			"RFFSHeli_Core"
		};
	};
};
class CfgMods
{
	class RFFSHeli_UH1H_YourTextureName_Heli
	{
		dir="RFFSHeli_UH1H_YourTextureName";
		hideName=0;
		hidePicture=0;
		name="RFFSHeli_UH1H_YourTextureName";
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
					"RFFSHeli_UH1H_YourTextureName/scripts/4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class RFFSHeli_UH1H;
	class RFFSHeli_UH1H_YourTextureName: RFFSHeli_UH1H
	{
		scope=2;
		displayName="UH-1H Helicopter - YourTextureName";
		hiddenSelections[]=
		{
			"camo_body",
			"camo_door_int"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_UH1H_YourTextureName\data\UH1H_body_YourTextureName.paa",
			"RFFSHeli_UH1H_YourTextureName\data\UH1H_door_int_YourTextureName.paa"
		};
	};
	class RFFSHeli_UH1H_DriverDoor;
	class RFFSHeli_UH1H_CodriverDoor;
	class RFFSHeli_UH1H_Cargo1;
	class RFFSHeli_UH1H_Cargo2;
	class RFFSHeli_UH1H_Cargo1a;
	class RFFSHeli_UH1H_Cargo2a;
		
	class RFFSHeli_UH1H_DriverDoor_YourTextureName: RFFSHeli_UH1H_DriverDoor
	{
		hiddenSelections[]=
		{
			"camo_door_int"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_UH1H_YourTextureName\data\UH1H_door_int_YourTextureName.paa"
		};
	};
	class RFFSHeli_UH1H_CodriverDoor_YourTextureName: RFFSHeli_UH1H_CodriverDoor
	{
		hiddenSelections[]=
		{
			"camo_door_int"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_UH1H_YourTextureName\data\UH1H_door_int_YourTextureName.paa"
		};
	};
	class RFFSHeli_UH1H_Cargo1_YourTextureName: RFFSHeli_UH1H_Cargo1
	{
		hiddenSelections[]=
		{
			"camo_door_int"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_UH1H_YourTextureName\data\UH1H_door_int_YourTextureName.paa"
		};
	};
	class RFFSHeli_UH1H_Cargo2_YourTextureName: RFFSHeli_UH1H_Cargo2
	{
		hiddenSelections[]=
		{
			"camo_door_int"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_UH1H_YourTextureName\data\UH1H_door_int_YourTextureName.paa"
		};
	};
	class RFFSHeli_UH1H_Cargo1a_YourTextureName: RFFSHeli_UH1H_Cargo1a
	{
		hiddenSelections[]=
		{
			"camo_door_int"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_UH1H_YourTextureName\data\UH1H_door_int_YourTextureName.paa"
		};
	};
	class RFFSHeli_UH1H_Cargo2a_YourTextureName: RFFSHeli_UH1H_Cargo2a
	{
		hiddenSelections[]=
		{
			"camo_door_int"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_UH1H_YourTextureName\data\UH1H_door_int_YourTextureName.paa"
		};
	};

	class RFFSHeli_UH1H_Wreck;
	class RFFSHeli_UH1H_YourTextureName_Wreck: RFFSHeli_UH1H_Wreck
	{
		{
			"camo_body",
			"camo_door_int"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_UH1H_YourTextureName\data\UH1H_body_YourTextureName.paa",
			"RFFSHeli_UH1H_YourTextureName\data\UH1H_door_int_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_UH1H\data\body_destruct.rvmat",
			"RFFSHeli_UH1H\data\body_destruct.rvmat"
		};
	};
};

