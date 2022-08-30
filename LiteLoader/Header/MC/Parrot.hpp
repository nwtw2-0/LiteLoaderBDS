/**
 * @file  Parrot.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Parrot.
 *
 */
class Parrot : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARROT
public:
    class Parrot& operator=(class Parrot const &) = delete;
    Parrot(class Parrot const &) = delete;
    Parrot() = delete;
#endif

public:
    /**
     * @vtable 9
     * @symbol ?reloadHardcodedClient@Parrot@@MEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vtable 14
     * @symbol 
     */
    virtual ~Parrot();
    /**
     * @vtable 30
     * @symbol ?getInterpolatedRidingPosition@Parrot@@UEBA?AVVec3@@M@Z
     */
    virtual class Vec3 getInterpolatedRidingPosition(float) const;
    /**
     * @vtable 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vtable 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vtable 68
     * @symbol __unk_vfn_68
     */
    virtual void __unk_vfn_68();
    /**
     * @vtable 80
     * @symbol ?getShadowRadius@Parrot@@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vtable 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vtable 85
     * @symbol __unk_vfn_85
     */
    virtual void __unk_vfn_85();
    /**
     * @vtable 88
     * @symbol __unk_vfn_88
     */
    virtual void __unk_vfn_88();
    /**
     * @vtable 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vtable 99
     * @symbol __unk_vfn_99
     */
    virtual void __unk_vfn_99();
    /**
     * @vtable 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vtable 108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vtable 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vtable 111
     * @symbol __unk_vfn_111
     */
    virtual void __unk_vfn_111();
    /**
     * @vtable 120
     * @symbol ?setSitting@Parrot@@UEAAX_N@Z
     */
    virtual void setSitting(bool);
    /**
     * @vtable 131
     * @symbol ?vehicleLanded@Parrot@@UEAAXAEBVVec3@@0@Z
     */
    virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /**
     * @vtable 133
     * @symbol ?playAmbientSound@Parrot@@UEAAXXZ
     */
    virtual void playAmbientSound();
    /**
     * @vtable 134
     * @symbol ?getAmbientSound@Parrot@@UEBA?AW4LevelSoundEvent@@XZ
     */
    virtual enum LevelSoundEvent getAmbientSound() const;
    /**
     * @vtable 135
     * @symbol ?isInvulnerableTo@Parrot@@UEBA_NAEBVActorDamageSource@@@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vtable 182
     * @symbol __unk_vfn_182
     */
    virtual void __unk_vfn_182();
    /**
     * @vtable 194
     * @symbol ?canBePulledIntoVehicle@Parrot@@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vtable 196
     * @symbol __unk_vfn_196
     */
    virtual void __unk_vfn_196();
    /**
     * @vtable 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vtable 223
     * @symbol __unk_vfn_223
     */
    virtual void __unk_vfn_223();
    /**
     * @vtable 248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vtable 251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @vtable 269
     * @symbol __unk_vfn_269
     */
    virtual void __unk_vfn_269();
    /**
     * @vtable 275
     * @symbol ?_playStepSound@Parrot@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vtable 277
     * @symbol __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @vtable 285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @vtable 300
     * @symbol ?aiStep@Parrot@@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vtable 313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @vtable 317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @vtable 349
     * @symbol ?_getWalkTargetValue@Parrot@@UEAAMAEBVBlockPos@@@Z
     */
    virtual float _getWalkTargetValue(class BlockPos const &);
    /**
     * @vtable 351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @vtable 365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PARROT
    /**
     * @vtable -1
     * @symbol ?_makeFlySound@Parrot@@MEBA_NXZ
     */
    MCVAPI bool _makeFlySound() const;
    /**
     * @vtable -1
     * @symbol ?useNewAi@Parrot@@MEBA_NXZ
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0Parrot@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Parrot(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getFlap@Parrot@@QEBAMXZ
     */
    MCAPI float getFlap() const;
    /**
     * @symbol ?getFlapSpeed@Parrot@@QEBAMXZ
     */
    MCAPI float getFlapSpeed() const;
    /**
     * @symbol ?postAiStep@Parrot@@QEAAXXZ
     */
    MCAPI void postAiStep();

};