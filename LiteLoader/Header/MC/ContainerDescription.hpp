/**
 * @file  ContainerDescription.hpp
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
 * @brief MC structure ContainerDescription.
 *
 */
struct ContainerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERDESCRIPTION
public:
    struct ContainerDescription& operator=(struct ContainerDescription const &) = delete;
    ContainerDescription(struct ContainerDescription const &) = delete;
    ContainerDescription() = delete;
#endif
public:
    /**
     * @vtable 0
     * @symbol ?getJsonName@ContainerDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vtable 1
     * @symbol 
     */
    virtual ~ContainerDescription();
    /**
     * @vtable 2
     * @symbol ?deserializeData@ContainerDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vtable 3
     * @symbol ?serializeData@ContainerDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERDESCRIPTION
#endif

};