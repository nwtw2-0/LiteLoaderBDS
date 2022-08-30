/**
 * @file  FallingBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FallingBlock.
 *
 */
class FallingBlock : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FALLINGBLOCK
public:
    class FallingBlock& operator=(class FallingBlock const &) = delete;
    FallingBlock(class FallingBlock const &) = delete;
    FallingBlock() = delete;
#endif

public:
    /**
     * @vtable 8
     * @symbol ?reloadHardcoded@FallingBlock@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vtable 14
     * @symbol 
     */
    virtual ~FallingBlock();
    /**
     * @vtable 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vtable 44
     * @symbol ?teleportTo@FallingBlock@@UEAAXAEBVVec3@@_NHH1@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @vtable 49
     * @symbol ?normalTick@FallingBlock@@UEAAXXZ
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
     * @vtable 79
     * @symbol ?getShadowHeightOffs@FallingBlock@@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @vtable 80
     * @symbol ?getShadowRadius@FallingBlock@@UEBAMXZ
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
     * @vtable 95
     * @symbol ?isPickable@FallingBlock@@UEAA_NXZ
     */
    virtual bool isPickable();
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
     * @vtable 181
     * @symbol ?canChangeDimensionsUsingPortal@FallingBlock@@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vtable 182
     * @symbol __unk_vfn_182
     */
    virtual void __unk_vfn_182();
    /**
     * @vtable 186
     * @symbol ?causeFallDamage@FallingBlock@@UEAAXMMVActorDamageSource@@@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @vtable 191
     * @symbol ?onSynchedDataUpdate@FallingBlock@@UEAAXH@Z
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
     * @symbol ?_hurt@FallingBlock@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vtable 273
     * @symbol ?readAdditionalSaveData@FallingBlock@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vtable 274
     * @symbol ?addAdditionalSaveData@FallingBlock@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vtable 277
     * @symbol __unk_vfn_277
     */
    virtual void __unk_vfn_277();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FALLINGBLOCK
    /**
     * @vtable -1
     * @symbol ?getDeletionDelayTimeSeconds@FallingBlock@@UEBAMXZ
     */
    MCVAPI float getDeletionDelayTimeSeconds() const;
#endif
    /**
     * @symbol ??0FallingBlock@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI FallingBlock(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?doNormalTick@FallingBlock@@QEAAXXZ
     */
    MCAPI void doNormalTick();
    /**
     * @symbol ?getFallingBlock@FallingBlock@@QEBAAEBVBlock@@XZ
     */
    MCAPI class Block const & getFallingBlock() const;
    /**
     * @symbol ?setFallDamageAmount@FallingBlock@@QEAAXM@Z
     */
    MCAPI void setFallDamageAmount(float);
    /**
     * @symbol ?setFallingBlock@FallingBlock@@QEAAXAEBVBlock@@_N@Z
     */
    MCAPI void setFallingBlock(class Block const &, bool);

//private:
    /**
     * @symbol ?_breakBlock@FallingBlock@@AEAAXXZ
     */
    MCAPI void _breakBlock();
    /**
     * @symbol ?_waitRemoval@FallingBlock@@AEAAXXZ
     */
    MCAPI void _waitRemoval();

private:

};