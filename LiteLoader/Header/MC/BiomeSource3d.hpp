/**
 * @file  BiomeSource3d.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeSource3d.
 *
 */
class BiomeSource3d {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMESOURCE3D
public:
    class BiomeSource3d& operator=(class BiomeSource3d const &) = delete;
    BiomeSource3d(class BiomeSource3d const &) = delete;
    BiomeSource3d() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~BiomeSource3d();
    /**
     * @vtable 1
     * @symbol ?fillBiomes@BiomeSource3d@@UEBAXAEAVLevelChunk@@AEBVChunkLocalNoiseCache@@@Z
     */
    virtual void fillBiomes(class LevelChunk &, class ChunkLocalNoiseCache const &) const;
    /**
     * @vtable 2
     * @symbol ?getBiomeArea@BiomeSource3d@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
     */
    virtual class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    /**
     * @vtable 3
     * @symbol ?getBiomeArea@BiomeSource3d@@UEBA?AVBiomeArea@@AEBVBoundingBox@@IAEBUGetBiomeOptions@@@Z
     */
    virtual class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int, struct GetBiomeOptions const &) const;
    /**
     * @vtable 4
     * @symbol ?containsOnly@BiomeSource3d@@UEBA_NHHHHV?$span@$$CBH$0?0@gsl@@@Z
     */
    virtual bool containsOnly(int, int, int, int, class gsl::span<int const, -1>) const;
    /**
     * @vtable 5
     * @symbol ?getBiome@BiomeSource3d@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
     */
    virtual class Biome const * getBiome(class BlockPos const &) const;
    /**
     * @vtable 6
     * @symbol ?getBiome@BiomeSource3d@@UEBAPEBVBiome@@AEBUGetBiomeOptions@@@Z
     */
    virtual class Biome const * getBiome(struct GetBiomeOptions const &) const;
    /**
     * @vtable 7
     * @symbol ?getBiome@BiomeSource3d@@UEBAPEBVBiome@@HHH@Z
     */
    virtual class Biome const * getBiome(int, int, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIOMESOURCE3D
#endif

};