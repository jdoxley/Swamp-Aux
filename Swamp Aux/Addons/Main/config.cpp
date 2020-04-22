#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "Thunder";
        units[] = {};
        requiredAddons[] = {"cba_events", "ace_advanced_fatigue", "ace_medical", "ace_interaction", "cba_common"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
#include "CfgFunctions.hpp"


// class CfgSettings {
//     class CBA {
//         class Versioning {
//             class SWAMPAUX {
//                 class dependencies {
//                     CBA[] = {"cba_events", {3,13,0}, "true"};
//                 };
//             };
//         };
//     };
// };