/**
 * @file  RollGoal.hpp
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
 * @brief MC class RollGoal.
 *
 */
class RollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROLLGOAL
public:
    class RollGoal& operator=(class RollGoal const &) = delete;
    RollGoal(class RollGoal const &) = delete;
    RollGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~RollGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@RollGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@RollGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 3
     * @symbol ?canBeInterrupted@RollGoal@@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @vtable 4
     * @symbol ?start@RollGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 5
     * @symbol ?stop@RollGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vtable 6
     * @symbol ?tick@RollGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@RollGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ROLLGOAL
#endif
    /**
     * @symbol ??0RollGoal@@QEAA@AEAVMob@@M@Z
     */
    MCAPI RollGoal(class Mob &, float);

//private:
    /**
     * @symbol ?_handleRoll@RollGoal@@AEBAXHAEAVVec3@@AEAM1@Z
     */
    MCAPI void _handleRoll(int, class Vec3 &, float &, float &) const;

private:

};