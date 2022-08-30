/**
 * @file  BaseMoveToGoal.hpp
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
 * @brief MC class BaseMoveToGoal.
 *
 */
class BaseMoveToGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEMOVETOGOAL
public:
    class BaseMoveToGoal& operator=(class BaseMoveToGoal const &) = delete;
    BaseMoveToGoal(class BaseMoveToGoal const &) = delete;
    BaseMoveToGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~BaseMoveToGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@BaseMoveToGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@BaseMoveToGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?start@BaseMoveToGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 5
     * @symbol ?stop@BaseMoveToGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vtable 6
     * @symbol ?tick@BaseMoveToGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@WorkGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const = 0;
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
     * @symbol ?hasReachedTarget@BaseMoveToGoal@@UEBA_NXZ
     */
    virtual bool hasReachedTarget() const;
    /**
     * @vtable 11
     * @symbol ?isValidTarget@StompBlockGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &) = 0;
    /**
     * @vtable 12
     * @symbol ?_nextStartTick@BaseMoveToGoal@@MEAAHXZ
     */
    virtual int _nextStartTick();
    /**
     * @vtable 13
     * @symbol ?_canReach@BaseMoveToGoal@@MEAA_NAEBVBlockPos@@@Z
     */
    virtual bool _canReach(class BlockPos const &);
    /**
     * @vtable 14
     * @symbol ?_moveToBlock@StompBlockGoal@@MEAAXXZ
     */
    virtual void _moveToBlock() = 0;
    /**
     * @vtable 15
     * @symbol ?_getTargetPosition@BaseMoveToGoal@@MEBA?AVVec3@@XZ
     */
    virtual class Vec3 _getTargetPosition() const;
    /**
     * @vtable 16
     * @symbol ?_getRepathTime@BaseMoveToGoal@@MEBA_KXZ
     */
    virtual unsigned __int64 _getRepathTime() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASEMOVETOGOAL
#endif
    /**
     * @symbol ??0BaseMoveToGoal@@QEAA@AEAVMob@@MMMHH@Z
     */
    MCAPI BaseMoveToGoal(class Mob &, float, float, float, int, int);
    /**
     * @symbol ?setTargetPositionOffset@BaseMoveToGoal@@QEAAXAEBVVec3@@@Z
     */
    MCAPI void setTargetPositionOffset(class Vec3 const &);

//protected:
    /**
     * @symbol ?_blockAboveTarget@BaseMoveToGoal@@IEBA?AVBlockPos@@XZ
     */
    MCAPI class BlockPos _blockAboveTarget() const;
    /**
     * @symbol ?_checkIfStuck@BaseMoveToGoal@@IEAAXXZ
     */
    MCAPI void _checkIfStuck();
    /**
     * @symbol ?_isCooldownActive@BaseMoveToGoal@@IEBA_NXZ
     */
    MCAPI bool _isCooldownActive() const;
    /**
     * @symbol ?setInterval@BaseMoveToGoal@@IEAAXH@Z
     */
    MCAPI void setInterval(int);

protected:

};