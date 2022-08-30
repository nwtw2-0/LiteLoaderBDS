/**
 * @file  ServerSettingsRequestPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerSettingsRequestPacket.
 *
 */
class ServerSettingsRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSETTINGSREQUESTPACKET
public:
    class ServerSettingsRequestPacket& operator=(class ServerSettingsRequestPacket const &) = delete;
    ServerSettingsRequestPacket(class ServerSettingsRequestPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ServerSettingsRequestPacket();
    /**
     * @vtable 1
     * @symbol ?getId@ServerSettingsRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@ServerSettingsRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@ServerSettingsRequestPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@ServerSettingsRequestPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERSETTINGSREQUESTPACKET
#endif
    /**
     * @symbol ??0ServerSettingsRequestPacket@@QEAA@XZ
     */
    MCAPI ServerSettingsRequestPacket();

};