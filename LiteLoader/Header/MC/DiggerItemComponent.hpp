// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_DIGGERITEMCOMPONENT
#include "Extra/DiggerItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_DIGGERITEMCOMPONENT
class DiggerItemComponent {
#include "Extra/DiggerItemComponentAPI.hpp"
public:
    /*0*/ virtual ~DiggerItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual bool isNetworkComponent() const;
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*);

    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();
};