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
	private static const int CURRENT_CONFIG_VERSION = 2;
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

		if (!loadedConfig)
		{
			s_Config = new VehiclePlusConfig();
			Save();
			return;
		}

		if (loadedConfig.ConfigVersion != CURRENT_CONFIG_VERSION)
		{
			// Migrate: keep existing values, fill missing fields with defaults.
			s_Config = new VehiclePlusConfig();
			s_Config.CarBattery = loadedConfig.CarBattery;
			s_Config.TruckBattery = loadedConfig.TruckBattery;
			s_Config.SparkPlug = loadedConfig.SparkPlug;
			s_Config.GlowPlug = loadedConfig.GlowPlug;
			s_Config.CarRadiator = loadedConfig.CarRadiator;
			s_Config.SparkPlugPlus = loadedConfig.SparkPlugPlus;
			s_Config.GlowPlugPlus = loadedConfig.GlowPlugPlus;
			s_Config.Battery9V_LL = loadedConfig.Battery9V_LL;
			s_Config.Battery9V_Radioactive = loadedConfig.Battery9V_Radioactive;
			s_Config.TruckBattery_Duracell = loadedConfig.TruckBattery_Duracell;
			s_Config.CarBattery_LL = loadedConfig.CarBattery_LL;
			s_Config.CarBattery_Interstate = loadedConfig.CarBattery_Interstate;
			s_Config.CarBattery_Kia = loadedConfig.CarBattery_Kia;
			s_Config.CarBattery_Kia2 = loadedConfig.CarBattery_Kia2;
			s_Config.CarBattery_Subaru = loadedConfig.CarBattery_Subaru;
			s_Config.CarBattery_NeverDies = loadedConfig.CarBattery_NeverDies;
			Save();
			return;
		}

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
