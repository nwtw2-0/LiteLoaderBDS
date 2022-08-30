/**
 * @file  ChestContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LevelContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChestContainerManagerModel.
 *
 */
class ChestContainerManagerModel : public LevelContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHESTCONTAINERMANAGERMODEL
public:
    class ChestContainerManagerModel& operator=(class ChestContainerManagerModel const &) = delete;
    ChestContainerManagerModel(class ChestContainerManagerModel const &) = delete;
    ChestContainerManagerModel() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ChestContainerManagerModel();
    /**
     * @vtable 16
     * @symbol ?isValid@ChestContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @vtable 17
     * @symbol ?_postInit@ChestContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHESTCONTAINERMANAGERMODEL
#endif
    /**
     * @symbol ??0ChestContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@UActorUniqueID@@@Z
     */
    MCAPI ChestContainerManagerModel(enum ContainerID, class Player &, struct ActorUniqueID);
    /**
     * @symbol ??0ChestContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@W4BlockActorType@@@Z
     */
    MCAPI ChestContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &, enum BlockActorType);

};