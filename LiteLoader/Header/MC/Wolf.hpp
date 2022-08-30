/**
 * @file  Wolf.hpp
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
 * @brief MC class Wolf.
 *
 */
class Wolf : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WOLF
public:
    class Wolf& operator=(class Wolf const &) = delete;
    Wolf(class Wolf const &) = delete;
    Wolf() = delete;
#endif

public:
    /**
     * @vtable 14
     * @symbol 
     */
    virtual ~Wolf();
    /**
     * @vtable 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vtable 49
     * @symbol ?normalTick@Wolf@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vtable 54
     * @symbol ?addPassenger@Wolf@@UEAAXAEAVActor@@@Z
     */
    virtual void addPassenger(class Actor &);
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
     * @symbol ?setSitting@Wolf@@UEAAX_N@Z
     */
    virtual void setSitting(bool);
    /**
     * @vtable 134
     * @symbol ?getAmbientSound@Wolf@@UEBA?AW4LevelSoundEvent@@XZ
     */
    virtual enum LevelSoundEvent getAmbientSound() const;
    /**
     * @vtable 142
     * @symbol ?handleEntityEvent@Wolf@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @vtable 168
     * @symbol ?load@Wolf@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vtable 182
     * @symbol __unk_vfn_182
     */
    virtual void __unk_vfn_182();
    /**
     * @vtable 191
     * @symbol ?onSynchedDataUpdate@Wolf@@UEAAXH@Z
     */
    virtual void onSynchedDataUpdate(int);
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
     * @vtable 270
     * @symbol ?_hurt@Wolf@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
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
     * @vtable 313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @vtable 315
     * @symbol ?isAlliedTo@Wolf@@UEAA_NPEAVMob@@@Z
     */
    virtual bool isAlliedTo(class Mob *);
    /**
     * @vtable 317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @vtable 344
     * @symbol ?onBorn@Wolf@@UEAAXAEAVActor@@0@Z
     */
    virtual void onBorn(class Actor &, class Actor &);
    /**
     * @vtable 351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @vtable 360
     * @symbol ?newServerAiStep@Wolf@@UEAAXXZ
     */
    virtual void newServerAiStep();
    /**
     * @vtable 365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WOLF
#endif
    /**
     * @symbol ??0Wolf@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Wolf(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getHeadRollAngle@Wolf@@QEAAMM@Z
     */
    MCAPI float getHeadRollAngle(float);
    /**
     * @symbol ?getShakeAnim@Wolf@@QEBAMXZ
     */
    MCAPI float getShakeAnim() const;
    /**
     * @symbol ?getTailAngle@Wolf@@QEAAMXZ
     */
    MCAPI float getTailAngle();
    /**
     * @symbol ?isShaking@Wolf@@QEBA_NXZ
     */
    MCAPI bool isShaking() const;
    /**
     * @symbol ?postNormalTick@Wolf@@QEAAXXZ
     */
    MCAPI void postNormalTick();

//private:
    /**
     * @symbol ?_avoidSnowBury@Wolf@@AEAAXXZ
     */
    MCAPI void _avoidSnowBury();

private:

};