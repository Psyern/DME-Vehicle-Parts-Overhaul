# DME Vehicle Parts Overhaul

DayZ server mod that lets you configure health values for vehicle parts via a JSON config file loaded at server start.

## Config Location

On server startup the mod creates this file (if it does not exist):

```
profiles/DeadmansEcho/VehiclePlus/VehiclePlus.json
```

Default content:

```json
{
  "ConfigVersion": 3,
  "CarBattery": 5000,
  "TruckBattery": 8000,
  "SparkPlug": 2000,
  "GlowPlug": 2000,
  "CarRadiator": 6000,
  "SparkPlugPlus": 2000,
  "GlowPlugPlus": 2000,
  "Battery9V_LL": 500,
  "Battery9V_Radioactive": 5000,
  "TruckBattery_Duracell": 8000,
  "CarBattery_LL": 5000,
  "CarBattery_Interstate": 5000,
  "CarBattery_Kia": 5000,
  "CarBattery_Kia2": 5000,
  "CarBattery_Subaru": 5000,
  "CarBattery_NeverDies": 5000,
  "ExpansionHelicopterBattery": 5000,
  "ExpansionAircraftBattery": 5000
}
```

If `ConfigVersion` is missing or outdated the config is migrated automatically — existing values are preserved, new fields are added with their defaults.

## Overridden Classes

| Class | JSON Key | Default | Max (config.cpp) |
|---|---|---|---|
| CarBattery | `CarBattery` | 5000 | 5000 |
| CarBattery_LL | `CarBattery_LL` | 5000 | 5000 |
| CarBattery_Interstate | `CarBattery_Interstate` | 5000 | 5000 |
| CarBattery_Kia | `CarBattery_Kia` | 5000 | 5000 |
| CarBattery_Kia2 | `CarBattery_Kia2` | 5000 | 5000 |
| CarBattery_Subaru | `CarBattery_Subaru` | 5000 | 5000 |
| CarBattery_NeverDies | `CarBattery_NeverDies` | 5000 | 5000 |
| TruckBattery | `TruckBattery` | 8000 | 8000 |
| TruckBattery_Duracell | `TruckBattery_Duracell` | 8000 | 8000 |
| SparkPlug | `SparkPlug` | 2000 | 2000 |
| SparkPlug_Plus | `SparkPlugPlus` | 2000 | 2000 |
| GlowPlug | `GlowPlug` | 2000 | 2000 |
| GlowPlug_Plus | `GlowPlugPlus` | 2000 | 2000 |
| CarRadiator | `CarRadiator` | 6000 | 6000 |
| Battery9V_LL | `Battery9V_LL` | 500 | 500 |
| Battery9V_Radioactive | `Battery9V_Radioactive` | 5000 | 5000 |
| ExpansionHelicopterBattery | `ExpansionHelicopterBattery` | 5000 | 5000 |
| ExpansionAircraftBattery | `ExpansionAircraftBattery` | 5000 | 5000 |

Each item reads the JSON value during `EEInit` on the server and sets its health accordingly while preserving the current health percentage.

## ⚠️ Maximum Health Limit

The **Max** column in the table above is the hard ceiling defined in `config.cpp`. This value is what DayZ reports via `GetMaxHealth()` and is what the game displays as the item's maximum health.

**Important:**
- You can **lower** any JSON value below the config.cpp max freely (e.g. set `CarBattery` to `3000`).
- You **cannot raise** a JSON value above the config.cpp max. Values exceeding the limit are silently capped to the maximum.
- To increase the hard ceiling you must edit `config.cpp` in the PBO and rebuild it.

This is a DayZ engine limitation — `GetMaxHealth()` always returns the `config.cpp` hitpoints value and cannot be changed at runtime.

## Expansion Compatibility

Helicopter and aircraft battery overrides (`ExpansionHelicopterBattery`, `ExpansionAircraftBattery`) are wrapped in `#ifdef EXPANSIONMODVEHICLE` and only compile when the Expansion Vehicles mod is loaded.

## Requirements

- DayZ Standalone Server
- [DayZ Expansion](https://steamcommunity.com/sharedfiles/filedetails/?id=2116157322) (optional, for helicopter/aircraft batteries)
