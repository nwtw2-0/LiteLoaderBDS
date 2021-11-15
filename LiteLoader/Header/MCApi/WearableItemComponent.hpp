// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class WearableItemComponent {
public:
    virtual ~WearableItemComponent();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag();
    virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI enum EquipmentSlot getSlot() const;
    MCAPI bool use(class ItemStack&, class Player&) const;

    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();
};