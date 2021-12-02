// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "AuxDataBlockItem.hpp"
#define EXTRA_INCLUDE_PART_ELEMENTBLOCKITEM
#include "Extra/ElementBlockItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_ELEMENTBLOCKITEM
class ElementBlockItem : public AuxDataBlockItem {
#include "Extra/ElementBlockItemAPI.hpp"
public:
    /*0*/ virtual ~ElementBlockItem();
    /*2*/ virtual void tearDown();
    /*3*/ virtual int getMaxUseDuration(class ItemStack const*) const;
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void unk_vfn_5();
    /*6*/ virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&) const;
    /*7*/ virtual void unk_vfn_7();
    /*8*/ virtual bool isArmor() const;
    /*9*/ virtual bool isBlockPlanterItem() const;
    /*10*/ virtual void unk_vfn_10();
    /*12*/ virtual void unk_vfn_12();
    /*14*/ virtual bool isDyeable() const;
    /*15*/ virtual bool isDye() const;
    /*16*/ virtual int /*enum ItemColor*/ getItemColor() const;
    /*17*/ virtual bool isFertilizer() const;
    /*18*/ virtual void unk_vfn_18();
    /*19*/ virtual bool isThrowable() const;
    /*20*/ virtual bool isUseable() const;
    /*21*/ virtual class ItemComponent* getComponent(class HashedString const&) const;
    /*24*/ virtual class FuelItemComponent* getFuel() const;
    /*36*/ virtual int /*enum BlockShape*/ getBlockShape() const;
    /*38*/ virtual bool canDestroySpecial(class Block const&) const;
    /*39*/ virtual int getLevelDataForAuxValue(int) const;
    /*41*/ virtual short getMaxDamage() const;
    /*42*/ virtual int getAttackDamage() const;
    /*44*/ virtual bool isGlint(class ItemStackBase const&) const;
    /*45*/ virtual void unk_vfn_45();
    /*46*/ virtual int getPatternIndex() const;
    /*47*/ virtual void unk_vfn_47();
    /*48*/ virtual bool isWearableThroughLootTable(class CompoundTag const*) const;
    /*49*/ virtual bool canDestroyInCreative() const;
    /*51*/ virtual bool isLiquidClipItem(int) const;
    /*52*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;
    /*53*/ virtual bool requiresInteract() const;
    /*55*/ virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;
    /*56*/ virtual int getEnchantSlot() const;
    /*57*/ virtual int getEnchantValue() const;
    /*58*/ virtual int getArmorValue() const;
    /*59*/ virtual void unk_vfn_59();
    /*62*/ virtual float getViewDamping() const;
    /*63*/ virtual void unk_vfn_63();
    /*64*/ virtual void unk_vfn_64();
    /*65*/ virtual void unk_vfn_65();
    /*66*/ virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /*67*/ virtual bool hasCustomColor(class CompoundTag const*) const;
    /*68*/ virtual void unk_vfn_68();
    /*69*/ virtual void clearColor(class ItemStackBase&) const;
    /*70*/ virtual void clearColor(class CompoundTag*) const;
    /*71*/ virtual void setColor(class ItemStackBase&, class mce::Color const&) const;
    /*72*/ virtual void unk_vfn_72();
    /*73*/ virtual void unk_vfn_73();
    /*75*/ virtual void unk_vfn_75();
    /*76*/ virtual void unk_vfn_76();
    /*78*/ virtual bool canUseOnSimTick() const;
    /*83*/ virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /*85*/ virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /*86*/ virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /*87*/ virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    /*88*/ virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    /*89*/ virtual void unk_vfn_89();
    /*95*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*96*/ virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;
    /*97*/ virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    /*100*/ virtual void fixupCommon(class ItemStackBase&) const;
    /*101*/ virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    /*104*/ virtual void unk_vfn_104();
    /*105*/ virtual void unk_vfn_105();
    /*106*/ virtual bool validFishInteraction(int) const;
    /*109*/ virtual std::string getInteractText(class Player const&) const;
    /*110*/ virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    /*118*/ virtual bool canBeCharged() const;
    /*119*/ virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    /*120*/ virtual void unk_vfn_120();
    /*123*/ virtual std::string getAuxValuesDescription() const;
};