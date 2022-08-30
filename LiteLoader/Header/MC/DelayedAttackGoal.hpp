/**
 * @file  DelayedAttackGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MeleeAttackGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DelayedAttackGoal.
 *
 */
class DelayedAttackGoal : public MeleeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DELAYEDATTACKGOAL
public:
    class DelayedAttackGoal& operator=(class DelayedAttackGoal const &) = delete;
    DelayedAttackGoal(class DelayedAttackGoal const &) = delete;
    DelayedAttackGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~DelayedAttackGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@DelayedAttackGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@DelayedAttackGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?start@DelayedAttackGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 5
     * @symbol ?stop@DelayedAttackGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vtable 6
     * @symbol ?tick@DelayedAttackGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@DelayedAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
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
     * @vtable 10
     * @symbol ?_attemptMoveToTarget@DelayedAttackGoal@@EEAAXAEAVActor@@@Z
     */
    virtual void _attemptMoveToTarget(class Actor &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DELAYEDATTACKGOAL
#endif
    /**
     * @symbol ??0DelayedAttackGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI DelayedAttackGoal(class Mob &);

//private:
    /**
     * @symbol ?_attemptAttack@DelayedAttackGoal@@AEAAXPEAVActor@@@Z
     */
    MCAPI void _attemptAttack(class Actor *);
    /**
     * @symbol ?_attemptStartAttacking@DelayedAttackGoal@@AEBAXPEAVActor@@@Z
     */
    MCAPI void _attemptStartAttacking(class Actor *) const;
    /**
     * @symbol ?_manageAttackTime@DelayedAttackGoal@@AEAAXXZ
     */
    MCAPI void _manageAttackTime();

private:

};