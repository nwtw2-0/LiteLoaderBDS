/**
 * @file  ConduitBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ConduitBlockActor.
 *
 */
class ConduitBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONDUITBLOCKACTOR
public:
    class ConduitBlockActor& operator=(class ConduitBlockActor const &) = delete;
    ConduitBlockActor(class ConduitBlockActor const &) = delete;
    ConduitBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   982061780
     */
    virtual ~ConduitBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@ConduitBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -262278739
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@ConduitBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   832165564
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol ?tick@ConduitBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -177560746
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -291256027
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @hash   -285714901
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  20
     * @symbol ?hasAlphaLayer@ConduitBlockActor@@UEBA_NXZ
     * @hash   1127890863
     */
    virtual bool hasAlphaLayer() const;
    /**
     * @vftbl  31
     * @hash   -234921246
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @hash   -233997725
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -233074204
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -232150683
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @hash   -190772906
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @hash   -189849385
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol ?_getUpdatePacket@ConduitBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   1029612575
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  38
     * @symbol ?_onUpdatePacket@ConduitBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   807794675
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0ConduitBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   940236377
     */
    MCAPI ConduitBlockActor(class BlockPos const &);

//private:
    /**
     * @symbol ?_animateTick@ConduitBlockActor@@AEBAXAEAVBlockSource@@@Z
     * @hash   -905994578
     */
    MCAPI void _animateTick(class BlockSource &) const;
    /**
     * @symbol ?_checkShape@ConduitBlockActor@@AEAAXAEAVBlockSource@@@Z
     * @hash   -1386823946
     */
    MCAPI void _checkShape(class BlockSource &);
    /**
     * @symbol ?_updateTarget@ConduitBlockActor@@AEAAXAEAVBlockSource@@@Z
     * @hash   -171378891
     */
    MCAPI void _updateTarget(class BlockSource &);

private:

};