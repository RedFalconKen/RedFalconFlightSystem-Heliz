class CfgPatches
{
	class RFFSHeli_Bo105m_YourTextureName_Heli
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
			"RFFSHeli_Bo105m_Heli",
			"RFFSHeli_Core"
		};
	};
};
class CfgMods
{
	class RFFSHeli_Bo105m_YourTextureName_Heli
	{
		dir="RFFSHeli_Bo105m_YourTextureName";
		hideName=0;
		hidePicture=0;
		name="RFFSHeli_Bo105m_YourTextureName";
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
					"RFFSHeli_Bo105m_YourTextureName/scripts/4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class RFFSHeli_Bo105m;
	class RFFSHeli_Bo105m_YourTextureName: RFFSHeli_Bo105m
	{
		scope=2;
		displayName="MBB Bo-105m Helicopter - YourTextureName";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo_glass"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e01_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e02_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e03_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\glass_color_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bo105m\data\bo105m_e01_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m_e02_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m_e03_YourTextureNamervmat",
			"RFFSHeli_Bo105m\data\bo105m.rvmat"
		};
		class Cargo
		{
			itemsCargoSize[]={10,60};
		};
	};
	class RFFSHeli_Bo105m_DriverDoor;
	class RFFSHeli_Bo105m_CodriverDoor;
	class RFFSHeli_Bo105m_Cargo1;
	class RFFSHeli_Bo105m_Cargo2;
	class RFFSHeli_Bo105m_Cargo3;
	class RFFSHeli_Bo105m_Cargo4;
	class RFFSHeli_Bo105m_fuselage;
	
	class RFFSHeli_Bo105m_fuselage_YourTextureName: RFFSHeli_Bo105m_fuselage
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo_glass"			
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e01_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e02_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e03_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\glass_color_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bo105m\data\bo105m_e01_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m_e02_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m_e03_YourTextureNamervmat",
			"RFFSHeli_Bo105m\data\bo105m.rvmat"
		};
	};		
	class RFFSHeli_Bo105m_DriverDoor_YourTextureName: RFFSHeli_Bo105m_DriverDoor
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo_glass"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e01_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e02_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\glass_color_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bo105m\data\bo105m_e01_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m_e02_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m.rvmat"
		};
	};
	class RFFSHeli_Bo105m_CodriverDoor_YourTextureName: RFFSHeli_Bo105m_CodriverDoor
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo_glass"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e01_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e02_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\glass_color_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bo105m\data\bo105m_e01_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m_e02_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m.rvmat"
		};
	};
	class RFFSHeli_Bo105m_Cargo1_YourTextureName: RFFSHeli_Bo105m_Cargo1
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo_glass"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e01_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e02_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\glass_color_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bo105m\data\bo105m_e01_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m_e02_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m.rvmat"
		};
	};
	class RFFSHeli_Bo105m_Cargo2_YourTextureName: RFFSHeli_Bo105m_Cargo2
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo_glass"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e01_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e02_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\glass_color_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bo105m\data\bo105m_e01_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m_e02_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m.rvmat"
		};
	};
	class RFFSHeli_Bo105m_Cargo3_YourTextureName: RFFSHeli_Bo105m_Cargo3
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e01_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e02_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bo105m\data\bo105m_e01_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m_e02_YourTextureName.rvmat"
		};
	};
	class RFFSHeli_Bo105m_Cargo4_YourTextureName: RFFSHeli_Bo105m_Cargo4
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e01_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e02_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bo105m\data\bo105m_e01_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m_e02_YourTextureName.rvmat"
		};
	};

	class RFFSHeli_Bo105m_Wreck;
	class RFFSHeli_Bo105m_YourTextureName_Wreck: RFFSHeli_Bo105m_Wreck
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e01_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e02_YourTextureName.paa",
			"RFFSHeli_Bo105m_YourTextureName\data\bo105m_e03_YourTextureName.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bo105m\data\bo105m_e01_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m_e02_YourTextureName.rvmat",
			"RFFSHeli_Bo105m\data\bo105m_e03_YourTextureNamervmat"
		};
	};
};

