// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_FREEZINGSYSTEM
#include "Extra/FreezingSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_FREEZINGSYSTEM
class FreezingSystem {
#include "Extra/FreezingSystemAPI.hpp"
public:
    /*0*/ virtual ~FreezingSystem();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry&);

public:
    MCAPI static class mce::UUID const FREEZE_EFFECT_UUID;
    MCAPI static int const VULNERABLE_MOB_FREEZE_DAMAGE;
};