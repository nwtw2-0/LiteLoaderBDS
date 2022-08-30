/**
 * @file  IsSaddledDefinition.hpp
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
 * @brief MC structure IsSaddledDefinition.
 *
 */
struct IsSaddledDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSADDLEDDEFINITION
public:
    struct IsSaddledDefinition& operator=(struct IsSaddledDefinition const &) = delete;
    IsSaddledDefinition(struct IsSaddledDefinition const &) = delete;
    IsSaddledDefinition() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISSADDLEDDEFINITION
#endif
    /**
     * @symbol ?initialize@IsSaddledDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @symbol ?uninitialize@IsSaddledDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @symbol ?buildSchema@IsSaddledDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsSaddledDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsSaddledDefinition>> &);

};