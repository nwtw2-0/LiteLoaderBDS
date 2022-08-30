/**
 * @file  AvailableActorIdentifiersPacket.hpp
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
 * @brief MC class AvailableActorIdentifiersPacket.
 *
 */
class AvailableActorIdentifiersPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVAILABLEACTORIDENTIFIERSPACKET
public:
    class AvailableActorIdentifiersPacket& operator=(class AvailableActorIdentifiersPacket const &) = delete;
    AvailableActorIdentifiersPacket(class AvailableActorIdentifiersPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~AvailableActorIdentifiersPacket();
    /**
     * @vtable 1
     * @symbol ?getId@AvailableActorIdentifiersPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@AvailableActorIdentifiersPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@AvailableActorIdentifiersPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 4
     * @symbol ?readExtended@AvailableActorIdentifiersPacket@@UEAA?AUExtendedStreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /**
     * @vtable 6
     * @symbol ?_read@AvailableActorIdentifiersPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AVAILABLEACTORIDENTIFIERSPACKET
#endif
    /**
     * @symbol ??0AvailableActorIdentifiersPacket@@QEAA@XZ
     */
    MCAPI AvailableActorIdentifiersPacket();
    /**
     * @symbol ??0AvailableActorIdentifiersPacket@@QEAA@AEBV?$vector@UActorInfo@@V?$allocator@UActorInfo@@@std@@@std@@@Z
     */
    MCAPI AvailableActorIdentifiersPacket(std::vector<struct ActorInfo> const &);

};