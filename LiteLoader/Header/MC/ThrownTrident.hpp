/**
 * @file  ThrownTrident.hpp
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
 * @brief MC class ThrownTrident.
 *
 */
class ThrownTrident : public AbstractArrow {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THROWNTRIDENT
public:
    class ThrownTrident& operator=(class ThrownTrident const &) = delete;
    ThrownTrident(class ThrownTrident const &) = delete;
    ThrownTrident() = delete;
#endif

public:
    /**
     * @vtable 7
     * @symbol ?outOfWorld@ThrownTrident@@UEAAXXZ
     */
    virtual void outOfWorld();
    /**
     * @vtable 8
     * @symbol ?reloadHardcoded@ThrownTrident@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vtable 14
     * @symbol 
     */
    virtual ~ThrownTrident();
    /**
     * @vtable 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vtable 49
     * @symbol ?normalTick@ThrownTrident@@UEAAXXZ
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
     * @symbol ?playerTouch@ThrownTrident@@UEAAXAEAVPlayer@@@Z
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
     * @vtable 130
     * @symbol ?isEnchanted@ThrownTrident@@UEBA_NXZ
     */
    virtual bool isEnchanted() const;
    /**
     * @vtable 150
     * @symbol ?despawn@ThrownTrident@@UEAAXXZ
     */
    virtual void despawn();
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
     * @symbol ?_hurt@ThrownTrident@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vtable 273
     * @symbol ?readAdditionalSaveData@ThrownTrident@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vtable 274
     * @symbol ?addAdditionalSaveData@ThrownTrident@@MEBAXAEAVCompoundTag@@@Z
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
     * @symbol ?shoot@ThrownTrident@@UEAAXAEBVVec3@@MM0@Z
     */
    virtual void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /**
     * @vtable 288
     * @symbol ?_getPickupItem@ThrownTrident@@MEBA?AVItemStack@@XZ
     */
    virtual class ItemStack _getPickupItem() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THROWNTRIDENT
#endif
    /**
     * @symbol ??0ThrownTrident@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI ThrownTrident(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getPickupItem@ThrownTrident@@QEBA?AVItemStack@@XZ
     */
    MCAPI class ItemStack getPickupItem() const;
    /**
     * @symbol ?returnWithLoyalty@ThrownTrident@@QEAAXH@Z
     */
    MCAPI void returnWithLoyalty(int);
    /**
     * @symbol ?setTridentItem@ThrownTrident@@QEAAXAEBVItemStack@@@Z
     */
    MCAPI void setTridentItem(class ItemStack const &);

};