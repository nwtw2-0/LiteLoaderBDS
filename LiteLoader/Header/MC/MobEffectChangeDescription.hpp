/**
 * @file  MobEffectChangeDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MobEffectChangeDescription.
 *
 */
class MobEffectChangeDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTCHANGEDESCRIPTION
public:
    class MobEffectChangeDescription& operator=(class MobEffectChangeDescription const &) = delete;
    MobEffectChangeDescription(class MobEffectChangeDescription const &) = delete;
    MobEffectChangeDescription() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol ?getJsonName@MobEffectChangeDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vtable 1
     * @symbol 
     */
    virtual ~MobEffectChangeDescription();
    /**
     * @vtable 2
     * @symbol ?deserializeData@MobEffectChangeDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vtable 3
     * @symbol ?serializeData@MobEffectChangeDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBEFFECTCHANGEDESCRIPTION
#endif

};