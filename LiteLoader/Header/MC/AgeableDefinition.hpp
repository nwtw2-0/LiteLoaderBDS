// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/AgeableDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class AgeableDefinition {
#include "Extra/AgeableDefinitionAPI.hpp"

public:
    MCAPI void addDropItem(class ItemDescriptor const&);
    MCAPI void addFeedItem(struct ActorDefinitionFeedItem const&);
    MCAPI void addFeedItemByName(std::string const&);
    MCAPI bool canGrowUp() const;
    MCAPI int getTicksAsBaby() const;
    MCAPI void initialize(class EntityContext&, class AgeableComponent&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AgeableDefinition>>&);
};