#include "script_component.hpp"
LOG("detection kit start");
if(!isServer) then {["This function must be executed on the server!"] call BIS_fnc_error};
params [
	["_user", objNull, [objNull]],
	["_reciver", objNull]
];
_checkingArea = isNull _reciver;
if (_checkingArea) then {
	LOG("Checking Area");
	results = [getPos _user] call FUNC(isAreaContaminated);
	if (results # 0) exitWith {
		["CS Gas"] call ACE_common_fnc_displayText;
	};
	if (results # 1) exitWith {
		["Asphyxiant Gas"] call ACE_common_fnc_displayText;
	};
	if (results # 2) exitWith {
		["Nerve Agent"] call ACE_common_fnc_displayText;
	};
	["No Agent Detected"] call ACE_common_fnc_displayText;
} else {
	LOG("Check Self");
	private _contamination = _reciver getVariable ["CBRN_exposure",0];
	if (_contamination == 0) exitWith {
		["No exposure"] call ACE_common_fnc_displayText;
	};
	if (_contamination <=5) exitWith {
		["Low exposure"] call ACE_common_fnc_displayText;
	};
	if (_contamination <= 10) exitWith {
		["Medium exposure"] call ACE_common_fnc_displayText;
	};
	["High exposure"] call ACE_common_fnc_displayText;
};