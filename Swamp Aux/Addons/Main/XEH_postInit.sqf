#include "script_component.hpp"
[] call FUNC(cameraThird);
LOG("Script Launched");
[
	"Swamp Aux",
	"check_self_exposure",
	"Check self exposure",
	{[player, player] call FUNC(keybindDetectionKit)},
	""
] call CBA_fnc_addKeybind;
[
	"Swamp Aux",
	"check_area_exposure",
	"Check area exposure",
	{[player] call FUNC(keybindDetectionKit)},
	""
] call CBA_fnc_addKeybind;
LOG("Keybinds Registered");