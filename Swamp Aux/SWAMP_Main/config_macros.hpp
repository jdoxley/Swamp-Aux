#define DEBUG_MODE_NORMAL
#define PREFIX SWAMP
#include "\x\cba\addons\main\script_macros_common.hpp"
#include "version.hpp"
#define ADDON SWAMP_Main
#define AUTHOR Thunder
#define ADDON_NAME Swamp Aux
#define VERSION MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH
#define VERSION_AR MAJOR,MINOR,PATCH
#define FUNC(name) ADDON##_fnc_##name
#define QUOTE(target) #target
#define FUNCTION_PATH ADDON##\functions
#define COMPILE_FILE(name) compile preprocessFileLineNumbers 'ADDON\##name##.sqf'
#define GVAR(name) ADDON##_##name



