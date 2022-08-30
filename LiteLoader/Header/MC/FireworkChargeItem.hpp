/**
 * @file  FireworkChargeItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FireworkChargeItem.
 *
 */
class FireworkChargeItem : public Item {

#define AFTER_EXTRA
// Add Member There
public:
enum Shape;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKCHARGEITEM
public:
    class FireworkChargeItem& operator=(class FireworkChargeItem const &) = delete;
    FireworkChargeItem(class FireworkChargeItem const &) = delete;
    FireworkChargeItem() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~FireworkChargeItem();
    /**
     * @vtable 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vtable 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vtable 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vtable 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vtable 18
     * @symbol ?isDyeable@FireworkChargeItem@@UEBA_NXZ
     */
    virtual bool isDyeable() const;
    /**
     * @vtable 52
     * @symbol __unk_vfn_52
     */
    virtual void __unk_vfn_52();
    /**
     * @vtable 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vtable 61
     * @symbol ?appendFormattedHovertext@FireworkChargeItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vtable 67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @vtable 68
     * @symbol ?isValidAuxValue@FireworkChargeItem@@UEBA_NH@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vtable 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vtable 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vtable 73
     * @symbol __unk_vfn_73
     */
    virtual void __unk_vfn_73();
    /**
     * @vtable 74
     * @symbol ?getColor@FireworkChargeItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @vtable 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vtable 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vtable 81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vtable 117
     * @symbol ?isSameItem@FireworkChargeItem@@UEBA_NAEBVItemStackBase@@0@Z
     */
    virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIREWORKCHARGEITEM
#endif
    /**
     * @symbol ??0FireworkChargeItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI FireworkChargeItem(std::string const &, int);
MCAPI static std::string const TAG_EXPLOSION;
MCAPI static std::string const TAG_E_COLORS;
MCAPI static std::string const TAG_E_FADECOLORS;
MCAPI static std::string const TAG_E_FLICKER;
MCAPI static std::string const TAG_E_TRAIL;
MCAPI static std::string const TAG_E_TYPE;
    /**
     * @symbol ?getFormattedHoverText@FireworkChargeItem@@SAXAEBVCompoundTag@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@@Z
     */
    MCAPI static void getFormattedHoverText(class CompoundTag const &, std::string &, std::string const &);
    /**
     * @symbol ?initFireworkChargeItem@FireworkChargeItem@@SAAEBVItemInstance@@AEAV2@W4Shape@1@V?$vector@EV?$allocator@E@std@@@std@@2_N3@Z
     */
    MCAPI static class ItemInstance const & initFireworkChargeItem(class ItemInstance &, enum FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    /**
     * @symbol ?initFireworkChargeItem@FireworkChargeItem@@SAAEBVItemStack@@AEAV2@W4Shape@1@V?$vector@EV?$allocator@E@std@@@std@@2_N3@Z
     */
    MCAPI static class ItemStack const & initFireworkChargeItem(class ItemStack &, enum FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    /**
     * @symbol ?setColor@FireworkChargeItem@@SAXAEAVItemStackBase@@@Z
     */
    MCAPI static void setColor(class ItemStackBase &);

//private:
    /**
     * @symbol ?_initFireworkChargeItem@FireworkChargeItem@@CAXAEAVItemStackBase@@W4Shape@1@V?$vector@EV?$allocator@E@std@@@std@@2_N3@Z
     */
    MCAPI static void _initFireworkChargeItem(class ItemStackBase &, enum FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    /**
     * @symbol ?appendColors@FireworkChargeItem@@CAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@EV?$allocator@E@std@@@3@@Z
     */
    MCAPI static void appendColors(std::string &, std::vector<unsigned char>);

private:

};