/**
 * @file  ContextMessageLogger.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ContextMessageLogger.
 *
 */
class ContextMessageLogger {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTEXTMESSAGELOGGER
public:
    class ContextMessageLogger& operator=(class ContextMessageLogger const &) = delete;
    ContextMessageLogger(class ContextMessageLogger const &) = delete;
    ContextMessageLogger() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTEXTMESSAGELOGGER
#endif
    /**
     * @symbol ?log@ContextMessageLogger@@QEAAXW4LogArea@@W4LogLevel@@PEBD@Z
     */
    MCAPI void log(enum LogArea, enum LogLevel, char const *);
    /**
     * @symbol ?shouldMessagePostToParentMessageLoggers@ContextMessageLogger@@QEAA_NXZ
     */
    MCAPI bool shouldMessagePostToParentMessageLoggers();

};