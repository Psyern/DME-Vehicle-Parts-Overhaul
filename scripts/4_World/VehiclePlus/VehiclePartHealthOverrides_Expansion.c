#ifdef EXPANSIONMODVEHICLE
modded class ExpansionHelicopterBattery
{
	override void EEInit()
	{
		super.EEInit();

		VehiclePlusConfig config = VehiclePlusConfigManager.GetConfig();
		VehiclePlusApplyHealthSettings(this, config.ExpansionHelicopterBattery);
	}
}

modded class ExpansionAircraftBattery
{
	override void EEInit()
	{
		super.EEInit();

		VehiclePlusConfig config = VehiclePlusConfigManager.GetConfig();
		VehiclePlusApplyHealthSettings(this, config.ExpansionAircraftBattery);
	}
}
#endif
