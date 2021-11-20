// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PotionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class Potion {
#include "Extra/PotionAPI.hpp"

public:
    MCAPI void appendFormattedPotionText(std::string&, enum Potion::PotionType, enum Potion::PotionVariant, class Player const&, float) const;
    MCAPI std::string effectDurationToString(enum Potion::PotionType, float, class MobEffectInstance const&) const;
    MCAPI std::string effectPotencyToString(class MobEffectInstance const&) const;
    MCAPI std::string getDescriptionId(enum Potion::PotionType) const;
    MCAPI std::string getDescriptionId() const;
    MCAPI class MobEffectInstance const& getMobEffect() const;
    MCAPI int getMobEffectId() const;
    MCAPI std::vector<class MobEffectInstance> const& getMobEffects() const;
    MCAPI std::string getPotentencyDescription(enum Potion::PotionType, float) const;
    MCAPI std::string getPotentencyDescription(enum Potion::PotionType, float, class gsl::basic_string_span<char const, -1>, class MobEffectInstance const&) const;
    MCAPI int getPotionId() const;
    MCAPI enum Potion::PotionVariant getPotionVariant() const;
    MCAPI std::string getPrefix() const;

    MCAPI static class std::shared_ptr<class Potion const> const Awkward;
    MCAPI static class std::shared_ptr<class Potion const> const FireResistance;
    MCAPI static class std::shared_ptr<class Potion const> const Harming;
    MCAPI static class std::shared_ptr<class Potion const> const Healing;
    MCAPI static class std::shared_ptr<class Potion const> const Invisibility;
    MCAPI static class std::shared_ptr<class Potion const> const Leaping;
    MCAPI static class std::shared_ptr<class Potion const> const LongFireResistance;
    MCAPI static class std::shared_ptr<class Potion const> const LongInvisibility;
    MCAPI static class std::shared_ptr<class Potion const> const LongLeaping;
    MCAPI static class std::shared_ptr<class Potion const> const LongMundane;
    MCAPI static class std::shared_ptr<class Potion const> const LongNightvision;
    MCAPI static class std::shared_ptr<class Potion const> const LongPoison;
    MCAPI static class std::shared_ptr<class Potion const> const LongRegeneration;
    MCAPI static class std::shared_ptr<class Potion const> const LongSlowFalling;
    MCAPI static class std::shared_ptr<class Potion const> const LongSlowness;
    MCAPI static class std::shared_ptr<class Potion const> const LongStrength;
    MCAPI static class std::shared_ptr<class Potion const> const LongSwiftness;
    MCAPI static class std::shared_ptr<class Potion const> const LongTurtleMaster;
    MCAPI static class std::shared_ptr<class Potion const> const LongWaterBreathing;
    MCAPI static class std::shared_ptr<class Potion const> const LongWeakness;
    MCAPI static class std::shared_ptr<class Potion const> const Mundane;
    MCAPI static class std::shared_ptr<class Potion const> const Nightvision;
    MCAPI static class std::shared_ptr<class Potion const> const Poison;
    MCAPI static class std::shared_ptr<class Potion const> const Regeneration;
    MCAPI static class std::shared_ptr<class Potion const> const SlowFalling;
    MCAPI static class std::shared_ptr<class Potion const> const Slowness;
    MCAPI static class std::shared_ptr<class Potion const> const Strength;
    MCAPI static class std::shared_ptr<class Potion const> const StrongHarming;
    MCAPI static class std::shared_ptr<class Potion const> const StrongHealing;
    MCAPI static class std::shared_ptr<class Potion const> const StrongLeaping;
    MCAPI static class std::shared_ptr<class Potion const> const StrongPoison;
    MCAPI static class std::shared_ptr<class Potion const> const StrongRegeneration;
    MCAPI static class std::shared_ptr<class Potion const> const StrongSlowness;
    MCAPI static class std::shared_ptr<class Potion const> const StrongStrength;
    MCAPI static class std::shared_ptr<class Potion const> const StrongSwiftness;
    MCAPI static class std::shared_ptr<class Potion const> const StrongTurtleMaster;
    MCAPI static class std::shared_ptr<class Potion const> const Swiftness;
    MCAPI static class std::shared_ptr<class Potion const> const Thick;
    MCAPI static class std::shared_ptr<class Potion const> const TurtleMaster;
    MCAPI static class std::shared_ptr<class Potion const> const Water;
    MCAPI static class std::shared_ptr<class Potion const> const WaterBreathing;
    MCAPI static class std::shared_ptr<class Potion const> const Weakness;
    MCAPI static class std::shared_ptr<class Potion const> const Wither;
    MCAPI static std::string getBasePotion(enum Potion::PotionType);
    MCAPI static class std::shared_ptr<class Potion const> getPotion(class gsl::basic_string_span<char const, -1>);
    MCAPI static class std::shared_ptr<class Potion const> getPotion(int);
    MCAPI static int getPotionCount();
    MCAPI static void initPotions();
    MCAPI static void shutdownPotions();

private:
    MCAPI std::string _getDescriptionIdCombiningStrings(enum Potion::PotionType) const;
    MCAPI std::string _getDescriptionIdSingleString(enum Potion::PotionType) const;

    MCAPI static void addPotion(class std::shared_ptr<class Potion const>);
    MCAPI static int mLastId;
    MCAPI static class std::shared_ptr<class Potion const>* mPotionsById;
};