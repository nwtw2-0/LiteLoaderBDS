// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_COMBATREGENERATIONLISTENER
#include "Extra/CombatRegenerationListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMBATREGENERATIONLISTENER
class CombatRegenerationListener {
#include "Extra/CombatRegenerationListenerAPI.hpp"
public:
    /*0*/ virtual ~CombatRegenerationListener();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void unk_vfn_5();
    /*6*/ virtual void unk_vfn_6();
    /*7*/ virtual void unk_vfn_7();
    /*8*/ virtual void unk_vfn_8();
    /*9*/ virtual int /*enum EventResult*/ onActorDeath(class Actor&, class ActorDamageSource const&, int /*enum ActorType*/);
};