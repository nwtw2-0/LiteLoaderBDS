/**
 * @file  ImpactDamageSubcomponent.hpp
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
 * @brief MC class ImpactDamageSubcomponent.
 *
 */
class ImpactDamageSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMPACTDAMAGESUBCOMPONENT
public:
    class ImpactDamageSubcomponent& operator=(class ImpactDamageSubcomponent const &) = delete;
    ImpactDamageSubcomponent(class ImpactDamageSubcomponent const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ImpactDamageSubcomponent();
    /**
     * @vtable 1
     * @symbol ?readfromJSON@ImpactDamageSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @vtable 2
     * @symbol ?writetoJSON@ImpactDamageSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vtable 3
     * @symbol ?doOnHitEffect@ImpactDamageSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vtable 4
     * @symbol ?getName@ImpactDamageSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IMPACTDAMAGESUBCOMPONENT
#endif
    /**
     * @symbol ??0ImpactDamageSubcomponent@@QEAA@XZ
     */
    MCAPI ImpactDamageSubcomponent();

};