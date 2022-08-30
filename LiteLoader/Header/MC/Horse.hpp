/**
 * @file  Horse.hpp
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
 * @brief MC class Horse.
 *
 */
class Horse : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSE
public:
    class Horse& operator=(class Horse const &) = delete;
    Horse(class Horse const &) = delete;
    Horse() = delete;
#endif

public:
    /**
     * @vtable 8
     * @symbol ?reloadHardcoded@Horse@@EEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vtable 14
     * @symbol 
     */
    virtual ~Horse();
    /**
     * @vtable 36
     * @symbol ?getInterpolatedRidingOffset@Horse@@UEBA?AVVec3@@M@Z
     */
    virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /**
     * @vtable 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vtable 49
     * @symbol ?normalTick@Horse@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vtable 52
     * @symbol ?positionPassenger@Horse@@UEAAXAEAVActor@@M@Z
     */
    virtual void positionPassenger(class Actor &, float);
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
     * @symbol ?getShadowRadius@Horse@@UEBAMXZ
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
     * @vtable 92
     * @symbol ?isImmobile@Horse@@MEBA_NXZ
     */
    virtual bool isImmobile() const;
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
     * @vtable 122
     * @symbol ?onFailedTame@Horse@@UEAAXXZ
     */
    virtual void onFailedTame();
    /**
     * @vtable 126
     * @symbol ?setStanding@Horse@@UEAAX_N@Z
     */
    virtual void setStanding(bool);
    /**
     * @vtable 141
     * @symbol ?feed@Horse@@UEAAXH@Z
     */
    virtual void feed(int);
    /**
     * @vtable 142
     * @symbol ?handleEntityEvent@Horse@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @vtable 174
     * @symbol ?canFreeze@Horse@@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @vtable 182
     * @symbol __unk_vfn_182
     */
    virtual void __unk_vfn_182();
    /**
     * @vtable 184
     * @symbol ?getControllingPlayer@Horse@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vtable 186
     * @symbol ?causeFallDamage@Horse@@MEAAXMMVActorDamageSource@@@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @vtable 187
     * @symbol ?handleFallDistanceOnServer@Horse@@MEAAXMM_N@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @vtable 191
     * @symbol ?onSynchedDataUpdate@Horse@@UEAAXH@Z
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @vtable 196
     * @symbol __unk_vfn_196
     */
    virtual void __unk_vfn_196();
    /**
     * @vtable 219
     * @symbol ?openContainerComponent@Horse@@UEAAXAEAVPlayer@@@Z
     */
    virtual void openContainerComponent(class Player &);
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
     * @vtable 253
     * @symbol ?die@Horse@@UEAAXAEBVActorDamageSource@@@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vtable 267
     * @symbol ?updateEntitySpecificMolangVariables@Horse@@UEAAXAEAVRenderParams@@@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vtable 269
     * @symbol __unk_vfn_269
     */
    virtual void __unk_vfn_269();
    /**
     * @vtable 270
     * @symbol ?_hurt@Horse@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vtable 275
     * @symbol ?_playStepSound@Horse@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
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
     * @vtable 297
     * @symbol ?travel@Horse@@UEAAXMMM@Z
     */
    virtual void travel(float, float, float);
    /**
     * @vtable 300
     * @symbol ?aiStep@Horse@@UEAAXXZ
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
     * @vtable 322
     * @symbol ?getArmorValue@Horse@@UEBAHXZ
     */
    virtual int getArmorValue() const;
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
    /**
     * @vtable 367
     * @symbol ?setType@Horse@@UEAAXH@Z
     */
    virtual void setType(int);
    /**
     * @vtable 368
     * @symbol ?getType@Horse@@UEBAHXZ
     */
    virtual int getType() const;
    /**
     * @vtable 369
     * @symbol ?setHorseEating@Horse@@UEAAX_N@Z
     */
    virtual void setHorseEating(bool);
    /**
     * @vtable 370
     * @symbol ?getStandAnim@Horse@@UEBAMM@Z
     */
    virtual float getStandAnim(float) const;
    /**
     * @vtable 371
     * @symbol ?isAdult@Horse@@UEBA_NXZ
     */
    virtual bool isAdult() const;
    /**
     * @vtable 372
     * @symbol ?isHorseEating@Horse@@UEBA_NXZ
     */
    virtual bool isHorseEating() const;
    /**
     * @vtable 373
     * @symbol ?isMouthOpen@Horse@@UEBA_NXZ
     */
    virtual bool isMouthOpen() const;
    /**
     * @vtable 374
     * @symbol ?isTailMoving@Horse@@UEBA_NXZ
     */
    virtual bool isTailMoving() const;
    /**
     * @vtable 375
     * @symbol ?makeMad@Horse@@UEAAXXZ
     */
    virtual void makeMad();
    /**
     * @vtable 376
     * @symbol ?tameToPlayer@Horse@@UEAA_NAEAVPlayer@@_N@Z
     */
    virtual bool tameToPlayer(class Player &, bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HORSE
    /**
     * @vtable -1
     * @symbol ?useNewAi@Horse@@MEBA_NXZ
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0Horse@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Horse(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?postNormalTick@Horse@@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?postTravel@Horse@@QEAAXPEAVActor@@_NW4HorsePostTravelType@@@Z
     */
    MCAPI void postTravel(class Actor *, bool, enum HorsePostTravelType);
MCAPI static int const DONKEY_CHEST_COUNT;
    /**
     * @symbol ?getInterpolatedRidingOffset@Horse@@SA?AVVec3@@AEBVVec2@@MMM@Z
     */
    MCAPI static class Vec3 getInterpolatedRidingOffset(class Vec2 const &, float, float, float);

//private:
    /**
     * @symbol ?openMouth@Horse@@AEAAXXZ
     */
    MCAPI void openMouth();
    /**
     * @symbol ?setHorseFlag@Horse@@AEAAXW4HorseFlags@@_N@Z
     */
    MCAPI void setHorseFlag(enum HorseFlags, bool);
    /**
     * @symbol ?setHorseType@Horse@@AEAA_NAEAW4ActorType@@@Z
     */
    MCAPI bool setHorseType(enum ActorType &);

private:
MCAPI static int const DATA_AGE;

};