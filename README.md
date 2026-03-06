# DME Vehicle Parts Overhaul

DayZ server mod that increases durability for key vehicle parts and loads values from a JSON config at server start.

## Config location

On server startup, the mod ensures this path exists:

- `profiles/DeadmansEcho/VehiclePlus/VehiclePlus.json`

Default content:

```json
{
  "ConfigVersion": 1,
  "CarBattery": 50000,
  "TruckBattery": 80000,
  "SparkPlug": 20000,
  "GlowPlug": 20000,
  "CarRadiator": 60000
}
```

If `ConfigVersion` is missing or outdated, the config is recreated with defaults.

## Overridden classes

- `CarBattery`
- `TruckBattery`
- `SparkPlug`
- `GlowPlug`
- `CarRadiator`

Each item receives the configured max health during `EEInit` on the server.
