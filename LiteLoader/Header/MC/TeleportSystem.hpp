/**
 * @file  TeleportSystem.hpp
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
 * @brief MC class TeleportSystem.
 *
 */
class TeleportSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTSYSTEM
public:
    class TeleportSystem& operator=(class TeleportSystem const &) = delete;
    TeleportSystem(class TeleportSystem const &) = delete;
    TeleportSystem() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~TeleportSystem();
    /**
     * @vtable 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vtable 2
     * @symbol ?tick@TeleportSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TELEPORTSYSTEM
#endif

};