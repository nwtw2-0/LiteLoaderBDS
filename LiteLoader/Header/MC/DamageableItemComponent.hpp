// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/DamageableItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class DamageableItemComponent {
#include "Extra/DamageableItemComponentAPI.hpp"
public:
    virtual ~DamageableItemComponent();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag();
    virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI int getMaxDamage() const;

    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();
};