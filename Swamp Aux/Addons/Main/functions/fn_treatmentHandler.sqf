#include "script_component.hpp"

["ace_treatmenSucceded", {
	params ["_medic", "_patient", "_bodyPart", "_classname"];

	if (!local _patient) exitWith {
		["ace_treatmentSucceded", _this, _patient] call CBA_fnc_targetEvent;
	};

	switch (_classname) do {
		case "SWAMP_Atropine": { 
			private _currentExposure = (_patient getVariable ["CBRN_exposure", 0]);
			private _newExposure = ((_currentExposure - 5) max 0);
			_patient setVariable ["CBRN_exposure", _newExposure];
			["CBRN_unitExposureLevelChanged", [_patient, _newExposure]] call CBA_fnc_localEvent;
		};
		case "SWAMP_DetectionKit": {
			[_medic, _patient] call FUNC(detectionKit);
		};
		default { };
	};
}] call CBA_fnc_addEventHandler;