/**
 * @file  TrustDescription.hpp
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
 * @brief MC class TrustDescription.
 *
 */
class TrustDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRUSTDESCRIPTION
public:
    class TrustDescription& operator=(class TrustDescription const &) = delete;
    TrustDescription(class TrustDescription const &) = delete;
    TrustDescription() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol ?getJsonName@TrustDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vtable 1
     * @symbol 
     */
    virtual ~TrustDescription();
    /**
     * @vtable 3
     * @symbol ?serializeData@TrustDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRUSTDESCRIPTION
#endif

};