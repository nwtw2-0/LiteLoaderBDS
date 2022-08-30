/**
 * @file  OffhandContainerValidation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OffhandContainerValidation.
 *
 */
class OffhandContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OFFHANDCONTAINERVALIDATION
public:
    class OffhandContainerValidation& operator=(class OffhandContainerValidation const &) = delete;
    OffhandContainerValidation(class OffhandContainerValidation const &) = delete;
    OffhandContainerValidation() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~OffhandContainerValidation();
    /**
     * @vtable 1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @vtable 2
     * @symbol ?isItemAllowedInSlot@OffhandContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @vtable 3
     * @symbol ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @vtable 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vtable 5
     * @symbol ?isItemAllowedToRemove@OffhandContainerValidation@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
     */
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /**
     * @vtable 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vtable 7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OFFHANDCONTAINERVALIDATION
    /**
     * @vtable -1
     * @symbol ?canItemMoveToContainer@OffhandContainerValidation@@UEBA_NAEBVItemStackBase@@@Z
     */
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @vtable -1
     * @symbol ?getContainerOffset@OffhandContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
     */
    MCVAPI int getContainerOffset(class ContainerScreenContext const &) const;
#endif

};