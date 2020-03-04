#define COMPONENT GetOutMan
#include "config_macros.hpp"
params ["_unit"];
if(_unit isEqualTo player) then {_unit switchCamera "INTERNAL"};
