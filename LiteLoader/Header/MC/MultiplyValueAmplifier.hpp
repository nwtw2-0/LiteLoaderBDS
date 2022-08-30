/**
 * @file  MultiplyValueAmplifier.hpp
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
 * @brief MC class MultiplyValueAmplifier.
 *
 */
class MultiplyValueAmplifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIPLYVALUEAMPLIFIER
public:
    class MultiplyValueAmplifier& operator=(class MultiplyValueAmplifier const &) = delete;
    MultiplyValueAmplifier(class MultiplyValueAmplifier const &) = delete;
    MultiplyValueAmplifier() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~MultiplyValueAmplifier();
    /**
     * @vtable 1
     * @symbol ?getAmount@MultiplyValueAmplifier@@UEBAMHM@Z
     */
    virtual float getAmount(int, float) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MULTIPLYVALUEAMPLIFIER
#endif
    /**
     * @symbol ??0MultiplyValueAmplifier@@QEAA@M@Z
     */
    MCAPI MultiplyValueAmplifier(float);

};