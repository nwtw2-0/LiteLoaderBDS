// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_CACTUSFEATURE
#include "Extra/CactusFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_CACTUSFEATURE
class CactusFeature : public Feature {
#include "Extra/CactusFeatureAPI.hpp"
public:
    /*0*/ virtual ~CactusFeature();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
};