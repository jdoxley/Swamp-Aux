#include "script_component.hpp"
params ["_unit"];
if(_unit isEqualTo player) then {_unit switchCamera "INTERNAL"};
