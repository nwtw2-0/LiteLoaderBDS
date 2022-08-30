/**
 * @file  ActorDefinitionEventSubcomponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDefinitionEventSubcomponent.
 *
 */
class ActorDefinitionEventSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONEVENTSUBCOMPONENT
public:
    class ActorDefinitionEventSubcomponent& operator=(class ActorDefinitionEventSubcomponent const &) = delete;
    ActorDefinitionEventSubcomponent(class ActorDefinitionEventSubcomponent const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ActorDefinitionEventSubcomponent();
    /**
     * @vtable 1
     * @symbol ?readfromJSON@ActorDefinitionEventSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @vtable 2
     * @symbol ?writetoJSON@ActorDefinitionEventSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vtable 3
     * @symbol ?doOnHitEffect@ActorDefinitionEventSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vtable 4
     * @symbol ?getName@ActorDefinitionEventSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORDEFINITIONEVENTSUBCOMPONENT
#endif
    /**
     * @symbol ??0ActorDefinitionEventSubcomponent@@QEAA@XZ
     */
    MCAPI ActorDefinitionEventSubcomponent();

};