/**
 * @file  CommandBlockDescription.hpp
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
 * @brief MC class CommandBlockDescription.
 *
 */
class CommandBlockDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKDESCRIPTION
public:
    class CommandBlockDescription& operator=(class CommandBlockDescription const &) = delete;
    CommandBlockDescription(class CommandBlockDescription const &) = delete;
    CommandBlockDescription() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol ?getJsonName@CommandBlockDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vtable 1
     * @symbol 
     */
    virtual ~CommandBlockDescription();
    /**
     * @vtable 2
     * @symbol ?deserializeData@CommandBlockDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vtable 3
     * @symbol ?serializeData@CommandBlockDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDBLOCKDESCRIPTION
#endif

};