/**
 * @file  GetCollisionShapeActorProxy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GetCollisionShapeActorProxy.
 *
 */
class GetCollisionShapeActorProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETCOLLISIONSHAPEACTORPROXY
public:
    class GetCollisionShapeActorProxy& operator=(class GetCollisionShapeActorProxy const &) = delete;
    GetCollisionShapeActorProxy(class GetCollisionShapeActorProxy const &) = delete;
    GetCollisionShapeActorProxy() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~GetCollisionShapeActorProxy();
    /**
     * @vtable 1
     * @symbol ?getFeetAttachPosY@GetCollisionShapeActorProxy@@UEBAMXZ
     */
    virtual float getFeetAttachPosY() const;
    /**
     * @vtable 2
     * @symbol ?canDescendThroughBlock@GetCollisionShapeActorProxy@@UEBA_NXZ
     */
    virtual bool canDescendThroughBlock() const;
    /**
     * @vtable 3
     * @symbol ?getFallDistance@GetCollisionShapeActorProxy@@UEBAMXZ
     */
    virtual float getFallDistance() const;
    /**
     * @vtable 4
     * @symbol ?getEntityTypeId@GetCollisionShapeActorProxy@@UEBA?AW4ActorType@@XZ
     */
    virtual enum ActorType getEntityTypeId() const;
    /**
     * @vtable 5
     * @symbol ?isWearingLeatherBoots@GetCollisionShapeActorProxy@@UEBA_NXZ
     */
    virtual bool isWearingLeatherBoots() const;
    /**
     * @vtable 6
     * @symbol ?hasLightWeightFamilyTag@GetCollisionShapeActorProxy@@UEBA_NXZ
     */
    virtual bool hasLightWeightFamilyTag() const;
    /**
     * @vtable 7
     * @symbol ?getAABB@GetCollisionShapeActorProxy@@UEBAAEBVAABB@@XZ
     */
    virtual class AABB const & getAABB() const;
    /**
     * @vtable 8
     * @symbol ?isWorldBuilder@GetCollisionShapeActorProxy@@UEBA_NXZ
     */
    virtual bool isWorldBuilder() const;
    /**
     * @vtable 9
     * @symbol ?isRiding@GetCollisionShapeActorProxy@@UEBA_NXZ
     */
    virtual bool isRiding() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GETCOLLISIONSHAPEACTORPROXY
    /**
     * @vtable -1
     * @symbol ?hasPassenger@GetCollisionShapeActorProxy@@UEBA_NXZ
     */
    MCVAPI bool hasPassenger() const;
#endif
    /**
     * @symbol ??0GetCollisionShapeActorProxy@@QEAA@AEBUIActorMovementProxy@@@Z
     */
    MCAPI GetCollisionShapeActorProxy(struct IActorMovementProxy const &);

};