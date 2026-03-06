static void VehiclePlusApplyHealthSettings(ItemBase item, float desiredMax)
{
	if (!GetGame().IsServer() || !item || desiredMax <= 0)
	{
		return;
	}

	float configMax = item.GetMaxHealth("", "Health");
	if (configMax <= 0)
	{
		return;
	}

	// Preserve the item's current health percentage so existing items
	// don't appear broken after the mod raises max hitpoints.
	// Example: 50% of old 250 HP = 125 HP  ->  50% of new 20000 HP = 10000 HP
	float healthPct = item.GetHealth01("", "Health");

	// Cap the target max to what config.cpp actually defines.
	float effectiveMax = desiredMax;
	if (effectiveMax > configMax)
	{
		effectiveMax = configMax;
	}

	float newHealth = healthPct * effectiveMax;
	item.SetHealth("", "Health", newHealth);
}

modded class CarBattery
{
	override void EEInit()
	{
		super.EEInit();

		VehiclePlusConfig config = VehiclePlusConfigManager.GetConfig();
		string type = GetType();

		if (type == "CarBattery_LL")
		{
			VehiclePlusApplyHealthSettings(this, config.CarBattery_LL);
		}
		else if (type == "CarBattery_Interstate")
		{
			VehiclePlusApplyHealthSettings(this, config.CarBattery_Interstate);
		}
		else if (type == "CarBattery_Kia")
		{
			VehiclePlusApplyHealthSettings(this, config.CarBattery_Kia);
		}
		else if (type == "CarBattery_Kia2")
		{
			VehiclePlusApplyHealthSettings(this, config.CarBattery_Kia2);
		}
		else if (type == "CarBattery_Subaru")
		{
			VehiclePlusApplyHealthSettings(this, config.CarBattery_Subaru);
		}
		else if (type == "CarBattery_NeverDies")
		{
			VehiclePlusApplyHealthSettings(this, config.CarBattery_NeverDies);
		}
		else
		{
			VehiclePlusApplyHealthSettings(this, config.CarBattery);
		}
	}
}

modded class TruckBattery
{
	override void EEInit()
	{
		super.EEInit();

		VehiclePlusConfig config = VehiclePlusConfigManager.GetConfig();

		if (GetType() == "TruckBattery_Duracell")
		{
			VehiclePlusApplyHealthSettings(this, config.TruckBattery_Duracell);
		}
		else
		{
			VehiclePlusApplyHealthSettings(this, config.TruckBattery);
		}
	}
}

modded class SparkPlug
{
	override void EEInit()
	{
		super.EEInit();

		VehiclePlusConfig config = VehiclePlusConfigManager.GetConfig();

		if (GetType() == "SparkPlug_Plus")
		{
			VehiclePlusApplyHealthSettings(this, config.SparkPlugPlus);
		}
		else
		{
			VehiclePlusApplyHealthSettings(this, config.SparkPlug);
		}
	}
}

modded class GlowPlug
{
	override void EEInit()
	{
		super.EEInit();

		VehiclePlusConfig config = VehiclePlusConfigManager.GetConfig();

		if (GetType() == "GlowPlug_Plus")
		{
			VehiclePlusApplyHealthSettings(this, config.GlowPlugPlus);
		}
		else
		{
			VehiclePlusApplyHealthSettings(this, config.GlowPlug);
		}
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

modded class Battery9V
{
	override void EEInit()
	{
		super.EEInit();

		VehiclePlusConfig config = VehiclePlusConfigManager.GetConfig();
		string type = GetType();

		if (type == "Battery9V_LL")
		{
			VehiclePlusApplyHealthSettings(this, config.Battery9V_LL);
		}
		else if (type == "Battery9V_Radioactive")
		{
			VehiclePlusApplyHealthSettings(this, config.Battery9V_Radioactive);
		}
	}
}
