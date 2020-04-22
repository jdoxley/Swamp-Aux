#include "script_component.hpp"
params[
	["_unit",objNull,[objNull]],
	["_locals",[],[[]]]
];
_newPos = _locals # floor random count _locals;
_unit setPos getMarkerPos _newPos;