// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_DELTAFEATURE
#include "Extra/DeltaFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_DELTAFEATURE
class DeltaFeature : public Feature {
#include "Extra/DeltaFeatureAPI.hpp"
public:
    /*0*/ virtual ~DeltaFeature();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

private:
    MCAPI class std::optional<class BlockPos> _findDeltaLevel(class BlockSource&, class BlockPos) const;
    MCAPI bool _isValidPlacement(class BlockSource&, class BlockPos) const;
};