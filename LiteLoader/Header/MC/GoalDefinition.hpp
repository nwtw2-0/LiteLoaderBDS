/**
 * @file  GoalDefinition.hpp
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
 * @brief MC structure GoalDefinition.
 *
 */
struct GoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRApublic:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GOALDEFINITION
#endif
    /**
     * @symbol ??0GoalDefinition@@QEAA@XZ
     */
    MCAPI GoalDefinition();
    /**
     * @symbol ??0GoalDefinition@@QEAA@AEBU0@@Z
     */
    MCAPI GoalDefinition(struct GoalDefinition const &);
    /**
     * @symbol ??0GoalDefinition@@QEAA@$$QEAU0@@Z
     */
    MCAPI GoalDefinition(struct GoalDefinition &&);
    /**
     * @symbol ?_getPOITypeFromString@GoalDefinition@@QEAA?AW4POIType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI enum POIType _getPOITypeFromString(std::string);
    /**
     * @symbol ??4GoalDefinition@@QEAAAEAU0@AEBU0@@Z
     */
    MCAPI struct GoalDefinition & operator=(struct GoalDefinition const &);
    /**
     * @symbol ??4GoalDefinition@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct GoalDefinition & operator=(struct GoalDefinition &&);
    /**
     * @symbol ?parse@GoalDefinition@@QEAA_NAEBUConstDeserializeDataParams@@H@Z
     */
    MCAPI bool parse(struct ConstDeserializeDataParams const &, int);
    /**
     * @symbol ??1GoalDefinition@@QEAA@XZ
     */
    MCAPI ~GoalDefinition();
    /**
     * @symbol ?CreateGoal@GoalDefinition@@SA?AV?$unique_ptr@VGoal@@U?$default_delete@VGoal@@@std@@@std@@AEAVMob@@AEBU1@@Z
     */
    MCAPI static std::unique_ptr<class Goal> CreateGoal(class Mob &, struct GoalDefinition const &);
    /**
     * @symbol ?GoalExists@GoalDefinition@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool GoalExists(std::string const &);
    /**
     * @symbol ?init@GoalDefinition@@SAXXZ
     */
    MCAPI static void init();
MCAPI static class std::unordered_map<std::string, class std::function<std::unique_ptr<class Goal> (class Mob &, struct GoalDefinition const &)>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class std::function<std::unique_ptr<class Goal> (class Mob &, struct GoalDefinition const &)>>>> mGoalMap;
    /**
     * @symbol ?shutdown@GoalDefinition@@SAXXZ
     */
    MCAPI static void shutdown();

};