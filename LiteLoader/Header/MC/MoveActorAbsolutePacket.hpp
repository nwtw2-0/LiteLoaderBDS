/**
 * @file  MoveActorAbsolutePacket.hpp
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
 * @brief MC class MoveActorAbsolutePacket.
 *
 */
class MoveActorAbsolutePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEACTORABSOLUTEPACKET
public:
    class MoveActorAbsolutePacket& operator=(class MoveActorAbsolutePacket const &) = delete;
    MoveActorAbsolutePacket(class MoveActorAbsolutePacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~MoveActorAbsolutePacket();
    /**
     * @vtable 1
     * @symbol ?getId@MoveActorAbsolutePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@MoveActorAbsolutePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@MoveActorAbsolutePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@MoveActorAbsolutePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEACTORABSOLUTEPACKET
#endif
    /**
     * @symbol ??0MoveActorAbsolutePacket@@QEAA@XZ
     */
    MCAPI MoveActorAbsolutePacket();
    /**
     * @symbol ??0MoveActorAbsolutePacket@@QEAA@AEBVMoveActorAbsoluteData@@@Z
     */
    MCAPI MoveActorAbsolutePacket(class MoveActorAbsoluteData const &);

};