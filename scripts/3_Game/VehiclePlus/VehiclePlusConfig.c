class VehiclePlusConfig
{
	int ConfigVersion = 1;
	float CarBattery = 50000.0;
	float TruckBattery = 80000.0;
	float SparkPlug = 20000.0;
	float GlowPlug = 20000.0;
	float CarRadiator = 60000.0;
	float SparkPlugPlus = 200000.0;
	float GlowPlugPlus = 200000.0;
	float Battery9V_LL = 500.0;
	float Battery9V_Radioactive = 5000.0;
	float TruckBattery_Duracell = 80000.0;
	float CarBattery_LL = 50000.0;
	float CarBattery_Interstate = 50000.0;
	float CarBattery_Kia = 50000.0;
	float CarBattery_Kia2 = 50000.0;
	float CarBattery_Subaru = 50000.0;
	float CarBattery_NeverDies = 50000.0;
}

class VehiclePlusConfigManager
{
	private static const int CURRENT_CONFIG_VERSION = 1;
	private static const string DIRECTORY_ROOT = "$profile:DeadmansEcho";
	private static const string DIRECTORY_CONFIG = "$profile:DeadmansEcho\\VehiclePlus";
	private static const string CONFIG_PATH = "$profile:DeadmansEcho\\VehiclePlus\\VehiclePlus.json";

	private static ref VehiclePlusConfig s_Config;

	static VehiclePlusConfig GetConfig()
	{
		// Avoid implicit disk I/O here. Ensure a default instance exists.
		if (!s_Config)
		{
			s_Config = new VehiclePlusConfig();
			s_Config.ConfigVersion = CURRENT_CONFIG_VERSION;
		}

		return s_Config;
	}

	static void Load()
	{
		EnsureDirectory();

		if (!FileExist(CONFIG_PATH))
		{
			s_Config = new VehiclePlusConfig();
			Save();
			return;
		}

		ref VehiclePlusConfig loadedConfig = new VehiclePlusConfig();
		JsonFileLoader<VehiclePlusConfig>.JsonLoadFile(CONFIG_PATH, loadedConfig);

		if (!loadedConfig || loadedConfig.ConfigVersion != CURRENT_CONFIG_VERSION)
		{
			s_Config = new VehiclePlusConfig();
			Save();
			return;
		}

		// Accept loaded config.
		s_Config = loadedConfig;
	}

	static void Save()
	{
		if (!s_Config)
		{
			s_Config = new VehiclePlusConfig();
		}

		s_Config.ConfigVersion = CURRENT_CONFIG_VERSION;
		JsonFileLoader<VehiclePlusConfig>.JsonSaveFile(CONFIG_PATH, s_Config);
	}

	private static void EnsureDirectory()
	{
		if (!FileExist(DIRECTORY_ROOT))
		{
			MakeDirectory(DIRECTORY_ROOT);
		}

		if (!FileExist(DIRECTORY_CONFIG))
		{
			MakeDirectory(DIRECTORY_CONFIG);
		}
	}
}
