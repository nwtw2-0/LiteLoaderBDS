/**
 * @file  RespawnPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum PlayerRespawnState :char {
    SERVER_SEARCHING = 0,
    SERVER_READY,
    CLIENT_READY,
};
#undef BEFORE_EXTRA

/**
 * @brief MC class RespawnPacket.
 *
 */
class RespawnPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    Vec3 respawnPosition;
    PlayerRespawnState respawnState;
    ActorRuntimeID runtimeId;
    inline static std::string getStateString(PlayerRespawnState state) {
#define CASE_ENUM(var) case PlayerRespawnState::var:\
return #var;
        switch (state)
        {
            CASE_ENUM(SERVER_SEARCHING);
            CASE_ENUM(SERVER_READY);
            CASE_ENUM(CLIENT_READY);
        default:
            break;
        }
        return fmt::format("Unknown({})",(int)state);
#undef CASE_ENUM
    }
    inline std::string toDebugString() {
        return fmt::format("{}: position: ({}), state: {}, runtimeId: {}",
            __super::toDebugString(),
            respawnPosition.toString(), getStateString(respawnState), runtimeId.id);
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESPAWNPACKET
public:
    class RespawnPacket& operator=(class RespawnPacket const &) = delete;
    RespawnPacket(class RespawnPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~RespawnPacket();
    /**
     * @vtable 1
     * @symbol ?getId@RespawnPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@RespawnPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@RespawnPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@RespawnPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESPAWNPACKET
#endif
    /**
     * @symbol ??0RespawnPacket@@QEAA@XZ
     */
    MCAPI RespawnPacket();
    /**
     * @symbol ??0RespawnPacket@@QEAA@AEBVVec3@@AEBW4PlayerRespawnState@@@Z
     */
    MCAPI RespawnPacket(class Vec3 const &, enum PlayerRespawnState const &);

};