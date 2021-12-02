// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTACTORUNIQUEIDBINDERCOMPONENT
#include "Extra/ScriptActorUniqueIdBinderComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTACTORUNIQUEIDBINDERCOMPONENT
class ScriptActorUniqueIdBinderComponent {
#include "Extra/ScriptActorUniqueIdBinderComponentAPI.hpp"
public:
    /*0*/ virtual ~ScriptActorUniqueIdBinderComponent();
    /*1*/ virtual bool serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&) const;
    /*2*/ virtual bool deserialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);

public:
    MCAPI struct ActorUniqueID getIdentifier() const;

    MCAPI static std::string const TAG;
};