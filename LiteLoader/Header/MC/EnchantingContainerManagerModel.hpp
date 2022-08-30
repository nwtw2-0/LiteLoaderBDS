/**
 * @file  EnchantingContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantingContainerManagerModel.
 *
 */
class EnchantingContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTINGCONTAINERMANAGERMODEL
public:
    class EnchantingContainerManagerModel& operator=(class EnchantingContainerManagerModel const &) = delete;
    EnchantingContainerManagerModel(class EnchantingContainerManagerModel const &) = delete;
    EnchantingContainerManagerModel() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~EnchantingContainerManagerModel();
    /**
     * @vtable 6
     * @symbol ?getItemCopies@EnchantingContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vtable 7
     * @symbol ?setSlot@EnchantingContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vtable 8
     * @symbol ?getSlot@EnchantingContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vtable 9
     * @symbol ?setData@EnchantingContainerManagerModel@@UEAAXHH@Z
     */
    virtual void setData(int, int);
    /**
     * @vtable 10
     * @symbol ?broadcastChanges@EnchantingContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vtable 16
     * @symbol ?isValid@EnchantingContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @vtable 17
     * @symbol ?_postInit@EnchantingContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCHANTINGCONTAINERMANAGERMODEL
#endif
    /**
     * @symbol ??0EnchantingContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI EnchantingContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);
    /**
     * @symbol ?getEnchantOptions@EnchantingContainerManagerModel@@QEBAAEBV?$vector@VItemEnchantOption@@V?$allocator@VItemEnchantOption@@@std@@@std@@XZ
     */
    MCAPI std::vector<class ItemEnchantOption> const & getEnchantOptions() const;
    /**
     * @symbol ?recalculateOptions@EnchantingContainerManagerModel@@QEAAXXZ
     */
    MCAPI void recalculateOptions();
MCAPI static int const NUM_OPTIONS;

};