/**
 * @file  RandomLookAroundAndSitGoal.hpp
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
 * @brief MC class RandomLookAroundAndSitGoal.
 *
 */
class RandomLookAroundAndSitGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMLOOKAROUNDANDSITGOAL
public:
    class RandomLookAroundAndSitGoal& operator=(class RandomLookAroundAndSitGoal const &) = delete;
    RandomLookAroundAndSitGoal(class RandomLookAroundAndSitGoal const &) = delete;
    RandomLookAroundAndSitGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~RandomLookAroundAndSitGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@RandomLookAroundAndSitGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@RandomLookAroundAndSitGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?start@RandomLookAroundAndSitGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 5
     * @symbol ?stop@RandomLookAroundAndSitGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vtable 6
     * @symbol ?tick@RandomLookAroundAndSitGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@RandomLookAroundAndSitGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMLOOKAROUNDANDSITGOAL
#endif
    /**
     * @symbol ??0RandomLookAroundAndSitGoal@@QEAA@AEAVMob@@HHHHM@Z
     */
    MCAPI RandomLookAroundAndSitGoal(class Mob &, int, int, int, int, float);

};