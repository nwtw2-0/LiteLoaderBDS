/**
 * @file  EndPodiumFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EndPodiumFeature.
 *
 */
class EndPodiumFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDPODIUMFEATURE
public:
    class EndPodiumFeature& operator=(class EndPodiumFeature const &) = delete;
    EndPodiumFeature(class EndPodiumFeature const &) = delete;
    EndPodiumFeature() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~EndPodiumFeature();
    /**
     * @vtable 3
     * @symbol ?place@EndPodiumFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDPODIUMFEATURE
#endif
    /**
     * @symbol ??0EndPodiumFeature@@QEAA@_N@Z
     */
    MCAPI EndPodiumFeature(bool);
MCAPI static float const CORNER_ROUNDING;
MCAPI static class BlockPos const END_PODIUM_CHUNK_POSITION;
MCAPI static class BlockPos const END_PODIUM_LOCATION;
MCAPI static int const PODIUM_PILLAR_HEIGHT;
MCAPI static int const PODIUM_RADIUS;
MCAPI static int const RIM_RADIUS;

};