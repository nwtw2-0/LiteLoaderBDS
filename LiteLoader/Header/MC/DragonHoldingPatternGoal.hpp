/**
 * @file  DragonHoldingPatternGoal.hpp
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
 * @brief MC class DragonHoldingPatternGoal.
 *
 */
class DragonHoldingPatternGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONHOLDINGPATTERNGOAL
public:
    class DragonHoldingPatternGoal& operator=(class DragonHoldingPatternGoal const &) = delete;
    DragonHoldingPatternGoal(class DragonHoldingPatternGoal const &) = delete;
    DragonHoldingPatternGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~DragonHoldingPatternGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@DragonHoldingPatternGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@DragonHoldingPatternGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?start@DragonHoldingPatternGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 5
     * @symbol ?stop@DragonHoldingPatternGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vtable 6
     * @symbol ?tick@DragonHoldingPatternGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@DragonHoldingPatternGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONHOLDINGPATTERNGOAL
#endif
    /**
     * @symbol ??0DragonHoldingPatternGoal@@QEAA@AEAVEnderDragon@@@Z
     */
    MCAPI DragonHoldingPatternGoal(class EnderDragon &);

//private:
    /**
     * @symbol ?findNewTarget@DragonHoldingPatternGoal@@AEAAXXZ
     */
    MCAPI void findNewTarget();

private:

};