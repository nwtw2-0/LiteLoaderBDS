/**
 * @file  ScriptItemGameplayHandler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "ScriptModuleMinecraft.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptItemGameplayHandler.
 *
 */
class ScriptItemGameplayHandler {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTITEMGAMEPLAYHANDLER
public:
    class ScriptItemGameplayHandler& operator=(class ScriptItemGameplayHandler const &) = delete;
    ScriptItemGameplayHandler(class ScriptItemGameplayHandler const &) = delete;
    ScriptItemGameplayHandler() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ScriptItemGameplayHandler();
    /**
     * @vtable 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vtable 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vtable 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vtable 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vtable 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vtable 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vtable 9
     * @symbol ?handleEvent@ScriptItemGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUItemDefinitionEventTriggeredEvent@@@Z
     */
    virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct ItemDefinitionEventTriggeredEvent &);
    /**
     * @vtable 10
     * @symbol ?handleEvent@ScriptItemGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUItemUseOnEvent@@@Z
     */
    virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct ItemUseOnEvent &);
    /**
     * @vtable 11
     * @symbol ?handleEvent@ScriptItemGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUItemUseEvent@@@Z
     */
    virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct ItemUseEvent &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTITEMGAMEPLAYHANDLER
#endif

//private:
    /**
     * @symbol ?_handleItemDefinitionEventTriggered@ScriptItemGameplayHandler@@AEAA_NAEAUItemDefinitionEventTriggeredEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     */
    MCAPI bool _handleItemDefinitionEventTriggered(struct ItemDefinitionEventTriggeredEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>);
    /**
     * @symbol ?_handleItemUseEvent@ScriptItemGameplayHandler@@AEAA_NAEAUItemUseEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     */
    MCAPI bool _handleItemUseEvent(struct ItemUseEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>);
    /**
     * @symbol ?_handleItemUseOnEvent@ScriptItemGameplayHandler@@AEAA_NAEAUItemUseOnEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     */
    MCAPI bool _handleItemUseOnEvent(struct ItemUseOnEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>);

private:

};