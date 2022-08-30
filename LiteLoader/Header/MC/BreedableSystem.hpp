/**
 * @file  BreedableSystem.hpp
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
 * @brief MC class BreedableSystem.
 *
 */
class BreedableSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREEDABLESYSTEM
public:
    class BreedableSystem& operator=(class BreedableSystem const &) = delete;
    BreedableSystem(class BreedableSystem const &) = delete;
    BreedableSystem() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~BreedableSystem();
    /**
     * @vtable 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vtable 2
     * @symbol ?tick@BreedableSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREEDABLESYSTEM
#endif

};