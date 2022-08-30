/**
 * @file  MoveToRandomBlockGoal.hpp
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
 * @brief MC class MoveToRandomBlockGoal.
 *
 */
class MoveToRandomBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETORANDOMBLOCKGOAL
public:
    class MoveToRandomBlockGoal& operator=(class MoveToRandomBlockGoal const &) = delete;
    MoveToRandomBlockGoal(class MoveToRandomBlockGoal const &) = delete;
    MoveToRandomBlockGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~MoveToRandomBlockGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@MoveToRandomBlockGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@MoveToRandomBlockGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?start@MoveToRandomBlockGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 5
     * @symbol ?stop@MoveToRandomBlockGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vtable 6
     * @symbol ?tick@MoveToRandomBlockGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@MoveToRandomBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETORANDOMBLOCKGOAL
#endif
    /**
     * @symbol ??0MoveToRandomBlockGoal@@QEAA@AEAVMob@@MMM@Z
     */
    MCAPI MoveToRandomBlockGoal(class Mob &, float, float, float);

//private:
    /**
     * @symbol ?_isValidDestinationBlock@MoveToRandomBlockGoal@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool _isValidDestinationBlock(class BlockSource &, class BlockPos const &);

private:

};