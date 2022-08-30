/**
 * @file  BaseGoalDefinition.hpp
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
 * @brief MC class BaseGoalDefinition.
 *
 */
class BaseGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEGOALDEFINITION
public:
    class BaseGoalDefinition& operator=(class BaseGoalDefinition const &) = delete;
    BaseGoalDefinition(class BaseGoalDefinition const &) = delete;
    BaseGoalDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASEGOALDEFINITION
    /**
     * @vtable -1
     * @symbol ?validate@BaseGoalDefinition@@UEAA_NAEAVMob@@@Z
     */
    MCVAPI bool validate(class Mob &);
    /**
     * @vtable -1
     * @symbol ?validateMobType@BaseGoalDefinition@@UEAA_NAEAVMob@@@Z
     */
    MCVAPI bool validateMobType(class Mob &);
#endif
    /**
     * @symbol ?initialize@BaseGoalDefinition@@QEAAXAEAVEntityContext@@AEAVGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class Goal &);

//private:

private:
MCAPI static class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> mControlFlagMap;

};