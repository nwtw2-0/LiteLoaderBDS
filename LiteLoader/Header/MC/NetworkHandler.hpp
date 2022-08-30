/**
 * @file  NetworkHandler.hpp
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
 * @brief MC class NetworkHandler.
 *
 */
class NetworkHandler {

#define AFTER_EXTRA
// Add Member There
public:
class Connection {
public:
    Connection() = delete;
    Connection(Connection const&) = delete;
    Connection(Connection const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKHANDLER
public:
    class NetworkHandler& operator=(class NetworkHandler const &) = delete;
    NetworkHandler(class NetworkHandler const &) = delete;
    NetworkHandler() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKHANDLER
    /**
     * @vtable -1
     * @symbol ?_onDisable@NetworkHandler@@EEAAXXZ
     */
    MCVAPI void _onDisable();
    /**
     * @vtable -1
     * @symbol ?_onEnable@NetworkHandler@@EEAAXXZ
     */
    MCVAPI void _onEnable();
    /**
     * @vtable -1
     * @symbol ?getConnectionInfo@NetworkHandler@@UEBAAEBVGameConnectionInfo@Social@@XZ
     */
    MCVAPI class Social::GameConnectionInfo const & getConnectionInfo() const;
    /**
     * @vtable -1
     * @symbol ?getDefaultGamePort@NetworkHandler@@UEBAGXZ
     */
    MCVAPI unsigned short getDefaultGamePort() const;
    /**
     * @vtable -1
     * @symbol ?getDefaultGamePortv6@NetworkHandler@@UEBAGXZ
     */
    MCVAPI unsigned short getDefaultGamePortv6() const;
    /**
     * @vtable -1
     * @symbol ?onAllConnectionsClosed@NetworkHandler@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCVAPI void onAllConnectionsClosed(std::string const &, bool);
    /**
     * @vtable -1
     * @symbol ?onAllRemoteConnectionsClosed@NetworkHandler@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCVAPI void onAllRemoteConnectionsClosed(std::string const &, bool);
    /**
     * @vtable -1
     * @symbol ?onConnectionClosed@NetworkHandler@@EEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCVAPI void onConnectionClosed(class NetworkIdentifier const &, std::string const &, bool);
    /**
     * @vtable -1
     * @symbol ?onNewIncomingConnection@NetworkHandler@@EEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VNetworkPeer@@@std@@@Z
     */
    MCVAPI void onNewIncomingConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer>);
    /**
     * @vtable -1
     * @symbol ?onNewIncomingLocalConnection@NetworkHandler@@EEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VNetworkPeer@@@std@@@Z
     */
    MCVAPI void onNewIncomingLocalConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer>);
    /**
     * @vtable -1
     * @symbol ?onNewOutgoingConnection@NetworkHandler@@EEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VNetworkPeer@@@std@@@Z
     */
    MCVAPI void onNewOutgoingConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer>);
    /**
     * @vtable -1
     * @symbol ?onNewOutgoingLocalConnection@NetworkHandler@@EEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VNetworkPeer@@@std@@@Z
     */
    MCVAPI void onNewOutgoingLocalConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer>);
    /**
     * @vtable -1
     * @symbol ?onOutgoingConnectionFailed@NetworkHandler@@EEAAXXZ
     */
    MCVAPI void onOutgoingConnectionFailed();
    /**
     * @vtable -1
     * @symbol ?onWebsocketRequest@NetworkHandler@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$function@$$A6AXXZ@3@@Z
     */
    MCVAPI void onWebsocketRequest(std::string const &, std::string const &, class std::function<void (void)>);
    /**
     * @vtable -1
     * @symbol ?useIPv4Only@NetworkHandler@@UEBA_NXZ
     */
    MCVAPI bool useIPv4Only() const;
    /**
     * @vtable -1
     * @symbol ?useIPv6Only@NetworkHandler@@UEBA_NXZ
     */
    MCVAPI bool useIPv6Only() const;
    /**
     * @vtable -1
     * @symbol ??1NetworkHandler@@UEAA@XZ
     */
    MCVAPI ~NetworkHandler();
