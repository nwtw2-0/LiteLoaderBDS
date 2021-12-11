// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MobEffectInstance {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI static MobEffectInstance& create(int effect, int ticks, int level, bool unknown, bool show_particle, bool display_animation);

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTINSTANCE
public:
    MobEffectInstance() = delete;
#endif

public:
    MCAPI MobEffectInstance(class MobEffectInstance const&);
    MCAPI MobEffectInstance(unsigned int);
    MCAPI MobEffectInstance(unsigned int, int);
    MCAPI MobEffectInstance(unsigned int, int, int);
    MCAPI MobEffectInstance(unsigned int, int, int, int, int, int, bool, bool, bool);
    MCAPI MobEffectInstance(unsigned int, int, int, bool, bool, bool);
    MCAPI void applyEffects(class Actor*);
    MCAPI bool displaysOnScreenTextureAnimation() const;
    MCAPI int getAmplifier() const;
    MCAPI class HashedString const& getComponentName() const;
    MCAPI int getDifficulityDuration(enum Difficulty) const;
    MCAPI std::string getDisplayName() const;
    MCAPI int getDuration() const;
    MCAPI unsigned int getId() const;
    MCAPI int getLingerDuration() const;
    MCAPI int getSplashDuration() const;
    MCAPI class MobEffectInstance getSplashEffect() const;
    MCAPI bool isAmbient() const;
    MCAPI bool isEffectVisible() const;
    MCAPI bool operator!=(class MobEffectInstance const&);
    MCAPI class MobEffectInstance& operator=(class MobEffectInstance const&);
    MCAPI class MobEffectInstance& operator=(class MobEffectInstance&&);
    MCAPI bool operator==(class MobEffectInstance const&);
    MCAPI void removeEffects(class Actor*) const;
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    MCAPI void setDifficulityDuration(enum Difficulty, int);
    MCAPI void setDuration(int);
    MCAPI bool tick(class Actor*);
    MCAPI void tryInitializeMobEffectData();
    MCAPI void update(class MobEffectInstance const&);
    MCAPI ~MobEffectInstance();
    MCAPI static int const MAX_AMPLIFIER_COUNT;
    MCAPI static class MobEffectInstance const NO_EFFECT;
    MCAPI static bool areAllEffectsAmbient(std::vector<class MobEffectInstance> const&);
    MCAPI static class mce::Color getColorValue(std::vector<class MobEffectInstance> const&);
    MCAPI static class MobEffectInstance load(class CompoundTag const&);

protected:

private:

};