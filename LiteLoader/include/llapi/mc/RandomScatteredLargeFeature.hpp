/**
 * @file  RandomScatteredLargeFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomScatteredLargeFeature.
 *
 */
class RandomScatteredLargeFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSCATTEREDLARGEFEATURE
public:
    class RandomScatteredLargeFeature& operator=(class RandomScatteredLargeFeature const &) = delete;
    RandomScatteredLargeFeature(class RandomScatteredLargeFeature const &) = delete;
    RandomScatteredLargeFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   270690691
     */
    virtual ~RandomScatteredLargeFeature();
    /**
     * @vftbl  1
     * @symbol ?shouldAddHardcodedSpawnAreas@RandomScatteredLargeFeature@@UEBA_NXZ
     * @hash   923280348
     */
    virtual bool shouldAddHardcodedSpawnAreas() const;
    /**
     * @vftbl  2
     * @symbol ?shouldPostProcessMobs@RandomScatteredLargeFeature@@UEBA_NXZ
     * @hash   463274562
     */
    virtual bool shouldPostProcessMobs() const;
    /**
     * @vftbl  3
     * @symbol ?getNearestGeneratedFeature@RandomScatteredLargeFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_N@Z
     * @hash   1959472290
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @vftbl  4
     * @symbol ?initMobSpawnTypes@RandomScatteredLargeFeature@@UEAAXAEAVHardcodedSpawnAreaRegistry@@@Z
     * @hash   -1014755333
     */
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry &);
    /**
     * @vftbl  5
     * @symbol ?isFeatureChunk@RandomScatteredLargeFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     * @hash   1703027756
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @vftbl  6
     * @symbol ?createStructureStart@RandomScatteredLargeFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
     * @hash   1422359566
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @symbol ??0RandomScatteredLargeFeature@@QEAA@I@Z
     * @hash   724304660
     */
    MCAPI RandomScatteredLargeFeature(unsigned int);

};