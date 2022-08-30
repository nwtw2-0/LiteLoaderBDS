/**
 * @file  MoveIndoorsGoal.hpp
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
 * @brief MC class MoveIndoorsGoal.
 *
 */
class MoveIndoorsGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEINDOORSGOAL
public:
    class MoveIndoorsGoal& operator=(class MoveIndoorsGoal const &) = delete;
    MoveIndoorsGoal(class MoveIndoorsGoal const &) = delete;
    MoveIndoorsGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~MoveIndoorsGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@MoveIndoorsGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@MoveIndoorsGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?start@MoveIndoorsGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 5
     * @symbol ?stop@MoveIndoorsGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vtable 6
     * @symbol ?tick@MoveIndoorsGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@MoveIndoorsGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEINDOORSGOAL
#endif
    /**
     * @symbol ??0MoveIndoorsGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI MoveIndoorsGoal(class Mob &);

//private:
    /**
     * @symbol ?_isInside@MoveIndoorsGoal@@AEAA_NAEBVBlockPos@@@Z
     */
    MCAPI bool _isInside(class BlockPos const &);
    /**
     * @symbol ?_startPathfinding@MoveIndoorsGoal@@AEAAXXZ
     */
    MCAPI void _startPathfinding();

private:

};