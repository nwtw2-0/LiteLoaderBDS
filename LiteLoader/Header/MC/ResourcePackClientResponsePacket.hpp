/**
 * @file  ResourcePackClientResponsePacket.hpp
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
 * @brief MC class ResourcePackClientResponsePacket.
 *
 */
class ResourcePackClientResponsePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKCLIENTRESPONSEPACKET
public:
    class ResourcePackClientResponsePacket& operator=(class ResourcePackClientResponsePacket const &) = delete;
    ResourcePackClientResponsePacket(class ResourcePackClientResponsePacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ResourcePackClientResponsePacket();
    /**
     * @vtable 1
     * @symbol ?getId@ResourcePackClientResponsePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@ResourcePackClientResponsePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@ResourcePackClientResponsePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@ResourcePackClientResponsePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKCLIENTRESPONSEPACKET
#endif
    /**
     * @symbol ??0ResourcePackClientResponsePacket@@QEAA@XZ
     */
    MCAPI ResourcePackClientResponsePacket();
    /**
     * @symbol ?getDownloadingPacks@ResourcePackClientResponsePacket@@QEBAAEBV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI class std::set<std::string, struct std::less<std::string>, class std::allocator<std::string>> const & getDownloadingPacks() const;
    /**
     * @symbol ?isResponse@ResourcePackClientResponsePacket@@QEBA_NW4ResourcePackResponse@@@Z
     */
    MCAPI bool isResponse(enum ResourcePackResponse) const;

};