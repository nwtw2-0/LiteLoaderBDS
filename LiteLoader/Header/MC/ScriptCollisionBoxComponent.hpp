// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTCOLLISIONBOXCOMPONENT
#include "Extra/ScriptCollisionBoxComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTCOLLISIONBOXCOMPONENT
class ScriptCollisionBoxComponent {
#include "Extra/ScriptCollisionBoxComponentAPI.hpp"
public:
    /*0*/ virtual ~ScriptCollisionBoxComponent();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual bool applyComponentTo(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, class ScriptApi::ScriptObjectHandle const&) const;
    /*5*/ virtual void unk_vfn_5();
    /*6*/ virtual void unk_vfn_6();
    /*7*/ virtual void unk_vfn_7();
    /*8*/ virtual bool retrieveComponentFrom(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, class ScriptApi::ScriptObjectHandle&) const;
    /*9*/ virtual void unk_vfn_9();
    /*10*/ virtual void unk_vfn_10();
    /*11*/ virtual void unk_vfn_11();
    /*12*/ virtual bool hasComponent(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, bool&) const;

private:
    MCAPI static class HashedString const mHash;
};