// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BlockSourceListener.hpp"
#define EXTRA_INCLUDE_PART_ENTITYEXITVOLUMESYSTEM
#include "Extra/EntityExitVolumeSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENTITYEXITVOLUMESYSTEM
class EntityExitVolumeSystem : public BlockSourceListener {
#include "Extra/EntityExitVolumeSystemAPI.hpp"
public:
    /*0*/ virtual ~EntityExitVolumeSystem();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry&);
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void onBrightnessChanged(class BlockSource&, class BlockPos const&);
    /*6*/ virtual void unk_vfn_6();
    /*7*/ virtual void onBlockEntityAboutToBeRemoved(class BlockSource&, class std::shared_ptr<class BlockActor>);
    /*8*/ virtual void unk_vfn_8();
    /*9*/ virtual void unk_vfn_9();
    /*10*/ virtual void unk_vfn_10();

private:
    MCAPI void _tick(class EntityContext&, class VolumeBoundsComponent&, class EntitiesInsideVolumeComponent&) const;
};