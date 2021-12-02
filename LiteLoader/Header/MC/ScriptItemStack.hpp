// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTITEMSTACK
#include "Extra/ScriptItemStackAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTITEMSTACK
class ScriptItemStack {
#include "Extra/ScriptItemStackAPI.hpp"
public:
    /*0*/ virtual ~ScriptItemStack();

public:
    MCAPI class Scripting::WeakObjectHandle getComponent(class Scripting::WeakLifetimeScope, std::string const&);
    MCAPI std::vector<class Scripting::WeakObjectHandle> getComponents(class Scripting::WeakLifetimeScope);
    MCAPI class ScriptItemStack& operator=(class ScriptItemStack&&);
    MCAPI class ItemStack& getItemStack();
    MCAPI class ItemStack const& getItemStack() const;
    MCAPI bool hasComponent(class Scripting::WeakLifetimeScope, std::string const&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptItemStack> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptItemStack> createHandle(class Scripting::WeakLifetimeScope, class ItemStack const&);
};