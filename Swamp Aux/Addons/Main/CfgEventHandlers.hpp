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
	// class SWAMP_Settings
	// {
	// 	init = QUOTE(call COMPILE_FILE(XEH_preInit));
	// };

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