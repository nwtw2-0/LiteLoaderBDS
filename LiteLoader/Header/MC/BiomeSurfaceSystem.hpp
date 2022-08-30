/**
 * @file  BiomeSurfaceSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace BiomeSurfaceSystem.
 *
 */
namespace BiomeSurfaceSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?buildSurfaceAt@BiomeSurfaceSystem@@YAXAEBUBuildParameters@ISurfaceBuilder@@@Z
     */
    MCAPI void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const &);
    /**
     * @symbol ?resolveBuilderImplementation@BiomeSurfaceSystem@@YAXAEAVEntityRegistry@@AEBVSurfaceBuilderRegistry@@I@Z
     */
    MCAPI void resolveBuilderImplementation(class EntityRegistry &, class SurfaceBuilderRegistry const &, unsigned int);

};