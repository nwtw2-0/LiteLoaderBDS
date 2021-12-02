// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Bedrock.hpp"
#define EXTRA_INCLUDE_PART_SERVERINSTANCEEVENTCOORDINATOR
#include "Extra/ServerInstanceEventCoordinatorAPI.hpp"
#undef EXTRA_INCLUDE_PART_SERVERINSTANCEEVENTCOORDINATOR
class ServerInstanceEventCoordinator {
#include "Extra/ServerInstanceEventCoordinatorAPI.hpp"
public:
    /*0*/ virtual ~ServerInstanceEventCoordinator();

public:
    MCAPI void registerServerInstanceEventHandler(std::unique_ptr<class ServerInstanceEventHandler>&&);
    MCAPI void sendLeaveGameDone(struct ServerInstanceEvent const&);
    MCAPI void sendServerInitializeEnd(class ServerInstance&);
    MCAPI void sendServerInitializeStart(class ServerInstance&);
    MCAPI void sendServerLevelInitialized(class ServerInstance&, class Level&);
    MCAPI void sendServerMinecraftInitialized(class ServerInstance&, class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> const&);
    MCAPI void sendServerThreadStarted(class ServerInstance&);
    MCAPI void sendServerThreadStopped(class ServerInstance&);
    MCAPI void sendServerUpdateEnd(class ServerInstance&);
    MCAPI void sendServerUpdateStart(class ServerInstance&);
    MCAPI void sendStartLeaveGame(class ServerInstance&);
};