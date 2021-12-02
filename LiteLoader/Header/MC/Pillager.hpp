// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Monster.hpp"
#define EXTRA_INCLUDE_PART_PILLAGER
#include "Extra/PillagerAPI.hpp"
#undef EXTRA_INCLUDE_PART_PILLAGER
class Pillager : public Monster {
#include "Extra/PillagerAPI.hpp"
public:
    /*14*/ virtual ~Pillager();
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*22*/ virtual void unk_vfn_22();
    /*36*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*41*/ virtual void unk_vfn_41();
    /*52*/ virtual float getRidingHeight();
    /*61*/ virtual void unk_vfn_61();
    /*68*/ virtual void unk_vfn_68();
    /*78*/ virtual float getCameraOffset() const;
    /*82*/ virtual void unk_vfn_82();
    /*87*/ virtual void unk_vfn_87();
    /*88*/ virtual void playerTouch(class Player&);
    /*94*/ virtual void unk_vfn_94();
    /*97*/ virtual void unk_vfn_97();
    /*100*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*104*/ virtual void unk_vfn_104();
    /*106*/ virtual void unk_vfn_106();
    /*107*/ virtual void unk_vfn_107();
    /*108*/ virtual void unk_vfn_108();
    /*113*/ virtual bool isValidTarget(class Actor*) const;
    /*116*/ virtual void adjustDamageAmount(int&) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*130*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*140*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*143*/ virtual float getPickRadius();
    /*152*/ virtual void awardKillScore(class Actor&, int);
    /*171*/ virtual class HashedString const& queryEntityRenderer() const;
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*179*/ virtual int getPortalWaitTime() const;
    /*181*/ virtual bool canChangeDimensions() const;
    /*182*/ virtual void unk_vfn_182();
    /*184*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*193*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*194*/ virtual bool canBePulledIntoVehicle() const;
    /*196*/ virtual void unk_vfn_196();
    /*199*/ virtual bool canSynchronizeNewEntity() const;
    /*221*/ virtual void unk_vfn_221();
    /*222*/ virtual void unk_vfn_222();
    /*227*/ virtual bool isWorldBuilder() const;
    /*228*/ virtual void unk_vfn_228();
    /*229*/ virtual bool isAdventure() const;
    /*233*/ virtual bool canDestroyBlock(class Block const&) const;
    /*234*/ virtual void setAuxValue(int);
    /*240*/ virtual void stopSpinAttack();
    /*242*/ virtual void unk_vfn_242();
    /*245*/ virtual void unk_vfn_245();
    /*255*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*257*/ virtual void unk_vfn_257();
    /*261*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*262*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*265*/ virtual void unk_vfn_265();
    /*274*/ virtual void unk_vfn_274();
    /*276*/ virtual void spawnAnim();
    /*291*/ virtual void aiStep();
    /*296*/ virtual bool checkSpawnRules(bool);
    /*300*/ virtual float getItemUseStartupProgress() const;
    /*301*/ virtual float getItemUseIntervalProgress() const;
    /*304*/ virtual void unk_vfn_304();
    /*306*/ virtual bool isAlliedTo(class Mob*);
    /*308*/ virtual void unk_vfn_308();
    /*317*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*332*/ virtual void onBorn(class Actor&, class Actor&);
    /*336*/ virtual int getAttackTime();
    /*337*/ virtual float _getWalkTargetValue(class BlockPos const&);
    /*339*/ virtual void unk_vfn_339();
    /*349*/ virtual void _serverAiMobStep();
    /*355*/ virtual void unk_vfn_355();
    /*357*/ virtual bool isDarkEnoughToSpawn() const;
};