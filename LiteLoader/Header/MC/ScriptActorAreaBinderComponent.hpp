// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTACTORAREABINDERCOMPONENT
#include "Extra/ScriptActorAreaBinderComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTACTORAREABINDERCOMPONENT
class ScriptActorAreaBinderComponent {
#include "Extra/ScriptActorAreaBinderComponentAPI.hpp"
public:
    /*0*/ virtual ~ScriptActorAreaBinderComponent();
    /*1*/ virtual bool serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&) const;
    /*2*/ virtual bool deserialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);

public:
    MCAPI struct ActorUniqueID getIdentifier() const;

    MCAPI static std::string const TAG;
};