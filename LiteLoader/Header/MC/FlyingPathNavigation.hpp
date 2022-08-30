/**
 * @file  FlyingPathNavigation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PathNavigation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlyingPathNavigation.
 *
 */
class FlyingPathNavigation : public PathNavigation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYINGPATHNAVIGATION
public:
    class FlyingPathNavigation& operator=(class FlyingPathNavigation const &) = delete;
    FlyingPathNavigation(class FlyingPathNavigation const &) = delete;
    FlyingPathNavigation() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~FlyingPathNavigation();
    /**
     * @vtable 1
     * @symbol ?initializeInternal@FlyingPathNavigation@@UEAAXAEAVMob@@PEAUNavigationDescription@@@Z
     */
    virtual void initializeInternal(class Mob &, struct NavigationDescription *);
    /**
     * @vtable 2
     * @symbol ?tick@FlyingPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
     */
    virtual void tick(class NavigationComponent &, class Mob &);
    /**
     * @vtable 3
     * @symbol ?getTempMobPos@FlyingPathNavigation@@MEBA?AVVec3@@AEBVMob@@@Z
     */
    virtual class Vec3 getTempMobPos(class Mob const &) const;
    /**
     * @vtable 4
     * @symbol ?createPath@FlyingPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEBVVec3@@@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Vec3 const &);
    /**
     * @vtable 5
     * @symbol ?createPath@FlyingPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEAVActor@@@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Actor &);
    /**
     * @vtable 9
     * @symbol ?stop@FlyingPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
     */
    virtual void stop(class NavigationComponent &, class Mob &);
    /**
     * @vtable 11
     * @symbol ?canUpdatePath@FlyingPathNavigation@@MEBA_NAEBVMob@@@Z
     */
    virtual bool canUpdatePath(class Mob const &) const;
    /**
     * @vtable 12
     * @symbol ?updatePath@FlyingPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
     */
    virtual void updatePath(class NavigationComponent &, class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLYINGPATHNAVIGATION
#endif

//private:
    /**
     * @symbol ?_restorePreviousGravityFlag@FlyingPathNavigation@@AEAAXAEAVMob@@@Z
     */
    MCAPI void _restorePreviousGravityFlag(class Mob &);
    /**
     * @symbol ?_storePreviousGravityFlag@FlyingPathNavigation@@AEAAXAEAVMob@@@Z
     */
    MCAPI void _storePreviousGravityFlag(class Mob &);

private:

};