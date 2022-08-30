/**
 * @file  GameSpecificNetEventCallback.hpp
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
 * @brief MC class GameSpecificNetEventCallback.
 *
 */
class GameSpecificNetEventCallback {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMESPECIFICNETEVENTCALLBACK
public:
    class GameSpecificNetEventCallback& operator=(class GameSpecificNetEventCallback const &) = delete;
    GameSpecificNetEventCallback(class GameSpecificNetEventCallback const &) = delete;
    GameSpecificNetEventCallback() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~GameSpecificNetEventCallback();
    /**
     * @vtable 1
     * @symbol ?handle@GameSpecificNetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
     */
    virtual void handle(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMESPECIFICNETEVENTCALLBACK
#endif

};