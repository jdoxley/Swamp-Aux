#include "script_component.hpp"
params ["_unit"];
if(!(_unit isEqualTo player)) exitWith {}; 
waitUntil{alive player};
LOG("Player alive");
player enableFatigue false;
player setCustomAimCoef 0.3;
player setUnitRecoilCoefficient 0.3;
player enableStamina false;