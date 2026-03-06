class CfgPatches
{
	class SparkPlugPlus
	{
		units[] = {"SparkPlug"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Vehicles_Parts"};
	};
};
class CfgMods
{
	class SparkPlugPlus
	{
		dir = "SparkPlugPlus";
		name = "SparkPlugPlus";
		author = "Deceased";
		authorID = "76561198147193612";
		version = "1.0";
		extra = 0;
		type = "mod";
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class SparkPlug: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SparkPlug0";
		descriptionShort = "Improved spark plug that lasts 100 times longer than the original one.";
		weight = 180;
		itemSize[] = {1,1};
		absorbency = 0;
		inventorySlot[] = {"SparkPlug"};
		rotationFlags = 12;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2000;
				};
			};
		};
	};
	class SparkPlug_Plus: SparkPlug
	{
		scope = 2;
		displayName = "Spark Plug Plus";
		descriptionShort = "The most durable spark plug ever made. Lasts 1000 times longer than a regular spark plug.";
		weight = 180;
		itemSize[] = { 1,1 };
		absorbency = 0;
		inventorySlot[] = { "SparkPlug" };
		rotationFlags = 12;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20000;
				};
			};
		};
	};
	class GlowPlug: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_GlowPlug0";
		descriptionShort = "Improved glow plug that lasts 100 times longer than the original one.";
		weight = 200;
		itemSize[] = { 1,2 };
		absorbency = 0;
		inventorySlot = "GlowPlug";
		rotationFlags = 12;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2000;
				};
			};
		};
	};
	class GlowPlug_Plus: GlowPlug
	{
		scope = 2;
		displayName = "Glow Plug Plus";
		descriptionShort = "The most durable glow plug ever made. Lasts 1000 times longer than a regular glow plug.";
		weight = 200;
		itemSize[] = { 1,2 };
		absorbency = 0;
		inventorySlot = "GlowPlug";
		rotationFlags = 12;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20000;
				};
			};
		};
	};
};
