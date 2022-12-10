/**
 * @file  PlayerTickSystem.hpp
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
 * @brief MC class PlayerTickSystem.
 *
 */
class PlayerTickSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERTICKSYSTEM
public:
    class PlayerTickSystem& operator=(class PlayerTickSystem const &) = delete;
    PlayerTickSystem(class PlayerTickSystem const &) = delete;
    PlayerTickSystem() = delete;
#endif

public:
    /**
     * @symbol ?create@PlayerTickSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   572584906
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol ?onTickAdded@PlayerTickSystem@@SAXAEAUPlayerTickComponent@@_K@Z
     * @hash   -1057180442
     */
    MCAPI static void onTickAdded(struct PlayerTickComponent &, unsigned __int64);
    /**
     * @symbol ?shouldTickMovementSystemOnEntity@PlayerTickSystem@@SA_NAEBVEntityContext@@@Z
     * @hash   1494865939
     */
    MCAPI static bool shouldTickMovementSystemOnEntity(class EntityContext const &);

};