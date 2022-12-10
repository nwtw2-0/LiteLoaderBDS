/**
 * @file  FuelItemComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FuelItemComponent.
 *
 */
class FuelItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FUELITEMCOMPONENT
public:
    class FuelItemComponent& operator=(class FuelItemComponent const &) = delete;
    FuelItemComponent(class FuelItemComponent const &) = delete;
    FuelItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1687321886
     */
    virtual ~FuelItemComponent();
    /**
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VFuelItemComponent@@@@UEBA_NXZ
     * @hash   -1019575731
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  2
     * @hash   -1265373198
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1256992317
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1313821052
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VFuelItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   896582975
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VFuelItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     * @hash   1456115761
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ?bindType@FuelItemComponent@@SAXXZ
     * @hash   -362660337
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier@FuelItemComponent@@SAAEBVHashedString@@XZ
     * @hash   -1112468896
     */
    MCAPI static class HashedString const & getIdentifier();

};