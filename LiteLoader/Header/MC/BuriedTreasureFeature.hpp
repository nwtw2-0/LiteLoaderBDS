/**
 * @file  BuriedTreasureFeature.hpp
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
 * @brief MC class BuriedTreasureFeature.
 *
 */
class BuriedTreasureFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BURIEDTREASUREFEATURE
public:
    class BuriedTreasureFeature& operator=(class BuriedTreasureFeature const &) = delete;
    BuriedTreasureFeature(class BuriedTreasureFeature const &) = delete;
    BuriedTreasureFeature() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~BuriedTreasureFeature();
    /**
     * @vtable 3
     * @symbol ?getNearestGeneratedFeature@BuriedTreasureFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_N@Z
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @vtable 5
     * @symbol ?isFeatureChunk@BuriedTreasureFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @vtable 6
     * @symbol ?createStructureStart@BuriedTreasureFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BURIEDTREASUREFEATURE
#endif
    /**
     * @symbol ??0BuriedTreasureFeature@@QEAA@I@Z
     */
    MCAPI BuriedTreasureFeature(unsigned int);

};