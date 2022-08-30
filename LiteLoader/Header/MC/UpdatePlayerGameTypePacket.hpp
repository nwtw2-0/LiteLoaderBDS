/**
 * @file  UpdatePlayerGameTypePacket.hpp
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
 * @brief MC class UpdatePlayerGameTypePacket.
 *
 */
class UpdatePlayerGameTypePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEPLAYERGAMETYPEPACKET
public:
    class UpdatePlayerGameTypePacket& operator=(class UpdatePlayerGameTypePacket const &) = delete;
    UpdatePlayerGameTypePacket(class UpdatePlayerGameTypePacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~UpdatePlayerGameTypePacket();
    /**
     * @vtable 1
     * @symbol ?getId@UpdatePlayerGameTypePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@UpdatePlayerGameTypePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@UpdatePlayerGameTypePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@UpdatePlayerGameTypePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEPLAYERGAMETYPEPACKET
#endif
    /**
     * @symbol ??0UpdatePlayerGameTypePacket@@QEAA@XZ
     */
    MCAPI UpdatePlayerGameTypePacket();
    /**
     * @symbol ??0UpdatePlayerGameTypePacket@@QEAA@W4GameType@@AEBUActorUniqueID@@@Z
     */
    MCAPI UpdatePlayerGameTypePacket(enum GameType, struct ActorUniqueID const &);

};