#endif
    /**
     * @symbol ?AddConnectionIfNeeded@NetworkHandler@@QEAA_N_KAEBV?$shared_ptr@UNetherNetInstance@@@std@@@Z
     */
    MCAPI bool AddConnectionIfNeeded(unsigned __int64, class std::shared_ptr<struct NetherNetInstance> const &);
    /**
     * @symbol ??0NetworkHandler@@QEAA@AEAVScheduler@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@UNetworkHandlerToggles@@AEBV?$NonOwnerPointer@VNetworkDebugManager@@@Bedrock@@@Z
     */
    MCAPI NetworkHandler(class Scheduler &, std::vector<std::string> const &, struct NetworkHandlerToggles, class Bedrock::NonOwnerPointer<class NetworkDebugManager> const &);
    /**
     * @symbol ?disconnect@NetworkHandler@@QEAAXXZ
     */
    MCAPI void disconnect();
    /**
     * @symbol ?enableAsyncFlush@NetworkHandler@@QEAAXAEBVNetworkIdentifier@@@Z
     */
    MCAPI void enableAsyncFlush(class NetworkIdentifier const &);
    /**
     * @symbol ?flush@NetworkHandler@@QEAAXAEBVNetworkIdentifier@@$$QEAV?$function@$$A6AXXZ@std@@@Z
     */
    MCAPI void flush(class NetworkIdentifier const &, class std::function<void (void)> &&);
    /**
     * @symbol ?getConnections@NetworkHandler@@QEBAAEBV?$vector@V?$unique_ptr@VConnection@NetworkHandler@@U?$default_delete@VConnection@NetworkHandler@@@std@@@std@@V?$allocator@V?$unique_ptr@VConnection@NetworkHandler@@U?$default_delete@VConnection@NetworkHandler@@@std@@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::unique_ptr<class NetworkHandler::Connection>> const & getConnections() const;
    /**
     * @symbol ?getConnector@NetworkHandler@@QEAAAEAVConnector@@XZ
     */
    MCAPI class Connector & getConnector();
    /**
     * @symbol ?getEncryptedPeerForUser@NetworkHandler@@QEAA?AV?$weak_ptr@VEncryptedNetworkPeer@@@std@@AEBVNetworkIdentifier@@@Z
     */
    MCAPI class std::weak_ptr<class EncryptedNetworkPeer> getEncryptedPeerForUser(class NetworkIdentifier const &);
    /**
     * @symbol ?getLocalNetworkId@NetworkHandler@@QEBA?AVNetworkIdentifier@@XZ
     */
    MCAPI class NetworkIdentifier getLocalNetworkId() const;
    /**
     * @symbol ?getNetworkStatistics@NetworkHandler@@QEBAPEBVNetworkStatistics@@XZ
     */
    MCAPI class NetworkStatistics const * getNetworkStatistics() const;
    /**
     * @symbol ?getPeerForUser@NetworkHandler@@QEAAPEAVNetworkPeer@@AEBVNetworkIdentifier@@@Z
     */
    MCAPI class NetworkPeer * getPeerForUser(class NetworkIdentifier const &);
    /**
     * @symbol ?getPrimaryNetworkId@NetworkHandler@@QEBA?AVNetworkIdentifier@@XZ
     */
    MCAPI class NetworkIdentifier getPrimaryNetworkId() const;
    /**
     * @symbol ?getResourcePackUploadManager@NetworkHandler@@QEAAAEAVResourcePackFileUploadManager@@AEAVPacketSender@@AEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class ResourcePackFileUploadManager & getResourcePackUploadManager(class PacketSender &, class NetworkIdentifier const &, std::string const &);
    /**
     * @symbol ?getServerId@NetworkHandler@@QEBA?AVNetworkIdentifier@@XZ
     */
    MCAPI class NetworkIdentifier getServerId() const;
    /**
     * @symbol ?getServerLocator@NetworkHandler@@QEAAAEAVServerLocator@@XZ
     */
    MCAPI class ServerLocator & getServerLocator();
    /**
     * @symbol ?host@NetworkHandler@@QEAA_NAEBUConnectionDefinition@@@Z
     */
    MCAPI bool host(struct ConnectionDefinition const &);
    /**
     * @symbol ?initializeSelectedTransportType@NetworkHandler@@QEAAXXZ
     */
    MCAPI void initializeSelectedTransportType();
    /**
     * @symbol ?initializeServerLocatorTransportType@NetworkHandler@@QEAAXXZ
     */
    MCAPI void initializeServerLocatorTransportType();
    /**
     * @symbol ?isHostingPlayer@NetworkHandler@@QEBA_NAEBVNetworkIdentifier@@AEBW4SubClientId@@@Z
     */
    MCAPI bool isHostingPlayer(class NetworkIdentifier const &, enum SubClientId const &) const;
    /**
     * @symbol ?isServer@NetworkHandler@@QEBA_NXZ
     */
    MCAPI bool isServer() const;
    /**
     * @symbol ?registerServerInstance@NetworkHandler@@QEAAXAEAVNetEventCallback@@@Z
     */
    MCAPI void registerServerInstance(class NetEventCallback &);
    /**
     * @symbol ?runEvents@NetworkHandler@@QEAAX_N@Z
     */
    MCAPI void runEvents(bool);
    /**
     * @symbol ?send@NetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVPacket@@W4SubClientId@@@Z
     */
    MCAPI void send(class NetworkIdentifier const &, class Packet const &, enum SubClientId);
    /**
     * @symbol ?sendToMultiple@NetworkHandler@@QEAAXAEBV?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@AEBVPacket@@@Z
     */
    MCAPI void sendToMultiple(std::vector<struct NetworkIdentifierWithSubId> const &, class Packet const &);
    /**
     * @symbol ?setCloseConnection@NetworkHandler@@QEAAXAEBVNetworkIdentifier@@@Z
     */
    MCAPI void setCloseConnection(class NetworkIdentifier const &);
    /**
     * @symbol ?unregisterClientOrServerInstance@NetworkHandler@@QEAAXAEBW4SubClientId@@@Z
     */
    MCAPI void unregisterClientOrServerInstance(enum SubClientId const &);
    /**
     * @symbol ?update@NetworkHandler@@QEAAXPEBV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@@Z
     */
    MCAPI void update(std::vector<class WeakEntityRef> const *);
