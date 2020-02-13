#include "config_macros.hpp"

class CfgPatches {
    class ADDON {
        name = ADDON_NAME;
        author = "Thunder";
        units[] = {};
        requiredAddons[] = {"cba_events"};
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