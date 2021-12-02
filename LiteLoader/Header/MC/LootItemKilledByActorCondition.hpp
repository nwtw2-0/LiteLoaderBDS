// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_LOOTITEMKILLEDBYACTORCONDITION
#include "Extra/LootItemKilledByActorConditionAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOTITEMKILLEDBYACTORCONDITION
class LootItemKilledByActorCondition {
#include "Extra/LootItemKilledByActorConditionAPI.hpp"
public:
    /*0*/ virtual ~LootItemKilledByActorCondition();
    /*1*/ virtual bool applies(class Random&, class LootTableContext&);

public:
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);
};