class CfgPatches
{
	class DME_VehiclePlus
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data"
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
		author = "DeadmansEcho";
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
