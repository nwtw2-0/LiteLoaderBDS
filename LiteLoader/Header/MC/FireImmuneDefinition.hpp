// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FireImmuneDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FireImmuneDefinition {
#include "Extra/FireImmuneDefinitionAPI.hpp"

public:
    MCAPI void initialize(class EntityContext&);
    MCAPI void uninitialize(class EntityContext&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct FireImmuneDefinition>>&);
};