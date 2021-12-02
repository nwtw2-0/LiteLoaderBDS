// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PROJECTILEITEMCOMPONENT
#include "Extra/ProjectileItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_PROJECTILEITEMCOMPONENT
class ProjectileItemComponent {
#include "Extra/ProjectileItemComponentAPI.hpp"
public:
    /*0*/ virtual ~ProjectileItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual bool isNetworkComponent() const;
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI class Vec3 getShootDir(class Player const&, float) const;
    MCAPI class Actor* shootProjectile(class BlockSource&, class Vec3 const&, class Vec3 const&, float, class Player*) const;

    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();
};