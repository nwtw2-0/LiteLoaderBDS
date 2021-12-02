// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CONTAINERCOMPONENT
#include "Extra/ContainerComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_CONTAINERCOMPONENT
class ContainerComponent {
#include "Extra/ContainerComponentAPI.hpp"
public:
    /*0*/ virtual void containerContentChanged(int);
    /*1*/ virtual ~ContainerComponent();

public:
    MCAPI void addAdditionalSaveData(class CompoundTag&);
    MCAPI class ContainerComponent& operator=(class ContainerComponent&&);
    MCAPI class Container* _getRawContainerPtr() const;
    MCAPI bool addItem(class BlockSource&, class ItemStack&, int, int);
    MCAPI bool addItem(class ItemActor&);
    MCAPI bool addItem(class ItemStack&);
    MCAPI bool canBeSiphonedFrom() const;
    MCAPI bool canOpenContainer(class Actor const&, class Player&) const;
    MCAPI int countItemsOfType(class ItemStack const&) const;
    MCAPI void dropContents(class BlockSource&, class Vec3 const&, bool);
    MCAPI int findFirstSlotForItem(class ItemStack const&) const;
    MCAPI int getContainerSize() const;
    MCAPI class ItemStack const& getItem(int) const;
    MCAPI std::vector<class ItemStack const*> const getSlots() const;
    MCAPI bool hasRoomForItem(class ItemActor const&);
    MCAPI bool hasRoomForItem(class ItemStack const&);
    MCAPI void initFromDefinition(class Actor&);
    MCAPI void initFromDefinition(class Actor&, struct ContainerDescription const&);
    MCAPI bool isPrivate() const;
    MCAPI bool openContainer(class Actor&, class Player&);
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    MCAPI void rebuildContainer(class Actor&, enum ContainerType, int, bool, int, bool);
    MCAPI void removeItem(int, int);
    MCAPI void removeItemsOfType(class ItemStack const&, int);
    MCAPI void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>);
    MCAPI void setCustomName(std::string const&);
    MCAPI bool setItem(int, class ItemStack const&);
    MCAPI void setLootTable(std::string const&, int);
    MCAPI void unpackLootTable(class Level&);

private:
    MCAPI bool _tryMoveInItem(class BlockSource&, class ItemStack&, int, int, int);
};