/**
 * @file  LabTableContainerManagerModel.hpp
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
 * @brief MC class LabTableContainerManagerModel.
 *
 */
class LabTableContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LABTABLECONTAINERMANAGERMODEL
public:
    class LabTableContainerManagerModel& operator=(class LabTableContainerManagerModel const &) = delete;
    LabTableContainerManagerModel(class LabTableContainerManagerModel const &) = delete;
    LabTableContainerManagerModel() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~LabTableContainerManagerModel();
    /**
     * @vtable 6
     * @symbol ?getItemCopies@LabTableContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vtable 7
     * @symbol ?setSlot@LabTableContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vtable 8
     * @symbol ?getSlot@LabTableContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vtable 9
     * @symbol ?setData@LabTableContainerManagerModel@@UEAAXHH@Z
     */
    virtual void setData(int, int);
    /**
     * @vtable 10
     * @symbol ?broadcastChanges@LabTableContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vtable 16
     * @symbol ?isValid@LabTableContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @vtable 17
     * @symbol ?_postInit@LabTableContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LABTABLECONTAINERMANAGERMODEL
#endif
    /**
     * @symbol ??0LabTableContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI LabTableContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);
MCAPI static int const INPUT_SLOTS;

};