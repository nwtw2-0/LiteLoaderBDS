/**
 * @file  VanillaServerNetworkHandler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaServerNetworkHandler.
 *
 */
class VanillaServerNetworkHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLASERVERNETWORKHANDLER
public:
    class VanillaServerNetworkHandler& operator=(class VanillaServerNetworkHandler const &) = delete;
    VanillaServerNetworkHandler(class VanillaServerNetworkHandler const &) = delete;
    VanillaServerNetworkHandler() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~VanillaServerNetworkHandler();
    /**
     * @vtable 1
     * @symbol ?handle@VanillaServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
     */
    virtual void handle(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLASERVERNETWORKHANDLER
#endif
    /**
     * @symbol ??0VanillaServerNetworkHandler@@QEAA@V?$not_null@V?$NonOwnerPointer@VServerNetworkHandler@@@Bedrock@@@gsl@@AEAVServerInstance@@@Z
     */
    MCAPI VanillaServerNetworkHandler(class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>>, class ServerInstance &);

};