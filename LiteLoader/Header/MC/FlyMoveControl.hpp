// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "MoveControl.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/FlyMoveControlAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FlyMoveControl : public MoveControl {
#include "Extra/FlyMoveControlAPI.hpp"
public:
    virtual ~FlyMoveControl();
    virtual void tick(class MoveControlComponent&, class Mob&);
};