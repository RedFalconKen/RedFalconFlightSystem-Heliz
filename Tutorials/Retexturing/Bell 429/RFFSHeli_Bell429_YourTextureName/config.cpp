class CfgPatches
{
	class RFFSHeli_Bell429_YourTextureName_Heli
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
			"RFFSHeli_Bell429_Heli",
			"RFFSHeli_Core"
		};
	};
};
class CfgMods
{
	class RFFSHeli_Bell429_YourTextureName_Heli
	{
		dir="RFFSHeli_Bell429_YourTextureName";
		hideName=0;
		hidePicture=0;
		name="RFFSHeli_Bell429_YourTextureName";
		credits="";
		author="You";
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
					"RFFSHeli_Bell429_YourTextureName/4_World"
				};
			};
		};
	};
};

class CfgVehicles
{
	class RFFSHeli_Bell429;
	class RFFSHeli_Bell429_YourTextureName: RFFSHeli_Bell429
	{
		scope=2;
		displayName="Bell 429 Helicopter - YourTextureName";
		hiddenSelections[]=
		{
			"camo",
			"camo_right"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_YourTextureName\data\body_YourTextureName_co.paa",
			"RFFSHeli_Bell429_YourTextureName\data\body_right_YourTextureName_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bell429\data\body.rvmat"
		};
		class Cargo
		{
			itemsCargoSize[]={10,60};
		};
	};

	class RFFSHeli_Bell429_DriverDoor;
	class RFFSHeli_Bell429_CodriverDoor;
	class RFFSHeli_Bell429_Cargo1;
	class RFFSHeli_Bell429_Cargo2;
	class RFFSHeli_Bell429_Cargo3;
	class RFFSHeli_Bell429_Cargo4;
	
	class RFFSHeli_Bell429_DriverDoor_YourTextureName: RFFSHeli_Bell429_DriverDoor	
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_YourTextureName\data\body_YourTextureName_co.paa"
		};
	};
	
	class RFFSHeli_Bell429_CodriverDoor_YourTextureName: RFFSHeli_Bell429_CodriverDoor
	{
		hiddenSelections[]=
		{
			"camo",
			"camo_right"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_YourTextureName\data\body_YourTextureName_co.paa",
			"RFFSHeli_Bell429_YourTextureName\data\body_right_YourTextureName_co.paa"
		};
	};
	
	class RFFSHeli_Bell429_Cargo1_YourTextureName: RFFSHeli_Bell429_Cargo1
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_YourTextureName\data\body_YourTextureName_co.paa"
		};
	};

	class RFFSHeli_Bell429_Cargo2_YourTextureName: RFFSHeli_Bell429_Cargo2
	{
		hiddenSelections[]=
		{
			"camo",
			"camo_right"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_YourTextureName\data\body_YourTextureName_co.paa",
			"RFFSHeli_Bell429_YourTextureName\data\body_right_YourTextureName_co.paa"
		};
	};
	
	class RFFSHeli_Bell429_Cargo3_YourTextureName: RFFSHeli_Bell429_Cargo3
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_YourTextureName\data\body_YourTextureName_co.paa"
		};
	};
	
	class RFFSHeli_Bell429_Cargo4_YourTextureName: RFFSHeli_Bell429_Cargo4
	{
		hiddenSelections[]=
		{
			"camo",
			"camo_right"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_YourTextureName\data\body_YourTextureName_co.paa",
			"RFFSHeli_Bell429_YourTextureName\data\body_right_YourTextureName_co.paa"
		};
	};

	class RFFSHeli_Bell429_Wreck;
	class RFFSHeli_Bell429_Wreck_YourTextureName: RFFSHeli_Bell429_Wreck
	{
		hiddenSelections[]=
		{
			"camo",
			"camo_right"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_YourTextureName\data\body_YourTextureName_co.paa",
			"RFFSHeli_Bell429_YourTextureName\data\body_right_YourTextureName_co.paa"
		};
	};	
};
