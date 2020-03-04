#include "config_macros.hpp"

class CfgPatches {
    class ADDON {
        name = ADDON_NAME;
        author = "Thunder";
        units[] = {};
        requiredAddons[] = {"cba_events", "ace_advanced_fatigue"};
        VERSION_CONFIG;
    };
};

class CfgSettings {
    class CBA {
        class Versioning {
            class ADDON {
                main_addon = ADDON;
                class Dependencies {
                    CBA[] = {"cba_events", {3,13,0}, "true"};
                };
            };
        };
    };
};

class CfgFunctions {
    class ADDON {
        class ThirdPersonCamera {
            tag = QUOTE(ADDON);
            file = QUOTE(FUNCTION_PATH);
            class cameraThird {};
        };
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
    class ace_advanced_fatigue
	{
		init = "";
	};
};

class Extended_GetOutMan_EventHandlers {
    class CAManBase {
        class My_GetOut_eh {
            getOutMan = QUOTE(call COMPILE_FILE(XEH_getOutMan));
        };
    };
};

class Extended_Respawn_EventHandlers {
    class CAManBase {
        class My_Respawn_eh {
            respawn = QUOTE(call COMPILE_FILE(XEH_respawn));
        };
    };
};

class Extended_InitPost_EventHandlers {
    class CAManBase {
        class My_ManInitPost_eh {
            init = QUOTE(call COMPILE_FILE(XEH_manInit));
        };
    };
};

class Extended_PreStart_EventHandlers
{
	class ace_advanced_fatigue
	{
		init = "";
	};
};

class Extended_PreInit_EventHandlers
{
	class ace_advanced_fatigue
	{
		init = "";
	};
};

class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMission
	{
		ace_advanced_fatigue = "";
	};
};