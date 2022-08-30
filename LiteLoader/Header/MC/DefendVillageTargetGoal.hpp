/**
 * @file  DefendVillageTargetGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DefendVillageTargetGoal.
 *
 */
class DefendVillageTargetGoal : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFENDVILLAGETARGETGOAL
public:
    class DefendVillageTargetGoal& operator=(class DefendVillageTargetGoal const &) = delete;
    DefendVillageTargetGoal(class DefendVillageTargetGoal const &) = delete;
    DefendVillageTargetGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~DefendVillageTargetGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@DefendVillageTargetGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@DefendVillageTargetGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 4
     * @symbol ?start@DefendVillageTargetGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@DefendVillageTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEFENDVILLAGETARGETGOAL
#endif
    /**
     * @symbol ??0DefendVillageTargetGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI DefendVillageTargetGoal(class Mob &);

};