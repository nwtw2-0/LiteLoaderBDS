// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "LootItemFunction.hpp"
#define EXTRA_INCLUDE_PART_ENCHANTRANDOMLYFUNCTION
#include "Extra/EnchantRandomlyFunctionAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENCHANTRANDOMLYFUNCTION
class EnchantRandomlyFunction : public LootItemFunction {
#include "Extra/EnchantRandomlyFunctionAPI.hpp"
public:
    /*0*/ virtual ~EnchantRandomlyFunction();
    /*1*/ virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
    /*3*/ virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
};