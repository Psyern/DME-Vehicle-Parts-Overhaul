class CfgPatches
{
	class DME_VehiclePlus
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Vehicles_Parts"
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;

	class CarBattery: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\battery_smallcar_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class TruckBattery: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\truck_bat.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\truck_bat.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\truck_bat_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\truck_bat_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\truck_bat_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class SparkPlug: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\sparkplug.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\sparkplug.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\sparkplug_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\sparkplug_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\sparkplug_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class GlowPlug: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\glowplug.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\glowplug.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\glowplug_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\glowplug_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\glowplug_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class CarRadiator: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 60000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\radiator_smallcar.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\radiator_smallcar.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\radiator_smallcar_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\radiator_smallcar_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\radiator_smallcar_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class SparkPlug_Plus: SparkPlug
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\sparkplug.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\sparkplug.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\sparkplug_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\sparkplug_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\sparkplug_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class GlowPlug_Plus: GlowPlug
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\glowplug.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\glowplug.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\glowplug_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\glowplug_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\glowplug_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class Battery9V: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
				};
			};
		};
	};

	class Battery9V_LL: Battery9V
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
				};
			};
		};
	};

	class Battery9V_Radioactive: Battery9V
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
				};
			};
		};
	};

	class TruckBattery_Duracell: TruckBattery
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\truck_bat.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\truck_bat.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\truck_bat_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\truck_bat_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\truck_bat_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class CarBattery_LL: CarBattery
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\battery_smallcar_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class CarBattery_Interstate: CarBattery
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\battery_smallcar_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class CarBattery_Kia: CarBattery
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\battery_smallcar_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class CarBattery_Kia2: CarBattery
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\battery_smallcar_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class CarBattery_Subaru: CarBattery
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\battery_smallcar_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class CarBattery_NeverDies: CarBattery
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\battery_smallcar_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class ExpansionHelicopterBattery: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\battery_smallcar_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class ExpansionAircraftBattery: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLevels[] =
					{
						{1.0, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.7, {"DZ\vehicles\parts\data\battery_smallcar.rvmat"}},
						{0.5, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.3, {"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"}},
						{0.0, {"DZ\vehicles\parts\data\battery_smallcar_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgMods
{
	class DME_VehiclePlus
	{
		dir = "DME-Vehicle-Parts-Overhaul";
		name = "DME Vehicle Parts Overhaul";
		type = "mod";
		author = "Psyern";
		version = "1.0";

		class defs
		{
			class gameScriptModule
			{
				files[] =
				{
					"DME-Vehicle-Parts-Overhaul/scripts/3_Game"
				};
			};

			class worldScriptModule
			{
				files[] =
				{
					"DME-Vehicle-Parts-Overhaul/scripts/4_World"
				};
			};

			class missionScriptModule
			{
				files[] =
				{
					"DME-Vehicle-Parts-Overhaul/scripts/5_Mission"
				};
			};
		};
	};
};
