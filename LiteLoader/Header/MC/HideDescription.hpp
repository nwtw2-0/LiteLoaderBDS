/**
 * @file  HideDescription.hpp
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
 * @brief MC class HideDescription.
 *
 */
class HideDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HIDEDESCRIPTION
public:
    class HideDescription& operator=(class HideDescription const &) = delete;
    HideDescription(class HideDescription const &) = delete;
    HideDescription() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol ?getJsonName@HideDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vtable 1
     * @symbol 
     */
    virtual ~HideDescription();
    /**
     * @vtable 3
     * @symbol ?serializeData@HideDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HIDEDESCRIPTION
#endif

};