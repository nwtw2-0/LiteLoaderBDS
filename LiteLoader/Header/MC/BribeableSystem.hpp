// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/BribeableSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BribeableSystem : public ITickingSystem {
#include "Extra/BribeableSystemAPI.hpp"
public:
    virtual ~BribeableSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};