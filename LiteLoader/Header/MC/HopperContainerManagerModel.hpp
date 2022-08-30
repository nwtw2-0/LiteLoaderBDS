/**
 * @file  HopperContainerManagerModel.hpp
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
 * @brief MC class HopperContainerManagerModel.
 *
 */
class HopperContainerManagerModel : public LevelContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERCONTAINERMANAGERMODEL
public:
    class HopperContainerManagerModel& operator=(class HopperContainerManagerModel const &) = delete;
    HopperContainerManagerModel(class HopperContainerManagerModel const &) = delete;
    HopperContainerManagerModel() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~HopperContainerManagerModel();
    /**
     * @vtable 17
     * @symbol ?_postInit@HopperContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOPPERCONTAINERMANAGERMODEL
#endif
    /**
     * @symbol ??0HopperContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI HopperContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);
    /**
     * @symbol ??0HopperContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBUActorUniqueID@@@Z
     */
    MCAPI HopperContainerManagerModel(enum ContainerID, class Player &, struct ActorUniqueID const &);

};