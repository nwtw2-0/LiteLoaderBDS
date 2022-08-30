/**
 * @file  SchedulerSystem.hpp
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
 * @brief MC class SchedulerSystem.
 *
 */
class SchedulerSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULERSYSTEM
public:
    class SchedulerSystem& operator=(class SchedulerSystem const &) = delete;
    SchedulerSystem(class SchedulerSystem const &) = delete;
    SchedulerSystem() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~SchedulerSystem();
    /**
     * @vtable 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vtable 2
     * @symbol ?tick@SchedulerSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCHEDULERSYSTEM
#endif

};