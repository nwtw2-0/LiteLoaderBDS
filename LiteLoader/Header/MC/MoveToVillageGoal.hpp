// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BaseMoveToGoal.hpp"
#define EXTRA_INCLUDE_PART_MOVETOVILLAGEGOAL
#include "Extra/MoveToVillageGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVETOVILLAGEGOAL
class MoveToVillageGoal : public BaseMoveToGoal {
#include "Extra/MoveToVillageGoalAPI.hpp"
public:
    /*0*/ virtual ~MoveToVillageGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual void start();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*8*/ virtual void unk_vfn_8();
    /*9*/ virtual void unk_vfn_9();
    /*11*/ virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    /*14*/ virtual void _moveToBlock();
    /*16*/ virtual unsigned __int64 _getRepathTime() const;
    /*17*/ virtual class BlockPos _selectRandomPosInVillage();

protected:
    MCAPI class std::shared_ptr<class Village> _tryGetCurrentVillage();
};