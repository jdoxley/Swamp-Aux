class ACE_SelfActions {
	class ACE_Equipment {
		class ADDON_EXCEPT {
			exceptions[] = {
				"isNotInside",
				"notOnMap"
			};
		};
		class ADDON: ADDON_EXCEPT {
			displayName = "Detection Kit";
			condition = "'SWAMP_DetectionKit' in items _player";
			class SWAMP_DetectionKit_CheckSelf: ADDON_EXCEPT{
				displayName = "Check Self";
				condition = "'SWAMP_DetectionKit' in items _player";
				statement = QUOTE([_player, _player] remoteExecCall ['FUNC(detectionKit)', 2]);
			};
			class SWAMP_DetectionKit_CheckArea: SWAMP_DetectionKit_CheckSelf {
				displayName = "Check Area";
				statement = QUOTE([_player] remoteExecCall ['FUNC(detectionKit)', 2]);
			};
		};
	};
};
class ACE_Actions {
	class ACE_MainActions {
		class ADDON_EXCEPT{
			exceptions[] = {
				"isNotInside",
				"notOnMap"
			};
		};
		class ADDON: ADDON_EXCEPT {
			displayName = "SWAMP";
			condition = "'SWAMP_DetectionKit' in items _player";
			class SWAMP_DetectionKit_CheckOther {
				displayName = "Detection Kit";
				condition = "'SWAMP_DetectionKit' in items _player";
				statement = QUOTE([_player, _target] remoteExecCall ['FUNC(detectionKit)', 2]);
				icon = "";
			};
		};
	};
};