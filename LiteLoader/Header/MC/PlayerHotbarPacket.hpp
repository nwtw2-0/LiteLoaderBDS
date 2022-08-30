/**
 * @file  PlayerHotbarPacket.hpp
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
 * @brief MC class PlayerHotbarPacket.
 *
 */
class PlayerHotbarPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERHOTBARPACKET
public:
    class PlayerHotbarPacket& operator=(class PlayerHotbarPacket const &) = delete;
    PlayerHotbarPacket(class PlayerHotbarPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~PlayerHotbarPacket();
    /**
     * @vtable 1
     * @symbol ?getId@PlayerHotbarPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@PlayerHotbarPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@PlayerHotbarPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@PlayerHotbarPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERHOTBARPACKET
#endif
    /**
     * @symbol ??0PlayerHotbarPacket@@QEAA@XZ
     */
    MCAPI PlayerHotbarPacket();
    /**
     * @symbol ??0PlayerHotbarPacket@@QEAA@IW4ContainerID@@_N@Z
     */
    MCAPI PlayerHotbarPacket(unsigned int, enum ContainerID, bool);

};