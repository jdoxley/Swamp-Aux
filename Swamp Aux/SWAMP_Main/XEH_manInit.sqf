#include "config_macros.hpp"
#define COMPONENT PostInitMan
params ["_unit"];
_unit enableFatigue false;
_unit setCustomAimCoef 0.3;
_unit setUnitRecoilCoefficient 0.3;
_unit enableStamina false;