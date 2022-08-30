/**
 * @file  ParticleOnHitSubcomponent.hpp
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
 * @brief MC class ParticleOnHitSubcomponent.
 *
 */
class ParticleOnHitSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLEONHITSUBCOMPONENT
public:
    class ParticleOnHitSubcomponent& operator=(class ParticleOnHitSubcomponent const &) = delete;
    ParticleOnHitSubcomponent(class ParticleOnHitSubcomponent const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ParticleOnHitSubcomponent();
    /**
     * @vtable 1
     * @symbol ?readfromJSON@ParticleOnHitSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @vtable 2
     * @symbol ?writetoJSON@ParticleOnHitSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vtable 3
     * @symbol ?doOnHitEffect@ParticleOnHitSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vtable 4
     * @symbol ?getName@ParticleOnHitSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PARTICLEONHITSUBCOMPONENT
#endif
    /**
     * @symbol ??0ParticleOnHitSubcomponent@@QEAA@XZ
     */
    MCAPI ParticleOnHitSubcomponent();

//private:
    /**
     * @symbol ?isParticleTypeIconBreak@ParticleOnHitSubcomponent@@AEBA_NXZ
     */
    MCAPI bool isParticleTypeIconBreak() const;

private:

};