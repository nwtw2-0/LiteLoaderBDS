/**
 * @file  MobEffectSubcomponent.hpp
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
 * @brief MC class MobEffectSubcomponent.
 *
 */
class MobEffectSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTSUBCOMPONENT
public:
    class MobEffectSubcomponent& operator=(class MobEffectSubcomponent const &) = delete;
    MobEffectSubcomponent(class MobEffectSubcomponent const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~MobEffectSubcomponent();
    /**
     * @vtable 1
     * @symbol ?readfromJSON@MobEffectSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @vtable 2
     * @symbol ?writetoJSON@MobEffectSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vtable 3
     * @symbol ?doOnHitEffect@MobEffectSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vtable 4
     * @symbol ?getName@MobEffectSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBEFFECTSUBCOMPONENT
#endif
    /**
     * @symbol ??0MobEffectSubcomponent@@QEAA@XZ
     */
    MCAPI MobEffectSubcomponent();

//private:
    /**
     * @symbol ?_addEffectFromJSON@MobEffectSubcomponent@@AEAAXAEAVValue@Json@@@Z
     */
    MCAPI void _addEffectFromJSON(class Json::Value &);

private:

};