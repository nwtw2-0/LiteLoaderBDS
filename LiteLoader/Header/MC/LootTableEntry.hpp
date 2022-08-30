/**
 * @file  LootTableEntry.hpp
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
 * @brief MC class LootTableEntry.
 *
 */
class LootTableEntry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTTABLEENTRY
public:
    class LootTableEntry& operator=(class LootTableEntry const &) = delete;
    LootTableEntry(class LootTableEntry const &) = delete;
    LootTableEntry() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol ?_createItem@LootTableEntry@@MEAA_NAEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEAVRandom@@AEAVLootTableContext@@@Z
     */
    virtual bool _createItem(std::vector<class ItemStack> &, class Random &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTTABLEENTRY
#endif
    /**
     * @symbol ?deserialize@LootTableEntry@@SA?AV?$unique_ptr@VLootPoolEntry@@U?$default_delete@VLootPoolEntry@@@std@@@std@@VValue@Json@@@Z
     */
    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(class Json::Value);

};