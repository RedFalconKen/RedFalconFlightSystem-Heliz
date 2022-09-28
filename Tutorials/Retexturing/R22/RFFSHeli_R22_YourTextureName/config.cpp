class CfgPatches
{
	class RFFSHeli_R22_YourTextureName_Heli
	{
		units[]={};
		weapons[]={};
		requiyourtexturenameVersion=0.1;
		requiyourtexturenameAddons[]=
		{
			"DZ_Vehicles_Parts",
			"DZ_Vehicles_Wheeled",
			"DZ_Scripts",
			"DZ_Data",
			"RFFSHeli_R22_Heli",
			"RFFSHeli_Core"
		};
	};
};
class CfgMods
{
	class RFFSHeli_R22_YourTextureName_Heli
	{
		dir="RFFSHeli_R22_YourTextureName";
		hideName=0;
		hidePicture=0;
		name="RFFSHeli_R22_YourTextureName";
		cyourtexturenameits="";
		author="YourTextureNameFalcon";
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
					"RFFSHeli_R22_YourTextureName/scripts/4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class RFFSHeli_R22;
	class RFFSHeli_R22_YourTextureName: RFFSHeli_R22
	{
		scope=2;
		displayName="Robinson R22 Helicopter - YourTextureName";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_R22_YourTextureName\data\body_yourtexturename_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_R22\data\body.rvmat"
		};
	};
	class RFFSHeli_R22_DriverDoor;
	class RFFSHeli_R22_CodriverDoor;

	class RFFSHeli_R22_DriverDoor_YourTextureName: RFFSHeli_R22_DriverDoor
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_R22_YourTextureName\data\body_yourtexturename_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_R22\data\body.rvmat"
		};
	};
	class RFFSHeli_R22_CodriverDoor_YourTextureName: RFFSHeli_R22_CodriverDoor
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_R22_YourTextureName\data\body_yourtexturename_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_R22\data\body.rvmat"
		};
	};

	class RFFSHeli_R22_Wreck;
	class RFFSHeli_R22_YourTextureName_Wreck: RFFSHeli_R22_Wreck
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_R22_YourTextureName\data\body_yourtexturename_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"rffsheli_R22\data\body_destruct.rvmat"
		};
	};
};
