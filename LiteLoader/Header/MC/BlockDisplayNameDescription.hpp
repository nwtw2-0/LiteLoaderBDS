/**
 * @file  BlockDisplayNameDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockDisplayNameDescription.
 *
 */
struct BlockDisplayNameDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDISPLAYNAMEDESCRIPTION
public:
    struct BlockDisplayNameDescription& operator=(struct BlockDisplayNameDescription const &) = delete;
    BlockDisplayNameDescription(struct BlockDisplayNameDescription const &) = delete;
    BlockDisplayNameDescription() = delete;
#endif
public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~BlockDisplayNameDescription();
    /**
     * @vtable 1
     * @symbol ?getName@BlockDisplayNameDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @vtable 2
     * @symbol ?initializeComponent@BlockDisplayNameDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?isNetworkComponent@BlockDisplayNameDescription@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vtable 5
     * @symbol ?buildNetworkTag@BlockDisplayNameDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vtable 6
     * @symbol ?initializeFromNetwork@BlockDisplayNameDescription@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKDISPLAYNAMEDESCRIPTION
#endif
MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockDisplayNameDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockDisplayNameDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};