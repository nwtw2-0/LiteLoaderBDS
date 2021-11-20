// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CerealHelpersAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace CerealHelpers {
#include "Extra/CerealHelpersAPI.hpp"

MCAPI void bindVec3();
MCAPI bool deserializeToVec3(class Vec3&, class BasicLoader&, struct SerializerTraits const&, class BedrockLoadContext const&);
MCAPI bool serializeFromVec3(class Vec3 const&, class BasicSaver&, struct SerializerTraits const&);

} // namespace CerealHelpers