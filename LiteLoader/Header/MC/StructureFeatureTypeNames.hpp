/**
 * @file  StructureFeatureTypeNames.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace StructureFeatureTypeNames.
 *
 */
namespace StructureFeatureTypeNames {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?getFeatureName@StructureFeatureTypeNames@@YA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4StructureFeatureType@@@Z
     */
    MCAPI class std::basic_string_view<char, struct std::char_traits<char>> getFeatureName(enum StructureFeatureType);
    /**
     * @symbol ?getFeatureType@StructureFeatureTypeNames@@YA?AW4StructureFeatureType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI enum StructureFeatureType getFeatureType(std::string const &);

};