#include "script_component.hpp"
params [
	["_user", objNull, [objNull]],
	["_reciver", objNull]
];

if ('SWAMP_DetectionKit' in items _user) then {
	[_user, _reciver] call FUNC(detectionKit);
};