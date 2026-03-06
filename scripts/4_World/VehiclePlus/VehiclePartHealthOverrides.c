static void VehiclePlusApplyHealthSettings(ItemBase item, float maxHealth)
{
	if (!GetGame().IsServer() || !item || maxHealth <= 0)
	{
		return;
	}

	item.SetMaxHealth("", "Health", maxHealth);
	item.SetHealth("", "Health", maxHealth);
}

modded class CarBattery
{
	override void EEInit()
	{
		super.EEInit();

		VehiclePlusConfig config = VehiclePlusConfigManager.GetConfig();
		VehiclePlusApplyHealthSettings(this, config.CarBattery);
	}
}

modded class TruckBattery
{
	override void EEInit()
	{
		super.EEInit();

		VehiclePlusConfig config = VehiclePlusConfigManager.GetConfig();
		VehiclePlusApplyHealthSettings(this, config.TruckBattery);
	}
}

modded class SparkPlug
{
	override void EEInit()
	{
		super.EEInit();

		VehiclePlusConfig config = VehiclePlusConfigManager.GetConfig();
		VehiclePlusApplyHealthSettings(this, config.SparkPlug);
	}
}

modded class GlowPlug
{
	override void EEInit()
	{
		super.EEInit();

		VehiclePlusConfig config = VehiclePlusConfigManager.GetConfig();
		VehiclePlusApplyHealthSettings(this, config.GlowPlug);
	}
}

modded class CarRadiator
{
	override void EEInit()
	{
		super.EEInit();

		VehiclePlusConfig config = VehiclePlusConfigManager.GetConfig();
		VehiclePlusApplyHealthSettings(this, config.CarRadiator);
	}
}
