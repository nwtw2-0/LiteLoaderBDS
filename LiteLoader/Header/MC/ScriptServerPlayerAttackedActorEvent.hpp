// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTSERVERPLAYERATTACKEDACTOREVENT
#include "Extra/ScriptServerPlayerAttackedActorEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERPLAYERATTACKEDACTOREVENT
class ScriptServerPlayerAttackedActorEvent {
#include "Extra/ScriptServerPlayerAttackedActorEventAPI.hpp"
public:
    /*0*/ virtual ~ScriptServerPlayerAttackedActorEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;

public:
    MCAPI void setAttackedActorId(struct ActorUniqueID const&);
    MCAPI void setPlayerId(struct ActorUniqueID const&);

private:
    MCAPI static class HashedString const mHash;
};