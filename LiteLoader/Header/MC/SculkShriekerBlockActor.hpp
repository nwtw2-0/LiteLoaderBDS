/**
 * @file  SculkShriekerBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkShriekerBlockActor.
 *
 */
class SculkShriekerBlockActor : public BlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSHRIEKERBLOCKACTOR
public:
    class SculkShriekerBlockActor& operator=(class SculkShriekerBlockActor const &) = delete;
    SculkShriekerBlockActor(class SculkShriekerBlockActor const &) = delete;
    SculkShriekerBlockActor() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~SculkShriekerBlockActor();
    /**
     * @vtable 1
     * @symbol ?load@SculkShriekerBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vtable 2
     * @symbol ?save@SculkShriekerBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vtable 7
     * @symbol ?tick@SculkShriekerBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vtable 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vtable 13
     * @symbol ?onRemoved@SculkShriekerBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onRemoved(class BlockSource &);
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCULKSHRIEKERBLOCKACTOR
#endif
    /**
     * @symbol ??0SculkShriekerBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI SculkShriekerBlockActor(class BlockPos const &);
    /**
     * @symbol ?tryRespond@SculkShriekerBlockActor@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void tryRespond(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?tryShriek@SculkShriekerBlockActor@@QEAA_NAEAVBlockSource@@VBlockPos@@AEAVPlayer@@@Z
     */
    MCAPI bool tryShriek(class BlockSource &, class BlockPos, class Player &);
    /**
     * @symbol ?tryGet@SculkShriekerBlockActor@@SAPEAV1@AEAVBlockSource@@VBlockPos@@@Z
     */
    MCAPI static class SculkShriekerBlockActor * tryGet(class BlockSource &, class BlockPos);
    /**
     * @symbol ?tryGetPlayerInHierarchy@SculkShriekerBlockActor@@SAPEAVPlayer@@PEAVActor@@@Z
     */
    MCAPI static class Player * tryGetPlayerInHierarchy(class Actor *);

};