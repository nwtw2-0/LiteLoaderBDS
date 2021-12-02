// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTECSBINDERCOMPONENT
#include "Extra/ScriptEcsBinderComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTECSBINDERCOMPONENT
class ScriptEcsBinderComponent {
#include "Extra/ScriptEcsBinderComponentAPI.hpp"
public:
    /*0*/ virtual ~ScriptEcsBinderComponent();
    /*1*/ virtual bool serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&) const;
    /*2*/ virtual bool deserialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);

public:
    MCAPI enum entt::entity getIdentifier() const;

    MCAPI static std::string const TAG;
};