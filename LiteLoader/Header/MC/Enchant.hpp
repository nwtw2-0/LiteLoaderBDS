/**
 * @file  Enchant.hpp
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
 * @brief MC class Enchant.
 *
 */
class Enchant {

#define AFTER_EXTRA
// Add Member There
public:
enum class Frequency
{
    VeryRare = 1,
    Rare = 3,
    Uncommon = 10,
    Common = 30
};

enum class Slot
{
    ALL = -1,
    NONE = 0,
    ARMOR_HEAD = 1,
    ARMOR_TORSO = 2,
    ARMOR_FEET = 4,
    ARMOR_LEGS = 8,
    G_ARMOR = 15,
    SWORD = 16,
    BOW = 32,
    HOE = 64,
    SHEARS = 128,
    FLINTSTEEL = 256,
    AXE = 512,
    PICKAXE = 1024,
    SHOVEL = 2048,
    G_DIGGING = 3648,
    FISHING_ROD = 4096,
    CARROT_STICK = 8192,
    ELYTRA = 16384,
    SPEAR = 32768,
    CROSSBOW = 65536,
    SHIELD = 131072,
    G_TOOL = 131520,
    COSMETIC_HEAD = 262144,
    COMPASS = 524288,
    MUSHROOM_STICK = 1048576
};

enum class Type : uint8_t
{
    protection = 0,
    fire_protection = 1,
    feather_falling = 2,
    blast_protection = 3,
    projectile_protection = 4,
    thorns = 5,
    respiration = 6,
    depth_strider = 7,
    aqua_affinity = 8,
    sharpness = 9,
    smite = 10,
    bane_of_arthropods = 11,
    knockback = 12,
    fire_aspect = 13,
    looting = 14,
    efficiency = 15,
    silk_touch = 16,
    unbreaking = 17,
    fortune = 18,
    power = 19,
    punch = 20,
    flame = 21,
    infinity = 22,
    luck_of_the_sea = 23,
    lure = 24,
    frost_walker = 25,
    mending = 26,
    binding = 27,
    vanishing = 28,
    impaling = 29,
    riptide = 30,
    loyalty = 31,
    channeling = 32,
    multishot = 33,
    piercing = 34,
    quick_charge = 35,
    soul_speed = 36,
    num_enchantments = 37,
    invalid_enchantment = 38
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANT
public:
    class Enchant& operator=(class Enchant const &) = delete;
    Enchant(class Enchant const &) = delete;
    Enchant() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~Enchant();
    /**
     * @vtable 1
     * @symbol ?isCompatibleWith@Enchant@@UEBA_NW4Type@1@@Z
     */
    virtual bool isCompatibleWith(enum Enchant::Type) const;
    /**
     * @vtable 2
     * @symbol ?getMinCost@Enchant@@UEBAHH@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @vtable 3
     * @symbol ?getMaxCost@Enchant@@UEBAHH@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @vtable 4
     * @symbol ?getMinLevel@Enchant@@UEBAHXZ
     */
    virtual int getMinLevel() const;
    /**
     * @vtable 5
     * @symbol ?getMaxLevel@Enchant@@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @vtable 6
     * @symbol ?getDamageProtection@Enchant@@UEBAHHAEBVActorDamageSource@@@Z
     */
    virtual int getDamageProtection(int, class ActorDamageSource const &) const;
    /**
     * @vtable 7
     * @symbol ?getDamageBonus@Enchant@@UEBAMHAEBVActor@@@Z
     */
    virtual float getDamageBonus(int, class Actor const &) const;
    /**
     * @vtable 8
     * @symbol ?doPostAttack@Enchant@@UEBAXAEAVActor@@0H@Z
     */
    virtual void doPostAttack(class Actor &, class Actor &, int) const;
    /**
     * @vtable 9
     * @symbol ?doPostHurt@Enchant@@UEBAXAEAVItemInstance@@AEAVActor@@1H@Z
     */
    virtual void doPostHurt(class ItemInstance &, class Actor &, class Actor &, int) const;
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
     * @symbol ?_isValidEnchantmentTypeForCategory@Enchant@@EEBA_NW4Type@1@@Z
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum Enchant::Type) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCHANT
    /**
     * @vtable -1
     * @symbol ?isDiscoverable@Enchant@@UEBA_NXZ
     */
    MCVAPI bool isDiscoverable() const;
    /**
     * @vtable -1
     * @symbol ?isMeleeDamageEnchant@Enchant@@UEBA_NXZ
     */
    MCVAPI bool isMeleeDamageEnchant() const;
    /**
     * @vtable -1
     * @symbol ?isProtectionEnchant@Enchant@@UEBA_NXZ
     */
    MCVAPI bool isProtectionEnchant() const;
    /**
     * @vtable -1
     * @symbol ?isTreasureOnly@Enchant@@UEBA_NXZ
     */
    MCVAPI bool isTreasureOnly() const;
#endif
    /**
     * @symbol ??0Enchant@@QEAA@W4Type@0@W4Frequency@0@V?$basic_string_span@$$CBD$0?0@gsl@@2HH_N@Z
     */
    MCAPI Enchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int, bool);
    /**
     * @symbol ??0Enchant@@QEAA@W4Type@0@W4Frequency@0@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     */
    MCAPI Enchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @symbol ?canEnchant@Enchant@@QEBA_NH_N@Z
     */
    MCAPI bool canEnchant(int, bool) const;
    /**
     * @symbol ?getDescription@Enchant@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getDescription() const;
    /**
     * @symbol ?getDescriptionId@Enchant@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getDescriptionId() const;
    /**
     * @symbol ?getEnchantType@Enchant@@QEBA?AW4Type@1@XZ
     */
    MCAPI enum Enchant::Type getEnchantType() const;
    /**
     * @symbol ?getFrequency@Enchant@@QEBA?AW4Frequency@1@XZ
     */
    MCAPI enum Enchant::Frequency getFrequency() const;
    /**
     * @symbol ?getStringId@Enchant@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getStringId() const;
    /**
     * @symbol ?isAvailable@Enchant@@QEBA_NXZ
     */
    MCAPI bool isAvailable() const;
    /**
     * @symbol ?isDisabled@Enchant@@QEBA_NXZ
     */
    MCAPI bool isDisabled() const;
    /**
     * @symbol ?isLootable@Enchant@@QEBA_NXZ
     */
    MCAPI bool isLootable() const;
    /**
     * @symbol ?enchantSlotFromString@Enchant@@SA?AW4Slot@1@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI static enum Enchant::Slot enchantSlotFromString(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?getEnchant@Enchant@@SAPEBV1@AEBW4Type@1@@Z
     */
    MCAPI static class Enchant const * getEnchant(enum Enchant::Type const &);
    /**
     * @symbol ?initEnchants@Enchant@@SAXXZ
     */
    MCAPI static void initEnchants();
MCAPI static class std::unordered_map<class HashedString, enum Enchant::Type, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, enum Enchant::Type>>> mEnchantNameToType;
MCAPI static class std::unordered_map<enum Enchant::Slot, std::string, struct EnchantSlotEnumHasher, struct std::equal_to<enum Enchant::Slot>, class std::allocator<struct std::pair<enum Enchant::Slot const, std::string>>> mEnchantSlotTypeEnumToStringMap;
MCAPI static class std::unordered_map<std::string, enum Enchant::Slot, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum Enchant::Slot>>> mEnchantSlotTypeNameToEnumMap;
MCAPI static std::vector<std::unique_ptr<class Enchant>> mEnchants;
    /**
     * @symbol ?shutdownEnchants@Enchant@@SAXXZ
     */
    MCAPI static void shutdownEnchants();
    /**
     * @symbol ?stringFromEnchantSlot@Enchant@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBW4Slot@1@@Z
     */
    MCAPI static std::string stringFromEnchantSlot(enum Enchant::Slot const &);

};