/**
 * @file  ActorCommandOrigin.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "CommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorCommandOrigin.
 *
 */
class ActorCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORCOMMANDORIGIN
public:
    class ActorCommandOrigin& operator=(class ActorCommandOrigin const &) = delete;
    ActorCommandOrigin(class ActorCommandOrigin const &) = delete;
    ActorCommandOrigin() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ActorCommandOrigin();
    /**
     * @vtable 1
     * @symbol ?getRequestId@ActorCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @vtable 2
     * @symbol ?getName@ActorCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?getBlockPosition@ActorCommandOrigin@@UEBA?AVBlockPos@@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vtable 4
     * @symbol ?getWorldPosition@ActorCommandOrigin@@UEBA?AVVec3@@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vtable 5
     * @symbol ?getRotation@ActorCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @vtable 6
     * @symbol ?getLevel@ActorCommandOrigin@@UEBAPEAVLevel@@XZ
     */
    virtual class Level * getLevel() const;
    /**
     * @vtable 7
     * @symbol ?getDimension@ActorCommandOrigin@@UEBAPEAVDimension@@XZ
     */
    virtual class Dimension * getDimension() const;
    /**
     * @vtable 8
     * @symbol ?getEntity@ActorCommandOrigin@@UEBAPEAVActor@@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @vtable 9
     * @symbol ?getPermissionsLevel@ActorCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     */
    virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vtable 10
     * @symbol ?clone@ActorCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vtable 18
     * @symbol ?isSelectorExpansionAllowed@ActorCommandOrigin@@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vtable 23
     * @symbol ?getOriginType@ActorCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     */
    virtual enum CommandOriginType getOriginType() const;
    /**
     * @vtable 29
     * @symbol ?serialize@ActorCommandOrigin@@UEBA?AVCompoundTag@@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vtable 30
     * @symbol ?isValid@ActorCommandOrigin@@UEBA_NXZ
     */
    virtual bool isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORCOMMANDORIGIN
#endif
    /**
     * @symbol ??0ActorCommandOrigin@@QEAA@AEAVActor@@@Z
     */
    MCAPI ActorCommandOrigin(class Actor &);
    /**
     * @symbol ?load@ActorCommandOrigin@@SA?AV?$unique_ptr@VActorCommandOrigin@@U?$default_delete@VActorCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVLevel@@@Z
     */
    MCAPI static std::unique_ptr<class ActorCommandOrigin> load(class CompoundTag const &, class Level &);

};