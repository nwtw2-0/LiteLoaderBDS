/**
 * @file  CreativeContentPacket.hpp
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
 * @brief MC class CreativeContentPacket.
 *
 */
class CreativeContentPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVECONTENTPACKET
public:
    class CreativeContentPacket& operator=(class CreativeContentPacket const &) = delete;
    CreativeContentPacket(class CreativeContentPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~CreativeContentPacket();
    /**
     * @vtable 1
     * @symbol ?getId@CreativeContentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@CreativeContentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@CreativeContentPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@CreativeContentPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CREATIVECONTENTPACKET
#endif
    /**
     * @symbol ??0CreativeContentPacket@@QEAA@XZ
     */
    MCAPI CreativeContentPacket();
    /**
     * @symbol ??0CreativeContentPacket@@QEAA@AEBV?$vector@VCreativeItemEntry@@V?$allocator@VCreativeItemEntry@@@std@@@std@@@Z
     */
    MCAPI CreativeContentPacket(std::vector<class CreativeItemEntry> const &);

};