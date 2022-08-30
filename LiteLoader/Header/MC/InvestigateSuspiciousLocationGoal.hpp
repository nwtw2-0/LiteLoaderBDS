/**
 * @file  InvestigateSuspiciousLocationGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InvestigateSuspiciousLocationGoal.
 *
 */
class InvestigateSuspiciousLocationGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVESTIGATESUSPICIOUSLOCATIONGOAL
public:
    class InvestigateSuspiciousLocationGoal& operator=(class InvestigateSuspiciousLocationGoal const &) = delete;
    InvestigateSuspiciousLocationGoal(class InvestigateSuspiciousLocationGoal const &) = delete;
    InvestigateSuspiciousLocationGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~InvestigateSuspiciousLocationGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@InvestigateSuspiciousLocationGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@InvestigateSuspiciousLocationGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?start@InvestigateSuspiciousLocationGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 5
     * @symbol ?stop@InvestigateSuspiciousLocationGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vtable 6
     * @symbol ?tick@InvestigateSuspiciousLocationGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@InvestigateSuspiciousLocationGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVESTIGATESUSPICIOUSLOCATIONGOAL
#endif
    /**
     * @symbol ??0InvestigateSuspiciousLocationGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI InvestigateSuspiciousLocationGoal(class Mob &);

};