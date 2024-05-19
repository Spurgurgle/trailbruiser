class CfgMods 
{
	class TrailBruiser
	{
		dir = "TrailTester";
		picture = "TrailTester\vehicles\trailtester\TrailTester_thumbnail.edds";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "TrailBruiser";
		credits = "MrNehr";
		author = "Spurgle";
		authorID = "0";
		version = 1.7;
		extra = 0;
		type = "mod";
		dependencies[] = {"Game", "World", "Mission"};	
		class defs 
		{
			class gameScriptModule
			{Value="";
			files[] = {"TrailTester\Scripts\3_Game"};
			};
			class worldScriptModule 
			{
				value = "";
				files[] = {"TrailTester\Scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"TrailTester\Scripts\5_Mission"};
			};

		};
	};
};
class CfgPatches
{
	class TrailBruiser
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class AnimalBase;
	class Animal_BosTaurus: AnimalBase
	{
		class Skinning
		{
			class ObtainedSkull
			{
				item="Bruiser_Skull";
				count=1;
				quantityMinMaxCoef[]={0.80000001,1};
				transferToolDamageCoef=1;
			};
		};
	};
};
