class ACE_Medical_Treatment_Actions {
	class Morphine;
	class Atropine:Morphine {
		displayName = "Inject Atropine";
		displayNameProgress = "Injecting Atropine...";
		items[] = {"SWAMP_Atropine"};
	};
	class Diagnose;
	class SWAMP_DetectionKit: Diagnose {
		displayName = "Detection Kit";
		displayNameProgress = "Using Detection Kit...";
		items[] = {"SWAMP_DetectionKit"};
	};
};