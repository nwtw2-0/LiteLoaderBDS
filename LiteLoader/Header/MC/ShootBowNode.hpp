// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SHOOTBOWNODE
#include "Extra/ShootBowNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHOOTBOWNODE
class ShootBowNode {
#include "Extra/ShootBowNodeAPI.hpp"
public:
    /*0*/ virtual ~ShootBowNode();
    /*1*/ virtual int /*enum BehaviorStatus*/ tick(class Actor&);
    /*2*/ virtual void initializeFromDefinition(class Actor&);
};