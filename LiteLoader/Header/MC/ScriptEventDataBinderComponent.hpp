// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptEventDataBinderComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptEventDataBinderComponent {
#include "Extra/ScriptEventDataBinderComponentAPI.hpp"
public:
    virtual ~ScriptEventDataBinderComponent();
    virtual bool serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);
    virtual bool deserialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);

public:
    MCAPI static std::string const TAG;
};