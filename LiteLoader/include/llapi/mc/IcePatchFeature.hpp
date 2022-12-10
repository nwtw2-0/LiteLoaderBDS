/**
 * @file  IcePatchFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IcePatchFeature.
 *
 */
class IcePatchFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICEPATCHFEATURE
public:
    class IcePatchFeature& operator=(class IcePatchFeature const &) = delete;
    IcePatchFeature(class IcePatchFeature const &) = delete;
    IcePatchFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1529069689
     */
    virtual ~IcePatchFeature();
    /**
     * @vftbl  3
     * @symbol ?place@IcePatchFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1053935555
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ??0IcePatchFeature@@QEAA@H@Z
     * @hash   1463591702
     */
    MCAPI IcePatchFeature(int);

};