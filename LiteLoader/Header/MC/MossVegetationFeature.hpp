// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_MOSSVEGETATIONFEATURE
#include "Extra/MossVegetationFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOSSVEGETATIONFEATURE
class MossVegetationFeature : public Feature {
#include "Extra/MossVegetationFeatureAPI.hpp"
public:
    /*0*/ virtual ~MossVegetationFeature();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
};