/**
 * @file  DebugEndPoint.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DebugEndPoint.
 *
 */
class DebugEndPoint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEBUGENDPOINT
public:
    class DebugEndPoint& operator=(class DebugEndPoint const &) = delete;
    DebugEndPoint(class DebugEndPoint const &) = delete;
    DebugEndPoint() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEBUGENDPOINT
#endif
    /**
     * @symbol ?initializeContentLogging@DebugEndPoint@@QEAAXAEAVResourcePackManager@@AEBVPath@Core@@@Z
     */
    MCAPI void initializeContentLogging(class ResourcePackManager &, class Core::Path const &);

//private:

private:
MCAPI static class std::unordered_map<enum LogArea, bool, struct std::hash<enum LogArea>, struct std::equal_to<enum LogArea>, class std::allocator<struct std::pair<enum LogArea const, bool>>> const mAssertAreas;

};