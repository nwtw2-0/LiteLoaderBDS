// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "TargetGoal.hpp"
#define EXTRA_INCLUDE_PART_NEARESTATTACKABLETARGETGOAL
#include "Extra/NearestAttackableTargetGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_NEARESTATTACKABLETARGETGOAL
class NearestAttackableTargetGoal : public TargetGoal {
#include "Extra/NearestAttackableTargetGoalAPI.hpp"
public:
    /*0*/ virtual ~NearestAttackableTargetGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual bool isTargetGoal() const;
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*8*/ virtual bool isTargetGoal() const;
    /*9*/ virtual void stop();
    /*11*/ virtual struct ActorUniqueID _findTarget(struct MobDescriptor const**);

private:
    MCAPI bool _selectTarget();

protected:
    MCAPI bool _canStartSearching();
    MCAPI bool _isTargetVisible(class Mob const&, float, float) const;
};