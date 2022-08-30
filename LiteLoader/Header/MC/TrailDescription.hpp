/**
 * @file  TrailDescription.hpp
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
 * @brief MC class TrailDescription.
 *
 */
class TrailDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAILDESCRIPTION
public:
    class TrailDescription& operator=(class TrailDescription const &) = delete;
    TrailDescription(class TrailDescription const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol ?getJsonName@TrailDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vtable 1
     * @symbol 
     */
    virtual ~TrailDescription();
    /**
     * @vtable 2
     * @symbol ?deserializeData@TrailDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vtable 3
     * @symbol ?serializeData@TrailDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRAILDESCRIPTION
#endif
    /**
     * @symbol ??0TrailDescription@@QEAA@XZ
     */
    MCAPI TrailDescription();

};