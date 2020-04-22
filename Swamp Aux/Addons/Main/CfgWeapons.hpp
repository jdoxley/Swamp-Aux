class cfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_atropine;
	class SWAMP_ItemCore: ACE_ItemCore {
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 1;
		};
	};
	class SWAMP_Atropine: ACE_atropine {
		scope = 2;
		author = "Thunder";
		// displayName = "Atropine Autoinjector";
		picture = QPATHTOF(data\tuktac.paa);
		// descriptionShort = "Used in NBC scenarios.";
		// descriptionUse = "A drug used by the Military in NBC scenarios.";
	};
	class SWAMP_DetectionKit: SWAMP_ItemCore {
		scope = 2;
		author = "Thunder";
		displayName = "Detection Kit";
		picture = QPATHTOF(data\cobou.paa);
		descriptionShort = "A kit used to detect.";
		descriptionUse = "Use to detect chemicals.";
		class ItemInfo: ItemInfo {
			mass = 5;
		};
	};
};