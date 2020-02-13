#define DEBUG_MODE_NORMAL
#include "\x\cba\addons\main\script_macros_common.hpp"
#define ADDON SWAMP_Main
#define AUTHOR Thunder
#define ADDON_NAME Thrid Person Vic
#define FUNC(name) ADDON##_fnc_##name
#define QUOTE(target) #target
#define FUNCTION_PATH ADDON##\functions
#define COMPILE_FILE(name) compile preprocessFileLineNumbers 'ADDON\##name##.sqf'
#define GVAR(name) ADDON##_##name
#define PREFIX SWAMP


