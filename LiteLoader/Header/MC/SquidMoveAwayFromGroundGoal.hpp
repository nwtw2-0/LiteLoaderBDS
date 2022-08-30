/**
 * @file  SquidMoveAwayFromGroundGoal.hpp
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
 * @brief MC class SquidMoveAwayFromGroundGoal.
 *
 */
class SquidMoveAwayFromGroundGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDMOVEAWAYFROMGROUNDGOAL
public:
    class SquidMoveAwayFromGroundGoal& operator=(class SquidMoveAwayFromGroundGoal const &) = delete;
    SquidMoveAwayFromGroundGoal(class SquidMoveAwayFromGroundGoal const &) = delete;
    SquidMoveAwayFromGroundGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~SquidMoveAwayFromGroundGoal();
    /**
     * @vtable 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vtable 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?start@SquidMoveAwayFromGroundGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vtable 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@SquidMoveAwayFromGroundGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SQUIDMOVEAWAYFROMGROUNDGOAL
    /**
     * @vtable -1
     * @symbol ?canContinueToUse@SquidMoveAwayFromGroundGoal@@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse();
    /**
     * @vtable -1
     * @symbol ?canUse@SquidMoveAwayFromGroundGoal@@UEAA_NXZ
     */
    MCVAPI bool canUse();
    /**
     * @vtable -1
     * @symbol ?stop@SquidMoveAwayFromGroundGoal@@UEAAXXZ
     */
    MCVAPI void stop();
    /**
     * @vtable -1
     * @symbol ?tick@SquidMoveAwayFromGroundGoal@@UEAAXXZ
     */
    MCVAPI void tick();
#endif

};