// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/KelpFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class KelpFeature : public Feature {
#include "Extra/KelpFeatureAPI.hpp"
public:
    virtual ~KelpFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);
};