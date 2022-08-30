/**
 * @file  JumpControlDescription.hpp
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
 * @brief MC structure JumpControlDescription.
 *
 */
struct JumpControlDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPCONTROLDESCRIPTION
public:
    struct JumpControlDescription& operator=(struct JumpControlDescription const &) = delete;
    JumpControlDescription(struct JumpControlDescription const &) = delete;
    JumpControlDescription() = delete;
#endif
public:
    /**
     * @vtable 0
     * @symbol ?getJsonName@JumpControlDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vtable 1
     * @symbol 
     */
    virtual ~JumpControlDescription();
    /**
     * @vtable 2
     * @symbol ?deserializeData@JumpControlDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vtable 3
     * @symbol ?serializeData@JumpControlDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPCONTROLDESCRIPTION
#endif

};