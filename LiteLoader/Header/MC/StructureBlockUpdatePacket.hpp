/**
 * @file  StructureBlockUpdatePacket.hpp
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
 * @brief MC class StructureBlockUpdatePacket.
 *
 */
class StructureBlockUpdatePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREBLOCKUPDATEPACKET
public:
    class StructureBlockUpdatePacket& operator=(class StructureBlockUpdatePacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~StructureBlockUpdatePacket();
    /**
     * @vtable 1
     * @symbol ?getId@StructureBlockUpdatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@StructureBlockUpdatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@StructureBlockUpdatePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@StructureBlockUpdatePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREBLOCKUPDATEPACKET
#endif
    /**
     * @symbol ??0StructureBlockUpdatePacket@@QEAA@XZ
     */
    MCAPI StructureBlockUpdatePacket();
    /**
     * @symbol ??0StructureBlockUpdatePacket@@QEAA@AEBV0@@Z
     */
    MCAPI StructureBlockUpdatePacket(class StructureBlockUpdatePacket const &);

};