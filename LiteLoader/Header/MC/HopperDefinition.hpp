/**
 * @file  HopperDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure HopperDefinition.
 *
 */
struct HopperDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERDEFINITION
public:
    struct HopperDefinition& operator=(struct HopperDefinition const &) = delete;
    HopperDefinition(struct HopperDefinition const &) = delete;
    HopperDefinition() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOPPERDEFINITION
#endif
    /**
     * @symbol ?buildSchema@HopperDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UHopperDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct HopperDefinition>> &);

};