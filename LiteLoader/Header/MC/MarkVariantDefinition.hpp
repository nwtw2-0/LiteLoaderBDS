/**
 * @file  MarkVariantDefinition.hpp
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
 * @brief MC structure MarkVariantDefinition.
 *
 */
struct MarkVariantDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MARKVARIANTDEFINITION
public:
    struct MarkVariantDefinition& operator=(struct MarkVariantDefinition const &) = delete;
    MarkVariantDefinition(struct MarkVariantDefinition const &) = delete;
    MarkVariantDefinition() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MARKVARIANTDEFINITION
#endif
    /**
     * @symbol ?buildSchema@MarkVariantDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UMarkVariantDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct MarkVariantDefinition>> &);

};