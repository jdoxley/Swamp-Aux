#include "script_component.hpp"

LOG("Event Created");
["cameraView", {
	params ["_unit", "_newCameraMode"];
	if(profileNamespace getVariable ["SWAMP_ThirdPersonDisable", false]) exitWith {};
	if(_newCameraMode isEqualTo "EXTERNAL") then {
		if(vehicle _unit != _unit) then {
			LOG("In a vic");
		}
		else {
			LOG("Not in a vic");
			_unit switchCamera "INTERNAL";
			};
	};
	LOG("Event Fired");
}] call CBA_fnc_addPlayerEventHandler;
