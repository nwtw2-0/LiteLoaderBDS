/**
 * @file  NavigationDescription.hpp
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
 * @brief MC structure NavigationDescription.
 *
 */
struct NavigationDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONDESCRIPTION
public:
    struct NavigationDescription& operator=(struct NavigationDescription const &) = delete;
    NavigationDescription(struct NavigationDescription const &) = delete;
#endif
public:
    /**
     * @vtable 0
     * @symbol ?getJsonName@NavigationWalkDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const = 0;
    /**
     * @vtable 1
     * @symbol 
     */
    virtual ~NavigationDescription();
    /**
     * @vtable 2
     * @symbol ?deserializeData@NavigationDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vtable 3
     * @symbol ?serializeData@NavigationDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONDESCRIPTION
#endif
    /**
     * @symbol ??0NavigationDescription@@QEAA@XZ
     */
    MCAPI NavigationDescription();

};