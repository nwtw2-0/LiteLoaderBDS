/**
 * @file  ChunkBuildOrderPolicy.hpp
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
 * @brief MC class ChunkBuildOrderPolicy.
 *
 */
class ChunkBuildOrderPolicy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBUILDORDERPOLICY
public:
    class ChunkBuildOrderPolicy& operator=(class ChunkBuildOrderPolicy const &) = delete;
    ChunkBuildOrderPolicy(class ChunkBuildOrderPolicy const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ChunkBuildOrderPolicy();
    /**
     * @vtable 1
     * @symbol ?getChunkRebuildPriority@ChunkBuildOrderPolicy@@UEBAHAEBVChunkPos@@@Z
     */
    virtual int getChunkRebuildPriority(class ChunkPos const &) const;
    /**
     * @vtable 2
     * @symbol ?registerForUpdates@ChunkBuildOrderPolicy@@UEAAIXZ
     */
    virtual unsigned int registerForUpdates();
    /**
     * @vtable 3
     * @symbol ?unregisterForUpdates@ChunkBuildOrderPolicy@@UEAAXI@Z
     */
    virtual void unregisterForUpdates(unsigned int);
    /**
     * @vtable 4
     * @symbol ?setPlayerInfluence@ChunkBuildOrderPolicy@@UEAAXIAEBVChunkPos@@AEBVVec3@@@Z
     */
    virtual void setPlayerInfluence(unsigned int, class ChunkPos const &, class Vec3 const &);
    /**
     * @vtable 5
     * @symbol ?setTickingAreaInfluence@ChunkBuildOrderPolicy@@UEAAXIAEBVChunkPos@@HH_N1@Z
     */
    virtual void setTickingAreaInfluence(unsigned int, class ChunkPos const &, int, int, bool, bool);
    /**
     * @vtable 6
     * @symbol ?updateInfluences@ChunkBuildOrderPolicy@@UEAAXXZ
     */
    virtual void updateInfluences();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKBUILDORDERPOLICY
#endif
    /**
     * @symbol ??0ChunkBuildOrderPolicy@@QEAA@XZ
     */
    MCAPI ChunkBuildOrderPolicy();

};