/**
 * @file  ThrownPotionEffectSubcomponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "SplashPotionEffectSubcomponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ThrownPotionEffectSubcomponent.
 *
 */
class ThrownPotionEffectSubcomponent : public SplashPotionEffectSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THROWNPOTIONEFFECTSUBCOMPONENT
public:
    class ThrownPotionEffectSubcomponent& operator=(class ThrownPotionEffectSubcomponent const &) = delete;
    ThrownPotionEffectSubcomponent(class ThrownPotionEffectSubcomponent const &) = delete;
    ThrownPotionEffectSubcomponent() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ThrownPotionEffectSubcomponent();
    /**
     * @vtable 2
     * @symbol ?writetoJSON@ThrownPotionEffectSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vtable 3
     * @symbol ?doOnHitEffect@ThrownPotionEffectSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vtable 4
     * @symbol ?getName@ThrownPotionEffectSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THROWNPOTIONEFFECTSUBCOMPONENT
#endif

};