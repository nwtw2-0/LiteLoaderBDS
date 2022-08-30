/**
 * @file  AttackCooldownSystem.hpp
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
 * @brief MC class AttackCooldownSystem.
 *
 */
class AttackCooldownSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTACKCOOLDOWNSYSTEM
public:
    class AttackCooldownSystem& operator=(class AttackCooldownSystem const &) = delete;
    AttackCooldownSystem(class AttackCooldownSystem const &) = delete;
    AttackCooldownSystem() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~AttackCooldownSystem();
    /**
     * @vtable 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vtable 2
     * @symbol ?tick@AttackCooldownSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ATTACKCOOLDOWNSYSTEM
#endif

};