#include "src/ControlServer/Loadouts/OpeningLoadouts.hpp"

#include <array>

#include "src/ControlServer/Loadouts/ModConstants.hpp"

namespace Loadouts {

// =============================================================================
// Opening equipped loadouts — 5 independent builds per class, one per loadout
// profile (item_profile_id 1..5). Profile N's loadout pairs with profile N's
// skill tree (OpeningSkills.cpp) to form one coherent "Build N" the player can
// switch to and re-customize.
//
// Authoring: each per-class table below has 5 slots. Fill each with a curated
// build by copying the exact GearSlot rows you want out of ClassLoadouts.cpp.
// An empty slot means that profile spawns with nothing equipped (until the
// player equips from the bag). Omit equip_slot 14 (class device) —
// PinClassDeviceSlot14 owns it.
//
// Only Medic profile 1 is authored as the worked example. Everything else is
// empty and waiting to be filled in.
// =============================================================================

// Per-class table: index [loadout_slot - 1] = the build for that profile.
using OpeningTable = std::array<std::vector<GearSlot>, 5>;

static const OpeningTable kMedicOpening = {{
    {
        { 5800,  1,  SVID_MELEE,     Q_EPIC, Mods::Letters("ddd", "ddd", false) },  // Life Stealer
        { 4676,  2,  SVID_RANGED,    Q_EPIC, Mods::Letters("ppp", "ppp", false) },  // Pain Gun
        { 2906,  3,  SVID_SPECIALTY, Q_EPIC, Mods::Letters("hhh", "hhh", true)  },  // BFB
        { 7032,  5,  SVID_JETPACK,   Q_EPIC, Mods::Letters("ppp", "ppp", false) },  // Medic Crescent Jetpack
        { 2531,  7,  SVID_OFFHAND1,  Q_EPIC, Mods::Letters("ccc", "ccc", false) },  // Healing Grenade
        { 2376,  8,  SVID_OFFHAND2,  Q_EPIC, Mods::Letters("ccc", "ccc", false) },  // Healwave
        { 5808,  9,  SVID_OFFHAND3,  Q_EPIC, Mods::Letters("hhx", "hhh", false) },  // Triage Wave
        { 2773, 10,  SVID_MORALE,    Q_EPIC, Mods::Letters("mmm", "hhh", false) },  // Healing Boost
    }, // BFB
    {
        { 5800,  1,  SVID_MELEE,     Q_EPIC, Mods::Letters("ddd", "ddd", false) },  // Life Stealer
        { 4676,  2,  SVID_RANGED,    Q_EPIC, Mods::Letters("ppp", "ppp", false) },  // Pain Gun
        { 6898,  3,  SVID_SPECIALTY, Q_EPIC, Mods::Letters("hhh", "hhh", false) },  // Adrenaline or 7457
        { 7032,  5,  SVID_JETPACK,   Q_EPIC, Mods::Letters("ppp", "ppp", false) },  // Medic Crescent Jetpack
        { 2531,  7,  SVID_OFFHAND1,  Q_EPIC, Mods::Letters("ccc", "ccc", false) },  // Healing Grenade
        { 2376,  8,  SVID_OFFHAND2,  Q_EPIC, Mods::Letters("ccc", "ccc", false) },  // Healwave
        { 2246,  9,  SVID_OFFHAND3,  Q_EPIC, Mods::Letters("hhh", "hhh", false) },  // Regeneration
        { 2773, 10,  SVID_MORALE,    Q_EPIC, Mods::Letters("mmm", "hhh", false) },  // Healing Boost
    }, // Nanite
    {}, {},
    {
        { 5800,  1,  SVID_MELEE,     Q_EPIC, Mods::Letters("ddd", "ddd", false) },  // Life Stealer
        { 4676,  2,  SVID_RANGED,    Q_EPIC, Mods::Letters("ppp", "ppp", false) },  // Pain Gun
        { 2906,  3,  SVID_SPECIALTY, Q_EPIC, Mods::Letters("hhh", "hhh", true)  },  // BFB
        { 7032,  5,  SVID_JETPACK,   Q_EPIC, Mods::Letters("ppp", "ppp", false) },  // Medic Crescent Jetpack
        { 2168,  7,  SVID_OFFHAND1,  Q_EPIC, Mods::Letters("ccc", "ccc", false) },  // Poison Grenade
        { 3642,  8,  SVID_OFFHAND2,  Q_EPIC, Mods::Letters("ccc", "ccc", false) },  // Neutralize Wave
        { 2379,  9,  SVID_OFFHAND3,  Q_EPIC, Mods::Letters("ccc", "ccc", false) },  // Poison Aura
        { 5776, 10,  SVID_MORALE,    Q_EPIC, Mods::Letters("mmm", "ddd", false) },  // Oathbreaker Boost
    }, // Pain Gun
}};

// TODO author the other classes (each 5 profiles wide):
static const OpeningTable kRoboticsOpening = {{
    {
        { 5802,  1,  SVID_MELEE,     Q_EPIC, Mods::Letters("ddd", "ddd", false)    },  // Mace and Shield
        { 5798,  2,  SVID_RANGED,    Q_EPIC, Mods::Letters("ddd", "ddd", true)     },  // Harken SMG (OC)
        { 2918,  3,  SVID_SPECIALTY, Q_EPIC, Mods::Letters("hhh", "hhh", true)     },  // Focused Repair Arm (OC)
        { 7034,  5,  SVID_JETPACK,   Q_EPIC, Mods::Letters("ppp", "ppp", false)    },  // Robotics Crescent Jetpack
        { 2051,  7,  SVID_OFFHAND1,  Q_EPIC, Mods::Letters("nnn", "vnvnvn", true)  },  // Force Wall (OC)
        { 2066,  8,  SVID_OFFHAND2,  Q_EPIC, Mods::Letters("xxx", "hhh", false)    },  // Medical Station
        { 2300,  9,  SVID_OFFHAND3,  Q_EPIC, Mods::Letters("ddd", "ddd", false)    },  // Personal Turret
        { 2886, 10,  SVID_MORALE,    Q_EPIC, Mods::Letters("mmm", "vnvnvn", false) },  // Dome Shield Boost
    }, // PT
    {
        { 5802,  1,  SVID_MELEE,     Q_EPIC, Mods::Letters("ddd", "ddd", false)    },  // Mace and Shield
        { 5798,  2,  SVID_RANGED,    Q_EPIC, Mods::Letters("ddd", "ddd", true)     },  // Harken SMG (OC)
        { 2918,  3,  SVID_SPECIALTY, Q_EPIC, Mods::Letters("hhh", "hhh", true)     },  // Focused Repair Arm (OC)
        { 7034,  5,  SVID_JETPACK,   Q_EPIC, Mods::Letters("ppp", "ppp", false)    },  // Robotics Crescent Jetpack
        { 2051,  7,  SVID_OFFHAND1,  Q_EPIC, Mods::Letters("nnn", "vnvnvn", true)  },  // Force Wall (OC)
        { 2066,  8,  SVID_OFFHAND2,  Q_EPIC, Mods::Letters("xxx", "hhh", false)    },  // Medical Station
        { 2300,  9,  SVID_OFFHAND3,  Q_EPIC, Mods::Letters("ddd", "ddd", false)    },  // Personal Turret
        { 2886, 10,  SVID_MORALE,    Q_EPIC, Mods::Letters("mmm", "vnvnvn", false) },  // Dome Shield Boost
    }, // PT
    {}, {}, {}
}};
static const OpeningTable kAssaultOpening = {{
    {
        { 5801,  1,  SVID_MELEE,     Q_EPIC, Mods::Letters("ddd", "ddd", false)  },  // Impact Hammer
        { 5788,  2,  SVID_RANGED,    Q_EPIC, Mods::Letters("ddd", "ddd", true)   },  // Rhino SMG (OC)
        { 2914,  3,  SVID_SPECIALTY, Q_EPIC, Mods::Letters("ddd", "ddd", true)   },  // Inferno-X Cannon (OC)
        { 7031,  5,  SVID_JETPACK,   Q_EPIC, Mods::Letters("ppp", "ppp", false)  },  // Assault Crescent Jetpack
        { 2498,  7,  SVID_OFFHAND1,  Q_EPIC, Mods::Letters("ddd", "ddd", true)   },  // Concussion Grenade (OC)
        { 3699,  8,  SVID_OFFHAND2,  Q_EPIC, Mods::Letters("ccc", "ccc", false)  },  // Power Stim
        { 2013,  9,  SVID_OFFHAND3,  Q_EPIC, Mods::Letters("ccc", "ccc", false)  },  // Range Shield
        { 5775, 10,  SVID_MORALE,    Q_EPIC, Mods::Letters("mmm", "ddd", false)  },  // Super Smash Boost
    }, // DPS
    {
        { 5801,  1,  SVID_MELEE,     Q_EPIC, Mods::Letters("ddd", "ddd", false)  },  // Impact Hammer
        { 5788,  2,  SVID_RANGED,    Q_EPIC, Mods::Letters("ddd", "ddd", true)   },  // Rhino SMG (OC)
        { 2914,  3,  SVID_SPECIALTY, Q_EPIC, Mods::Letters("ddd", "ddd", true)   },  // Inferno-X Cannon (OC)
        { 7031,  5,  SVID_JETPACK,   Q_EPIC, Mods::Letters("ppp", "ppp", false)  },  // Assault Crescent Jetpack
        { 2498,  7,  SVID_OFFHAND1,  Q_EPIC, Mods::Letters("ddd", "ddd", true)   },  // Concussion Grenade (OC)
        { 2004,  8,  SVID_OFFHAND2,  Q_EPIC, Mods::Letters("ccc", "ccc", false)  },  // AoE Shield
        { 2013,  9,  SVID_OFFHAND3,  Q_EPIC, Mods::Letters("ccc", "ccc", false)  },  // Range Shield
        { 2838, 10,  SVID_MORALE,    Q_EPIC, Mods::Letters("mmm", "", false)     },  // Protection Boost
    }, // Tank
    {},
    {
        { 5801,  1,  SVID_MELEE,     Q_EPIC, Mods::Letters("ddd", "ddd", false)  },  // Impact Hammer
        { 5788,  2,  SVID_RANGED,    Q_EPIC, Mods::Letters("ddd", "ddd", true)   },  // Rhino SMG (OC)
        { 1991,  3,  SVID_SPECIALTY, Q_EPIC, Mods::Letters("ddd", "ddd", true)   },  // Headhunter Launcher (OC)
        { 7031,  5,  SVID_JETPACK,   Q_EPIC, Mods::Letters("ppp", "ppp", false)  },  // Assault Crescent Jetpack
        { 2498,  7,  SVID_OFFHAND1,  Q_EPIC, Mods::Letters("ddd", "ddd", true)   },  // Concussion Grenade (OC)
        { 3699,  8,  SVID_OFFHAND2,  Q_EPIC, Mods::Letters("ccc", "ccc", false)  },  // Power Stim
        { 2013,  9,  SVID_OFFHAND3,  Q_EPIC, Mods::Letters("ccc", "ccc", false)  },  // Range Shield
        { 5775, 10,  SVID_MORALE,    Q_EPIC, Mods::Letters("mmm", "ddd", false)  },  // Super Smash Boost
    }, // Headhunter
    {}
}};
// static const OpeningTable kReconOpening    = {{ {...}, {}, {}, {}, {} }};

static const std::vector<GearSlot> kEmpty = {};

const std::vector<GearSlot>& GetOpeningLoadout(uint32_t profile_id, int loadout_slot) {
    if (loadout_slot < 1 || loadout_slot > 5) return kEmpty;
    switch (profile_id) {
        case PROFILE_MEDIC:    return kMedicOpening[loadout_slot - 1];
        case PROFILE_ROBOTICS: return kRoboticsOpening[loadout_slot - 1];
        case PROFILE_ASSAULT:  return kAssaultOpening[loadout_slot - 1];
        // case PROFILE_RECON:    return kReconOpening[loadout_slot - 1];
        default:               return kEmpty;
    }
}

}  // namespace Loadouts
