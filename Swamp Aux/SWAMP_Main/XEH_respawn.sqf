#define COMPONENT Respawn
#include "config_macros.hpp"
params ["_unit"];
if(!(_unit isEqualTo player)) exitWith {};
player enableFatigue false;
player setCustomAimCoef 0.3;
player setUnitRecoilCoefficient 0.3;
player enableStamina false;