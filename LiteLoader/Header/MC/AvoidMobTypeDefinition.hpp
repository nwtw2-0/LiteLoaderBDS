// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_AVOIDMOBTYPEDEFINITION
#include "Extra/AvoidMobTypeDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_AVOIDMOBTYPEDEFINITION
class AvoidMobTypeDefinition {
#include "Extra/AvoidMobTypeDefinitionAPI.hpp"
public:
    /*0*/ virtual ~AvoidMobTypeDefinition();

public:
    MCAPI void initialize(class EntityContext&, class AvoidMobTypeGoal&);

    MCAPI static void buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AvoidMobTypeDefinition>>&);
};