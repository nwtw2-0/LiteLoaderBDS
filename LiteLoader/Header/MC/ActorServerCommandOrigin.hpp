/**
 * @file  ActorServerCommandOrigin.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ActorCommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorServerCommandOrigin.
 *
 */
class ActorServerCommandOrigin : public ActorCommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSERVERCOMMANDORIGIN
public:
    class ActorServerCommandOrigin& operator=(class ActorServerCommandOrigin const &) = delete;
    ActorServerCommandOrigin(class ActorServerCommandOrigin const &) = delete;
    ActorServerCommandOrigin() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ActorServerCommandOrigin();
    /**
     * @vtable 9
     * @symbol ?getPermissionsLevel@ActorServerCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     */
    virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vtable 10
     * @symbol ?clone@ActorServerCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vtable 18
     * @symbol ?isSelectorExpansionAllowed@ActorServerCommandOrigin@@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vtable 23
     * @symbol ?getOriginType@ActorServerCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     */
    virtual enum CommandOriginType getOriginType() const;
    /**
     * @vtable 29
     * @symbol ?serialize@ActorServerCommandOrigin@@UEBA?AVCompoundTag@@XZ
     */
    virtual class CompoundTag serialize() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORSERVERCOMMANDORIGIN
#endif
    /**
     * @symbol ??0ActorServerCommandOrigin@@QEAA@AEAVActor@@@Z
     */
    MCAPI ActorServerCommandOrigin(class Actor &);
    /**
     * @symbol ?getTargetOther@ActorServerCommandOrigin@@QEBA?AUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID getTargetOther() const;
    /**
     * @symbol ?setTargetOther@ActorServerCommandOrigin@@QEAAXUActorUniqueID@@@Z
     */
    MCAPI void setTargetOther(struct ActorUniqueID);
    /**
     * @symbol ?load@ActorServerCommandOrigin@@SA?AV?$unique_ptr@VActorServerCommandOrigin@@U?$default_delete@VActorServerCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVLevel@@@Z
     */
    MCAPI static std::unique_ptr<class ActorServerCommandOrigin> load(class CompoundTag const &, class Level &);

};