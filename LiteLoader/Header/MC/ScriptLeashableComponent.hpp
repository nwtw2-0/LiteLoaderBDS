// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#include "ScriptActorComponent.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTLEASHABLECOMPONENT
#include "Extra/ScriptLeashableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTLEASHABLECOMPONENT
class ScriptLeashableComponent : public ScriptActorComponent {
#include "Extra/ScriptLeashableComponentAPI.hpp"
public:
    /*0*/ virtual ~ScriptLeashableComponent();

public:
    MCAPI class Scripting::Result<float> getSoftDistance() const;
    MCAPI class Scripting::Result<void> leash(class ScriptActor&) const;
    MCAPI class Scripting::Result<void> unleash() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptLeashableComponent> bind(struct Scripting::Version);
};