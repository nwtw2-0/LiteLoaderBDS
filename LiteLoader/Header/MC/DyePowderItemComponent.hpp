/**
 * @file  DyePowderItemComponent.hpp
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
 * @brief MC class DyePowderItemComponent.
 *
 */
class DyePowderItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYEPOWDERITEMCOMPONENT
public:
    class DyePowderItemComponent& operator=(class DyePowderItemComponent const &) = delete;
    DyePowderItemComponent(class DyePowderItemComponent const &) = delete;
    DyePowderItemComponent() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~DyePowderItemComponent();
    /**
     * @vtable 1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VDyePowderItemComponent@@@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
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
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VDyePowderItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vtable 6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VDyePowderItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DYEPOWDERITEMCOMPONENT
#endif
    /**
     * @symbol ?isValidAuxValue@DyePowderItemComponent@@QEBA_NH@Z
     */
    MCAPI bool isValidAuxValue(int) const;
    /**
     * @symbol ?bindType@DyePowderItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier@DyePowderItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};