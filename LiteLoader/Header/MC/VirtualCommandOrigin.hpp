/**
 * @file  VirtualCommandOrigin.hpp
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
 * @brief MC class VirtualCommandOrigin.
 *
 */
class VirtualCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIRTUALCOMMANDORIGIN
public:
    class VirtualCommandOrigin& operator=(class VirtualCommandOrigin const &) = delete;
    VirtualCommandOrigin(class VirtualCommandOrigin const &) = delete;
    VirtualCommandOrigin() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~VirtualCommandOrigin();
    /**
     * @vtable 1
     * @symbol ?getRequestId@VirtualCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @vtable 2
     * @symbol ?getName@VirtualCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?getBlockPosition@VirtualCommandOrigin@@UEBA?AVBlockPos@@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vtable 4
     * @symbol ?getWorldPosition@VirtualCommandOrigin@@UEBA?AVVec3@@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vtable 5
     * @symbol ?getRotation@VirtualCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @vtable 6
     * @symbol ?getLevel@VirtualCommandOrigin@@UEBAPEAVLevel@@XZ
     */
    virtual class Level * getLevel() const;
    /**
     * @vtable 7
     * @symbol ?getDimension@VirtualCommandOrigin@@UEBAPEAVDimension@@XZ
     */
    virtual class Dimension * getDimension() const;
    /**
     * @vtable 8
     * @symbol ?getEntity@VirtualCommandOrigin@@UEBAPEAVActor@@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @vtable 9
     * @symbol ?getPermissionsLevel@VirtualCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     */
    virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vtable 10
     * @symbol ?clone@VirtualCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vtable 13
     * @symbol ?hasChatPerms@VirtualCommandOrigin@@UEBA_NXZ
     */
    virtual bool hasChatPerms() const;
    /**
     * @vtable 14
     * @symbol ?hasTellPerms@VirtualCommandOrigin@@UEBA_NXZ
     */
    virtual bool hasTellPerms() const;
    /**
     * @vtable 15
     * @symbol ?canUseAbility@VirtualCommandOrigin@@UEBA_NW4AbilitiesIndex@@@Z
     */
    virtual bool canUseAbility(enum AbilitiesIndex) const;
    /**
     * @vtable 17
     * @symbol ?canUseCommandsWithoutCheatsEnabled@VirtualCommandOrigin@@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @vtable 18
     * @symbol ?isSelectorExpansionAllowed@VirtualCommandOrigin@@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vtable 19
     * @symbol ?getSourceId@VirtualCommandOrigin@@UEBAAEBVNetworkIdentifier@@XZ
     */
    virtual class NetworkIdentifier const & getSourceId() const;
    /**
     * @vtable 21
     * @symbol ?getOutputReceiver@VirtualCommandOrigin@@UEBAAEBVCommandOrigin@@XZ
     */
    virtual class CommandOrigin const & getOutputReceiver() const;
    /**
     * @vtable 22
     * @symbol ?getIdentity@VirtualCommandOrigin@@UEBA?AUCommandOriginIdentity@@XZ
     */
    virtual struct CommandOriginIdentity getIdentity() const;
    /**
     * @vtable 23
     * @symbol ?getOriginType@VirtualCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     */
    virtual enum CommandOriginType getOriginType() const;
    /**
     * @vtable 27
     * @symbol ?updateValues@VirtualCommandOrigin@@UEAAXXZ
     */
    virtual void updateValues();
    /**
     * @vtable 28
     * @symbol ?getExecutePosition@VirtualCommandOrigin@@UEBA?BVVec3@@HAEBVCommandPositionFloat@@@Z
     */
    virtual class Vec3 const getExecutePosition(int, class CommandPositionFloat const &) const;
    /**
     * @vtable 29
     * @symbol ?serialize@VirtualCommandOrigin@@UEBA?AVCompoundTag@@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vtable 30
     * @symbol ?isValid@VirtualCommandOrigin@@UEBA_NXZ
     */
    virtual bool isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VIRTUALCOMMANDORIGIN
#endif
    /**
     * @symbol ??0VirtualCommandOrigin@@QEAA@V?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@0AEBVCommandPositionFloat@@H@Z
     */
    MCAPI VirtualCommandOrigin(std::unique_ptr<class CommandOrigin>, std::unique_ptr<class CommandOrigin>, class CommandPositionFloat const &, int);
    /**
     * @symbol ??0VirtualCommandOrigin@@QEAA@AEBVCommandOrigin@@AEAVActor@@AEBVCommandPositionFloat@@H@Z
     */
    MCAPI VirtualCommandOrigin(class CommandOrigin const &, class Actor &, class CommandPositionFloat const &, int);
    /**
     * @symbol ??0VirtualCommandOrigin@@QEAA@AEBVCommandOrigin@@0AEBVCommandPositionFloat@@H@Z
     */
    MCAPI VirtualCommandOrigin(class CommandOrigin const &, class CommandOrigin const &, class CommandPositionFloat const &, int);
    /**
     * @symbol ?getOrigin@VirtualCommandOrigin@@QEBAPEAVCommandOrigin@@XZ
     */
    MCAPI class CommandOrigin * getOrigin() const;
    /**
     * @symbol ?load@VirtualCommandOrigin@@SA?AV?$unique_ptr@VVirtualCommandOrigin@@U?$default_delete@VVirtualCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVServerLevel@@@Z
     */
    MCAPI static std::unique_ptr<class VirtualCommandOrigin> load(class CompoundTag const &, class ServerLevel &);

};