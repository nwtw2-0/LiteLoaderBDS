// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RANDOMSITGOAL
#include "Extra/RandomSitGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_RANDOMSITGOAL
class RandomSitGoal {
#include "Extra/RandomSitGoalAPI.hpp"
public:
    /*0*/ virtual ~RandomSitGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void unk_vfn_6();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
};