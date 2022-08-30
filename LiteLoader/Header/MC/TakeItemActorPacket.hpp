/**
 * @file  TakeItemActorPacket.hpp
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
 * @brief MC class TakeItemActorPacket.
 *
 */
class TakeItemActorPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAKEITEMACTORPACKET
public:
    class TakeItemActorPacket& operator=(class TakeItemActorPacket const &) = delete;
    TakeItemActorPacket(class TakeItemActorPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~TakeItemActorPacket();
    /**
     * @vtable 1
     * @symbol ?getId@TakeItemActorPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@TakeItemActorPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@TakeItemActorPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@TakeItemActorPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TAKEITEMACTORPACKET
#endif
    /**
     * @symbol ??0TakeItemActorPacket@@QEAA@XZ
     */
    MCAPI TakeItemActorPacket();
    /**
     * @symbol ??0TakeItemActorPacket@@QEAA@VActorRuntimeID@@0@Z
     */
    MCAPI TakeItemActorPacket(class ActorRuntimeID, class ActorRuntimeID);

};