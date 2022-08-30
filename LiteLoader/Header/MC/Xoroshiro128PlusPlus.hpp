/**
 * @file  Xoroshiro128PlusPlus.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class Xoroshiro128PlusPlus.
 *
 */
class Xoroshiro128PlusPlus {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XOROSHIRO128PLUSPLUS
public:
    class Xoroshiro128PlusPlus& operator=(class Xoroshiro128PlusPlus const &) = delete;
    Xoroshiro128PlusPlus(class Xoroshiro128PlusPlus const &) = delete;
    Xoroshiro128PlusPlus() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_XOROSHIRO128PLUSPLUS
#endif
    /**
     * @symbol ?nextLong@Xoroshiro128PlusPlus@@QEAA_JXZ
     */
    MCAPI __int64 nextLong();

};