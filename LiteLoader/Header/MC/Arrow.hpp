/**
 * @file  Arrow.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "AbstractArrow.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Arrow.
 *
 */
class Arrow : public AbstractArrow {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARROW
public:
    class Arrow& operator=(class Arrow const &) = delete;
    Arrow(class Arrow const &) = delete;
    Arrow() = delete;
#endif

public:
    /**
     * @vtable 8
     * @symbol ?reloadHardcoded@Arrow@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vtable 14
     * @symbol 
     */
    virtual ~Arrow();
    /**
     * @vtable 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vtable 49
     * @symbol ?normalTick@Arrow@@UEAAXXZ
     */
    virtual void normalTick();
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
     * @vtable 89
     * @symbol ?playerTouch@Arrow@@UEAAXAEAVPlayer@@@Z
     */
    virtual void playerTouch(class Player &);
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
     * @vtable 182
     * @symbol __unk_vfn_182
     */
    virtual void __unk_vfn_182();
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
     * @vtable 240
     * @symbol ?setAuxValue@Arrow@@UEAAXH@Z
     */
    virtual void setAuxValue(int);
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
     * @vtable 273
     * @symbol ?readAdditionalSaveData@Arrow@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vtable 274
     * @symbol ?addAdditionalSaveData@Arrow@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
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
     * @vtable 286
     * @symbol ?shoot@Arrow@@UEAAXAEBVVec3@@MM0@Z
     */
    virtual void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /**
     * @vtable 288
     * @symbol ?_getPickupItem@Arrow@@MEBA?AVItemStack@@XZ
     */
    virtual class ItemStack _getPickupItem() const;
    /**
     * @vtable 289
     * @symbol ?applyParticleColor@Arrow@@MEAAXPEAVParticle@@@Z
     */
    virtual void applyParticleColor(class Particle *);
    /**
     * @vtable 290
     * @symbol ?getEffectColor@Arrow@@MEAA?AVColor@mce@@XZ
     */
    virtual class mce::Color getEffectColor();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARROW
    /**
     * @vtable -1
     * @symbol ?canMakeStepSound@Arrow@@MEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
#endif
    /**
     * @symbol ??0Arrow@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Arrow(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?addMobEffect@Arrow@@QEAAXVMobEffectInstance@@@Z
     */
    MCAPI void addMobEffect(class MobEffectInstance);
    /**
     * @symbol ?getAuxValue@Arrow@@QEBAHXZ
     */
    MCAPI int getAuxValue() const;
    /**
     * @symbol ?setCritical@Arrow@@QEAAX_N@Z
     */
    MCAPI void setCritical(bool);
    /**
     * @symbol ?setEnchantFlame@Arrow@@QEAAXH@Z
     */
    MCAPI void setEnchantFlame(int);
    /**
     * @symbol ?setEnchantInfinity@Arrow@@QEAAXH@Z
     */
    MCAPI void setEnchantInfinity(int);
    /**
     * @symbol ?setEnchantPower@Arrow@@QEAAXH@Z
     */
    MCAPI void setEnchantPower(int);
    /**
     * @symbol ?setEnchantPunch@Arrow@@QEAAXH@Z
     */
    MCAPI void setEnchantPunch(int);

};