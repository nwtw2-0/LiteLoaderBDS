/**
 * @file  PlayerMovementTelemetryData.hpp
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
 * @brief MC class PlayerMovementTelemetryData.
 *
 */
class PlayerMovementTelemetryData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERMOVEMENTTELEMETRYDATA
public:
    class PlayerMovementTelemetryData& operator=(class PlayerMovementTelemetryData const &) = delete;
    PlayerMovementTelemetryData(class PlayerMovementTelemetryData const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERMOVEMENTTELEMETRYDATA
#endif
    /**
     * @symbol ??0PlayerMovementTelemetryData@@QEAA@XZ
     */
    MCAPI PlayerMovementTelemetryData();
    /**
     * @symbol ?getAverage@PlayerMovementTelemetryData@@QEBAMXZ
     */
    MCAPI float getAverage() const;
    /**
     * @symbol ?reset@PlayerMovementTelemetryData@@QEAAXXZ
     */
    MCAPI void reset();

};