/**
 * @file  ContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerManagerModel.
 *
 */
class ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERMANAGERMODEL
public:
    class ContainerManagerModel& operator=(class ContainerManagerModel const &) = delete;
    ContainerManagerModel(class ContainerManagerModel const &) = delete;
    ContainerManagerModel() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ContainerManagerModel();
    /**
     * @vtable 1
     * @symbol ?getContainerId@ContainerManagerModel@@UEBA?AW4ContainerID@@XZ
     */
    virtual enum ContainerID getContainerId() const;
    /**
     * @vtable 2
     * @symbol ?setContainerId@ContainerManagerModel@@UEAAXW4ContainerID@@@Z
     */
    virtual void setContainerId(enum ContainerID);
    /**
     * @vtable 3
     * @symbol ?getContainerType@ContainerManagerModel@@UEBA?AW4ContainerType@@XZ
     */
    virtual enum ContainerType getContainerType() const;
    /**
     * @vtable 4
     * @symbol ?setContainerType@ContainerManagerModel@@UEAAXW4ContainerType@@@Z
     */
    virtual void setContainerType(enum ContainerType);
    /**
     * @vtable 5
     * @symbol ?serverInitItemStackIds@ContainerManagerModel@@UEAAXXZ
     */
    virtual void serverInitItemStackIds();
    /**
     * @vtable 6
     * @symbol ?getItemCopies@TradeContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const = 0;
    /**
     * @vtable 7
     * @symbol ?setSlot@TradeContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool) = 0;
    /**
     * @vtable 8
     * @symbol ?getSlot@TradeContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const = 0;
    /**
     * @vtable 9
     * @symbol ?setData@ElementConstructorContainerManagerModel@@UEAAXHH@Z
     */
    virtual void setData(int, int) = 0;
    /**
     * @vtable 10
     * @symbol ?broadcastChanges@TradeContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges() = 0;
    /**
     * @vtable 11
     * @symbol ?tick@ContainerManagerModel@@MEAA_NXZ
     */
    virtual bool tick();
    /**
     * @vtable 12
     * @symbol ?debitPlayerLevels@ContainerManagerModel@@UEAAXH@Z
     */
    virtual void debitPlayerLevels(int);
    /**
     * @vtable 13
     * @symbol ?isCreativeMode@ContainerManagerModel@@UEBA_NXZ
     */
    virtual bool isCreativeMode() const;
    /**
     * @vtable 14
     * @symbol ?isClientSide@ContainerManagerModel@@UEBA_NXZ
     */
    virtual bool isClientSide() const;
    /**
     * @vtable 15
     * @symbol ?isServerAuthoritative@ContainerManagerModel@@UEBA_NXZ
     */
    virtual bool isServerAuthoritative() const;
    /**
     * @vtable 16
     * @symbol ?isValid@ContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @vtable 17
     * @symbol ?_postInit@TradeContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERMANAGERMODEL
#endif
    /**
     * @symbol ??0ContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@@Z
     */
    MCAPI ContainerManagerModel(enum ContainerID, class Player &);
    /**
     * @symbol ?getPlayer@ContainerManagerModel@@QEBAAEAVPlayer@@XZ
     */
    MCAPI class Player & getPlayer() const;
    /**
     * @symbol ?postInit@ContainerManagerModel@@QEAAXXZ
     */
    MCAPI void postInit();

//protected:
    /**
     * @symbol ?_addContainer@ContainerManagerModel@@IEAAXV?$shared_ptr@VContainerModel@@@std@@@Z
     */
    MCAPI void _addContainer(class std::shared_ptr<class ContainerModel>);
    /**
     * @symbol ?_containerScreenContext@ContainerManagerModel@@IEAA?AVContainerScreenContext@@AEBVBlockPos@@@Z
     */
    MCAPI class ContainerScreenContext _containerScreenContext(class BlockPos const &);
    /**
     * @symbol ?_containerScreenContext@ContainerManagerModel@@IEAA?AVContainerScreenContext@@UActorUniqueID@@@Z
     */
    MCAPI class ContainerScreenContext _containerScreenContext(struct ActorUniqueID);
    /**
     * @symbol ?_getContainer@ContainerManagerModel@@IEBA?AV?$shared_ptr@VContainerModel@@@std@@W4ContainerEnumName@@@Z
     */
    MCAPI class std::shared_ptr<class ContainerModel> _getContainer(enum ContainerEnumName) const;
    /**
     * @symbol ?_isPlayerInRangeOfPosition@ContainerManagerModel@@IEBA_NAEBVBlockPos@@M@Z
     */
    MCAPI bool _isPlayerInRangeOfPosition(class BlockPos const &, float) const;
    /**
     * @symbol ?_appendCopies@ContainerManagerModel@@KAXAEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBV23@@Z
     */
    MCAPI static void _appendCopies(std::vector<class ItemStack> &, std::vector<class ItemStack> const &);

protected:

};