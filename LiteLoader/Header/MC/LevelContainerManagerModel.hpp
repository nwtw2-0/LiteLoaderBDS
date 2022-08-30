/**
 * @file  LevelContainerManagerModel.hpp
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
 * @brief MC class LevelContainerManagerModel.
 *
 */
class LevelContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCONTAINERMANAGERMODEL
public:
    class LevelContainerManagerModel& operator=(class LevelContainerManagerModel const &) = delete;
    LevelContainerManagerModel(class LevelContainerManagerModel const &) = delete;
    LevelContainerManagerModel() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~LevelContainerManagerModel();
    /**
     * @vtable 6
     * @symbol ?getItemCopies@LevelContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vtable 7
     * @symbol ?setSlot@LevelContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vtable 8
     * @symbol ?getSlot@LevelContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vtable 9
     * @symbol ?setData@LevelContainerManagerModel@@UEAAXHH@Z
     */
    virtual void setData(int, int);
    /**
     * @vtable 10
     * @symbol ?broadcastChanges@LevelContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vtable 16
     * @symbol ?isValid@LevelContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @vtable 17
     * @symbol ?_postInit@LevelContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELCONTAINERMANAGERMODEL
#endif
    /**
     * @symbol ??0LevelContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@UActorUniqueID@@@Z
     */
    MCAPI LevelContainerManagerModel(enum ContainerID, class Player &, struct ActorUniqueID);
    /**
     * @symbol ??0LevelContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@W4BlockActorType@@@Z
     */
    MCAPI LevelContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &, enum BlockActorType);
    /**
     * @symbol ?getBlockPos@LevelContainerManagerModel@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getBlockPos() const;
    /**
     * @symbol ?getEntityUniqueID@LevelContainerManagerModel@@QEBA?AUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID getEntityUniqueID() const;

//protected:
    /**
     * @symbol ?_getBlockEntity@LevelContainerManagerModel@@IEAAPEAVBlockActor@@XZ
     */
    MCAPI class BlockActor * _getBlockEntity();
    /**
     * @symbol ?_getRawContainer@LevelContainerManagerModel@@IEAAPEAVContainer@@XZ
     */
    MCAPI class Container * _getRawContainer();

protected:

};