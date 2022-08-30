/**
 * @file  MapCreateLockedCopyPacket.hpp
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
 * @brief MC class MapCreateLockedCopyPacket.
 *
 */
class MapCreateLockedCopyPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPCREATELOCKEDCOPYPACKET
public:
    class MapCreateLockedCopyPacket& operator=(class MapCreateLockedCopyPacket const &) = delete;
    MapCreateLockedCopyPacket(class MapCreateLockedCopyPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~MapCreateLockedCopyPacket();
    /**
     * @vtable 1
     * @symbol ?getId@MapCreateLockedCopyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@MapCreateLockedCopyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@MapCreateLockedCopyPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@MapCreateLockedCopyPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MAPCREATELOCKEDCOPYPACKET
#endif
    /**
     * @symbol ??0MapCreateLockedCopyPacket@@QEAA@XZ
     */
    MCAPI MapCreateLockedCopyPacket();
    /**
     * @symbol ??0MapCreateLockedCopyPacket@@QEAA@UActorUniqueID@@0@Z
     */
    MCAPI MapCreateLockedCopyPacket(struct ActorUniqueID, struct ActorUniqueID);
    /**
     * @symbol ?getNewMapId@MapCreateLockedCopyPacket@@QEBA?AUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID getNewMapId() const;
    /**
     * @symbol ?getOriginalMapId@MapCreateLockedCopyPacket@@QEBA?AUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID getOriginalMapId() const;

};