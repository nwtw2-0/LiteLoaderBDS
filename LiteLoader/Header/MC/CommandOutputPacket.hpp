/**
 * @file  CommandOutputPacket.hpp
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
 * @brief MC class CommandOutputPacket.
 *
 */
class CommandOutputPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDOUTPUTPACKET
public:
    class CommandOutputPacket& operator=(class CommandOutputPacket const &) = delete;
    CommandOutputPacket(class CommandOutputPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~CommandOutputPacket();
    /**
     * @vtable 1
     * @symbol ?getId@CommandOutputPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@CommandOutputPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@CommandOutputPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@CommandOutputPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDOUTPUTPACKET
#endif
    /**
     * @symbol ??0CommandOutputPacket@@QEAA@XZ
     */
    MCAPI CommandOutputPacket();
    /**
     * @symbol ??0CommandOutputPacket@@QEAA@AEBVCommandOrigin@@AEBVCommandOutput@@@Z
     */
    MCAPI CommandOutputPacket(class CommandOrigin const &, class CommandOutput const &);

};