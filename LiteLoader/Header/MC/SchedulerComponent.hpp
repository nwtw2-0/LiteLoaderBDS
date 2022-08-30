/**
 * @file  SchedulerComponent.hpp
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
 * @brief MC class SchedulerComponent.
 *
 */
class SchedulerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULERCOMPONENT
public:
    class SchedulerComponent& operator=(class SchedulerComponent const &) = delete;
    SchedulerComponent(class SchedulerComponent const &) = delete;
    SchedulerComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCHEDULERCOMPONENT
#endif
    /**
     * @symbol ?getCurrentEventIndex@SchedulerComponent@@QEBAHXZ
     */
    MCAPI int getCurrentEventIndex() const;
    /**
     * @symbol ?setCurrentEventIndex@SchedulerComponent@@QEAAXH@Z
     */
    MCAPI void setCurrentEventIndex(int);

};