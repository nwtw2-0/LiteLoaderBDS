/**
 * @file  AttackDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AttackDefinition.
 *
 */
class AttackDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTACKDEFINITION
public:
    class AttackDefinition& operator=(class AttackDefinition const &) = delete;
    AttackDefinition(class AttackDefinition const &) = delete;
    AttackDefinition() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~AttackDefinition();
    /**
     * @vtable 1
     * @symbol ?load@AttackDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ATTACKDEFINITION
#endif

};