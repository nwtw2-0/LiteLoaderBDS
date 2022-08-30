/**
 * @file  TridentImpalerEnchant.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TridentImpalerEnchant.
 *
 */
class TridentImpalerEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIDENTIMPALERENCHANT
public:
    class TridentImpalerEnchant& operator=(class TridentImpalerEnchant const &) = delete;
    TridentImpalerEnchant(class TridentImpalerEnchant const &) = delete;
    TridentImpalerEnchant() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~TridentImpalerEnchant();
    /**
     * @vtable 2
     * @symbol ?getMinCost@TridentImpalerEnchant@@UEBAHH@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @vtable 3
     * @symbol ?getMaxCost@TridentImpalerEnchant@@UEBAHH@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @vtable 5
     * @symbol ?getMaxLevel@TridentImpalerEnchant@@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @vtable 7
     * @symbol ?getDamageBonus@TridentImpalerEnchant@@UEBAMHAEBVActor@@@Z
     */
    virtual float getDamageBonus(int, class Actor const &) const;
    /**
     * @vtable 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vtable 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vtable 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vtable 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRIDENTIMPALERENCHANT
#endif
    /**
     * @symbol ??0TridentImpalerEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2H_NH@Z
     */
    MCAPI TridentImpalerEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, bool, int);

};