MCAPI static class std::shared_ptr<struct NetherNetInstance> mNetherNetInstance;

//private:
    /**
     * @symbol ?_getConnectionFromId@NetworkHandler@@AEBAPEAVConnection@1@AEBVNetworkIdentifier@@@Z
     */
    MCAPI class NetworkHandler::Connection * _getConnectionFromId(class NetworkIdentifier const &) const;
    /**
     * @symbol ?_handlePacketViolation@NetworkHandler@@AEAAXW4StreamReadResult@@W4PacketViolationResponse@@W4MinecraftPacketIds@@AEBVNetworkIdentifier@@AEAVConnection@1@W4SubClientId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void _handlePacketViolation(enum StreamReadResult, enum PacketViolationResponse, enum MinecraftPacketIds, class NetworkIdentifier const &, class NetworkHandler::Connection &, enum SubClientId, std::string const &);
    /**
     * @symbol ?_sendInternal@NetworkHandler@@AEAAXAEBVNetworkIdentifier@@AEBVPacket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void _sendInternal(class NetworkIdentifier const &, class Packet const &, std::string const &);
    /**
     * @symbol ?_sortAndPacketizeEvents@NetworkHandler@@AEAA_NAEAVConnection@1@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
     */
    MCAPI bool _sortAndPacketizeEvents(class NetworkHandler::Connection &, class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);

private:

};