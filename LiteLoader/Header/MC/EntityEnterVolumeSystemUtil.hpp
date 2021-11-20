// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/EntityEnterVolumeSystemUtilAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace EntityEnterVolumeSystemUtil {
#include "Extra/EntityEnterVolumeSystemUtilAPI.hpp"

MCAPI void _addActor(class Actor const&, class EntitiesEnteredVolumeComponent&, class EntitiesInsideVolumeComponent&);
MCAPI bool _boundsContainsActor(class Actor const&, class VolumeBoundsComponent const&, class Dimension const&);
MCAPI void _removeEmptyComponents(class EntityContext&, class EntitiesEnteredVolumeComponent&, class EntitiesInsideVolumeComponent&);

} // namespace EntityEnterVolumeSystemUtil