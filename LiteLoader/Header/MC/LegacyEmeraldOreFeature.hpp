// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_LEGACYEMERALDOREFEATURE
#include "Extra/LegacyEmeraldOreFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_LEGACYEMERALDOREFEATURE
class LegacyEmeraldOreFeature : public Feature {
#include "Extra/LegacyEmeraldOreFeatureAPI.hpp"
public:
    /*0*/ virtual ~LegacyEmeraldOreFeature();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
};