/**
 * @file  AnimatePacket.hpp
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
 * @brief MC class AnimatePacket.
 *
 */
class AnimatePacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    enum Action
    {
        NoAction = 0,
        Swing = 1,
        WakeUp = 3,
        CriticalHit = 4,
        // MagicCriticalHit=5,
        RowRight = 128,
        RowLeft = 129,
    };
    ActorRuntimeID mRuntimeId;
    Action mAction;
    float mData;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATEPACKET
public:
    class AnimatePacket& operator=(class AnimatePacket const &) = delete;
    AnimatePacket(class AnimatePacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~AnimatePacket();
    /**
     * @vtable 1
     * @symbol ?getId@AnimatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@AnimatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@AnimatePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@AnimatePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANIMATEPACKET
#endif
    /**
     * @symbol ??0AnimatePacket@@QEAA@XZ
     */
    MCAPI AnimatePacket();
    /**
     * @symbol ??0AnimatePacket@@QEAA@W4Action@0@VActorRuntimeID@@M@Z
     */
    MCAPI AnimatePacket(enum AnimatePacket::Action, class ActorRuntimeID, float);
    /**
     * @symbol ??0AnimatePacket@@QEAA@W4Action@0@VActorRuntimeID@@@Z
     */
    MCAPI AnimatePacket(enum AnimatePacket::Action, class ActorRuntimeID);
    /**
     * @symbol ??0AnimatePacket@@QEAA@W4Action@0@AEAVActor@@@Z
     */
    MCAPI AnimatePacket(enum AnimatePacket::Action, class Actor &);

};