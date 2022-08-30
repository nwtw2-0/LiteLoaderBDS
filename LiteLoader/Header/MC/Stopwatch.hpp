/**
 * @file  Stopwatch.hpp
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
 * @brief MC class Stopwatch.
 *
 */
class Stopwatch {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPWATCH
public:
    class Stopwatch& operator=(class Stopwatch const &) = delete;
    Stopwatch(class Stopwatch const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~Stopwatch();
    /**
     * @vtable 1
     * @symbol ?stop@Stopwatch@@UEAANXZ
     */
    virtual double stop();
    /**
     * @vtable 2
     * @symbol ?stopContinue@Stopwatch@@UEAANXZ
     */
    virtual double stopContinue();
    /**
     * @vtable 3
     * @symbol ?print@Stopwatch@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void print(std::string const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STOPWATCH
#endif
    /**
     * @symbol ??0Stopwatch@@QEAA@XZ
     */
    MCAPI Stopwatch();
    /**
     * @symbol ?reset@Stopwatch@@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @symbol ?start@Stopwatch@@QEAAXXZ
     */
    MCAPI void start();

};