// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PushableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PushableComponent {
#include "Extra/PushableComponentAPI.hpp"

public:
    MCAPI void initFromDefinition(class Actor&);
    MCAPI void initFromDefinition(class Actor&, struct PushableDescription&);
    MCAPI bool isPushable();
    MCAPI bool isPushableByPiston();
    MCAPI void push(class Actor&, class Actor&, bool);
    MCAPI void push(class Actor&, class Vec3 const&);

private:
    MCAPI struct std::pair<class Vec3, class Vec3> _calculatePushVectorMinecart(class Actor&, class Actor&, bool);
};