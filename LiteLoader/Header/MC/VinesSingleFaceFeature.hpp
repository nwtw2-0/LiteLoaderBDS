// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_VINESSINGLEFACEFEATURE
#include "Extra/VinesSingleFaceFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_VINESSINGLEFACEFEATURE
class VinesSingleFaceFeature {
#include "Extra/VinesSingleFaceFeatureAPI.hpp"
public:
    /*0*/ virtual ~VinesSingleFaceFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
};