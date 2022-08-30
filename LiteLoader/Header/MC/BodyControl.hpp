/**
 * @file  BodyControl.hpp
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
 * @brief MC class BodyControl.
 *
 */
class BodyControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BODYCONTROL
public:
    class BodyControl& operator=(class BodyControl const &) = delete;
    BodyControl(class BodyControl const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~BodyControl();
    /**
     * @vtable 1
     * @symbol ?clientTick@BodyControl@@UEAAXAEAVMob@@@Z
     */
    virtual void clientTick(class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BODYCONTROL
#endif
    /**
     * @symbol ??0BodyControl@@QEAA@XZ
     */
    MCAPI BodyControl();

//private:

private:
MCAPI static float const MAX_CLAMP_ANGLE;

};