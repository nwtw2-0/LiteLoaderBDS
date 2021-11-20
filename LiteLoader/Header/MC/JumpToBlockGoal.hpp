// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/JumpToBlockGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class JumpToBlockGoal {
#include "Extra/JumpToBlockGoalAPI.hpp"
public:
    virtual ~JumpToBlockGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

public:
    MCAPI void resetCooldown();

private:
    MCAPI bool _calculateJumpCurve(class BlockPos const&);
    MCAPI void _clearGoalState();
    MCAPI bool _findCandidateBlocks(class NavigationComponent&);
    MCAPI bool _findTargetBlock();
    MCAPI bool _validTransition(class Vec3 const&, class Vec3 const&) const;
};