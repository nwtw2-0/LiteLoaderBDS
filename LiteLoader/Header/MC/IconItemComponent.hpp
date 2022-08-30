/**
 * @file  IconItemComponent.hpp
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
 * @brief MC class IconItemComponent.
 *
 */
class IconItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICONITEMCOMPONENT
public:
    class IconItemComponent& operator=(class IconItemComponent const &) = delete;
    IconItemComponent(class IconItemComponent const &) = delete;
    IconItemComponent() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~IconItemComponent();
    /**
     * @vtable 1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VIconItemComponent@@@@UEBA_NXZ
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
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VIconItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vtable 6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VIconItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ICONITEMCOMPONENT
#endif
    /**
     * @symbol ??0IconItemComponent@@QEAA@PEAVComponentItem@@@Z
     */
    MCAPI IconItemComponent(class ComponentItem *);
    /**
     * @symbol ?setOwnerIcon@IconItemComponent@@QEAAXXZ
     */
    MCAPI void setOwnerIcon();
    /**
     * @symbol ?bindType@IconItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier@IconItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};