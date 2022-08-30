/**
 * @file  DaylightDetectorBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DaylightDetectorBlockActor.
 *
 */
class DaylightDetectorBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAYLIGHTDETECTORBLOCKACTOR
public:
    class DaylightDetectorBlockActor& operator=(class DaylightDetectorBlockActor const &) = delete;
    DaylightDetectorBlockActor(class DaylightDetectorBlockActor const &) = delete;
    DaylightDetectorBlockActor() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~DaylightDetectorBlockActor();
    /**
     * @vtable 7
     * @symbol ?tick@DaylightDetectorBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vtable 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vtable 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vtable 28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vtable 29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vtable 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vtable 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vtable 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vtable 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DAYLIGHTDETECTORBLOCKACTOR
#endif
    /**
     * @symbol ??0DaylightDetectorBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI DaylightDetectorBlockActor(class BlockPos const &);

};