/**
 * @file  OpenDoorAnnotationDescription.hpp
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
 * @brief MC class OpenDoorAnnotationDescription.
 *
 */
class OpenDoorAnnotationDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPENDOORANNOTATIONDESCRIPTION
public:
    class OpenDoorAnnotationDescription& operator=(class OpenDoorAnnotationDescription const &) = delete;
    OpenDoorAnnotationDescription(class OpenDoorAnnotationDescription const &) = delete;
    OpenDoorAnnotationDescription() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol ?getJsonName@OpenDoorAnnotationDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vtable 1
     * @symbol 
     */
    virtual ~OpenDoorAnnotationDescription();
    /**
     * @vtable 3
     * @symbol ?serializeData@OpenDoorAnnotationDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OPENDOORANNOTATIONDESCRIPTION
#endif

};