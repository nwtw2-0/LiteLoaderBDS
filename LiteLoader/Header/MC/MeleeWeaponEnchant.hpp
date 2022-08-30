/**
 * @file  MeleeWeaponEnchant.hpp
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
 * @brief MC class MeleeWeaponEnchant.
 *
 */
class MeleeWeaponEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MELEEWEAPONENCHANT
public:
    class MeleeWeaponEnchant& operator=(class MeleeWeaponEnchant const &) = delete;
    MeleeWeaponEnchant(class MeleeWeaponEnchant const &) = delete;
    MeleeWeaponEnchant() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~MeleeWeaponEnchant();
    /**
     * @vtable 2
     * @symbol ?getMinCost@MeleeWeaponEnchant@@UEBAHH@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @vtable 3
     * @symbol ?getMaxCost@MeleeWeaponEnchant@@UEBAHH@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @vtable 5
     * @symbol ?getMaxLevel@MeleeWeaponEnchant@@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @vtable 7
     * @symbol ?getDamageBonus@MeleeWeaponEnchant@@UEBAMHAEBVActor@@@Z
     */
    virtual float getDamageBonus(int, class Actor const &) const;
    /**
     * @vtable 8
     * @symbol ?doPostAttack@MeleeWeaponEnchant@@UEBAXAEAVActor@@0H@Z
     */
    virtual void doPostAttack(class Actor &, class Actor &, int) const;
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
    /**
     * @vtable 14
     * @symbol ?_isValidEnchantmentTypeForCategory@MeleeWeaponEnchant@@EEBA_NW4Type@Enchant@@@Z
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum Enchant::Type) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MELEEWEAPONENCHANT
    /**
     * @vtable -1
     * @symbol ?isMeleeDamageEnchant@MeleeWeaponEnchant@@UEBA_NXZ
     */
    MCVAPI bool isMeleeDamageEnchant() const;
#endif
    /**
     * @symbol ??0MeleeWeaponEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     */
    MCAPI MeleeWeaponEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

//private:

private:
MCAPI static std::vector<enum Enchant::Type> const VALID_ENCHANTMENTS;

};