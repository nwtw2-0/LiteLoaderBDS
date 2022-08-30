/**
 * @file  InspectBookshelfGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InspectBookshelfGoal.
 *
 */
class InspectBookshelfGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSPECTBOOKSHELFGOAL
public:
    class InspectBookshelfGoal& operator=(class InspectBookshelfGoal const &) = delete;
    InspectBookshelfGoal(class InspectBookshelfGoal const &) = delete;
    InspectBookshelfGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~InspectBookshelfGoal();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@InspectBookshelfGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 6
     * @symbol ?tick@InspectBookshelfGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@InspectBookshelfGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vtable 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vtable 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vtable 11
     * @symbol ?isValidTarget@InspectBookshelfGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @vtable 13
     * @symbol ?_canReach@InspectBookshelfGoal@@MEAA_NAEBVBlockPos@@@Z
     */
    virtual bool _canReach(class BlockPos const &);
    /**
     * @vtable 17
     * @symbol ?findTargetBlock@InspectBookshelfGoal@@UEAA_NXZ
     */
    virtual bool findTargetBlock();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INSPECTBOOKSHELFGOAL
#endif
    /**
     * @symbol ??0InspectBookshelfGoal@@QEAA@AEAVMob@@MHHHM@Z
     */
    MCAPI InspectBookshelfGoal(class Mob &, float, int, int, int, float);

};