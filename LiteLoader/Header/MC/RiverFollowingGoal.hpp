/**
 * @file  RiverFollowingGoal.hpp
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
 * @brief MC class RiverFollowingGoal.
 *
 */
class RiverFollowingGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIVERFOLLOWINGGOAL
public:
    class RiverFollowingGoal& operator=(class RiverFollowingGoal const &) = delete;
    RiverFollowingGoal(class RiverFollowingGoal const &) = delete;
    RiverFollowingGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~RiverFollowingGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@RiverFollowingGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@RiverFollowingGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?start@RiverFollowingGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 5
     * @symbol ?stop@RiverFollowingGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vtable 6
     * @symbol ?tick@RiverFollowingGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@RiverFollowingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RIVERFOLLOWINGGOAL
#endif
    /**
     * @symbol ??0RiverFollowingGoal@@QEAA@AEAVMob@@MM@Z
     */
    MCAPI RiverFollowingGoal(class Mob &, float, float);

//protected:
    /**
     * @symbol ?determineSteerDirection@RiverFollowingGoal@@IEAAXXZ
     */
    MCAPI void determineSteerDirection();

protected:

};