/**
 * @file  MaterialReducerContainerManagerModel.hpp
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
 * @brief MC class MaterialReducerContainerManagerModel.
 *
 */
class MaterialReducerContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MATERIALREDUCERCONTAINERMANAGERMODEL
public:
    class MaterialReducerContainerManagerModel& operator=(class MaterialReducerContainerManagerModel const &) = delete;
    MaterialReducerContainerManagerModel(class MaterialReducerContainerManagerModel const &) = delete;
    MaterialReducerContainerManagerModel() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~MaterialReducerContainerManagerModel();
    /**
     * @vtable 6
     * @symbol ?getItemCopies@MaterialReducerContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vtable 7
     * @symbol ?setSlot@MaterialReducerContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vtable 8
     * @symbol ?getSlot@MaterialReducerContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vtable 9
     * @symbol ?setData@MaterialReducerContainerManagerModel@@UEAAXHH@Z
     */
    virtual void setData(int, int);
    /**
     * @vtable 10
     * @symbol ?broadcastChanges@MaterialReducerContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vtable 16
     * @symbol ?isValid@MaterialReducerContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @vtable 17
     * @symbol ?_postInit@MaterialReducerContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MATERIALREDUCERCONTAINERMANAGERMODEL
#endif
    /**
     * @symbol ??0MaterialReducerContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI MaterialReducerContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);

};