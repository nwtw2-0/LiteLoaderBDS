// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CREATIVEITEMGROUPCATEGORY
#include "Extra/CreativeItemGroupCategoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_CREATIVEITEMGROUPCATEGORY
class CreativeItemGroupCategory {
#include "Extra/CreativeItemGroupCategoryAPI.hpp"
public:
    /*0*/ virtual ~CreativeItemGroupCategory();

public:
    MCAPI class CreativeGroupInfo* addAnonymousGroup();
    MCAPI class CreativeGroupInfo* addChildGroup(class HashedString const&, class ItemInstance const&);
    MCAPI class CreativeGroupInfo* getChildGroup(class HashedString const&);
    MCAPI enum CreativeItemCategory getCreativeCategory();
    MCAPI class CreativeGroupInfo* getOrAddTailAnonymousGroup();
};