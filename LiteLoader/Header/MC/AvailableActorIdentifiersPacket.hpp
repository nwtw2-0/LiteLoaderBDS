// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/AvailableActorIdentifiersPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class AvailableActorIdentifiersPacket {
#include "Extra/AvailableActorIdentifiersPacketAPI.hpp"
public:
    virtual ~AvailableActorIdentifiersPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream&);
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
};