/**
 * @file  LevelSoundEventUtils.hpp
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
 * @brief MC class LevelSoundEventUtils.
 *
 */
class LevelSoundEventUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSOUNDEVENTUTILS
public:
    class LevelSoundEventUtils& operator=(class LevelSoundEventUtils const &) = delete;
    LevelSoundEventUtils(class LevelSoundEventUtils const &) = delete;
    LevelSoundEventUtils() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELSOUNDEVENTUTILS
#endif
    /**
     * @symbol ?serializePercentageToData@LevelSoundEventUtils@@SAHM@Z
     */
    MCAPI static int serializePercentageToData(float);

//private:

private:
MCAPI static int const MAX_INT_REPRESENTABLE_AS_FLOAT;

};