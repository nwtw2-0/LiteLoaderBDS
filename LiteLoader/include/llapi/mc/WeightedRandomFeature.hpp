/**
 * @file  WeightedRandomFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WeightedRandomFeature.
 *
 */
class WeightedRandomFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEIGHTEDRANDOMFEATURE
public:
    class WeightedRandomFeature& operator=(class WeightedRandomFeature const &) = delete;
    WeightedRandomFeature(class WeightedRandomFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1895880278
     */
    virtual ~WeightedRandomFeature();
    /**
     * @vftbl  1
     * @symbol ?place@WeightedRandomFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
     * @hash   1249613681
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @symbol ??0WeightedRandomFeature@@QEAA@XZ
     * @hash   1098428552
     */
    MCAPI WeightedRandomFeature();

};