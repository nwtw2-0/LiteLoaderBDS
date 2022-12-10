/**
 * @file  PositionTrackingDBServerBroadcastPacket.hpp
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
 * @brief MC class PositionTrackingDBServerBroadcastPacket.
 *
 */
class PositionTrackingDBServerBroadcastPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSITIONTRACKINGDBSERVERBROADCASTPACKET
public:
    class PositionTrackingDBServerBroadcastPacket& operator=(class PositionTrackingDBServerBroadcastPacket const &) = delete;
    PositionTrackingDBServerBroadcastPacket(class PositionTrackingDBServerBroadcastPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   570530902
     */
    virtual ~PositionTrackingDBServerBroadcastPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@PositionTrackingDBServerBroadcastPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1313387322
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@PositionTrackingDBServerBroadcastPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   2095499123
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@PositionTrackingDBServerBroadcastPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -890740684
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@PositionTrackingDBServerBroadcastPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1595789804
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0PositionTrackingDBServerBroadcastPacket@@QEAA@XZ
     * @hash   666334340
     */
    MCAPI PositionTrackingDBServerBroadcastPacket();

};