// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptServerPacketEventListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptServerPacketEventListener {
#include "Extra/ScriptServerPacketEventListenerAPI.hpp"
public:
    virtual ~ScriptServerPacketEventListener();
    virtual int /*enum EventResult*/ onPacketReceivedFrom(class PacketHeader const&, class Packet const&);
};