/**
 * @file  Inventory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FillingContainer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Inventory.
 *
 */
class Inventory : public FillingContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORY
public:
    class Inventory& operator=(class Inventory const &) = delete;
    Inventory(class Inventory const &) = delete;
    Inventory() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~Inventory();
    /**
     * @vtable 1
     * @symbol ?init@Inventory@@UEAAXXZ
     */
    virtual void init();
    /**
     * @vtable 9
     * @symbol ?setItem@Inventory@@UEAAXHAEBVItemStack@@@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @vtable 10
     * @symbol ?setItemWithForceBalance@Inventory@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /**
     * @vtable 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vtable 23
     * @symbol __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @vtable 33
     * @symbol ?add@Inventory@@UEAA_NAEAVItemStack@@@Z
     */
    virtual bool add(class ItemStack &);
    /**
     * @vtable 34
     * @symbol ?canAdd@Inventory@@UEBA_NAEBVItemStack@@@Z
     */
    virtual bool canAdd(class ItemStack const &) const;
    /**
     * @vtable 38
     * @symbol ?getEmptySlotsCount@Inventory@@UEBAHXZ
     */
    virtual int getEmptySlotsCount() const;
    /**
     * @vtable 39
     * @symbol ?getFirstEmptySlot@Inventory@@UEBAHXZ
     */
    virtual int getFirstEmptySlot() const;
    /**
     * @vtable 40
     * @symbol ?setContainerSize@Inventory@@UEAAXH@Z
     */
    virtual void setContainerSize(int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORY
#endif
    /**
     * @symbol ??0Inventory@@QEAA@PEAVPlayer@@@Z
     */
    MCAPI Inventory(class Player *);
    /**
     * @symbol ?dropSlot@Inventory@@QEAAXH_N00@Z
     */
    MCAPI void dropSlot(int, bool, bool, bool);
    /**
     * @symbol ?getComplexItems@Inventory@@QEAA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    MCAPI std::vector<class ItemStack> getComplexItems();
    /**
     * @symbol ?setupDefault@Inventory@@QEAAXXZ
     */
    MCAPI void setupDefault();
    /**
     * @symbol ?tick@Inventory@@QEAAXH@Z
     */
    MCAPI void tick(int);

};