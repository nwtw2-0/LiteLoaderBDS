/**
 * @file  SoundVolumeDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure SoundVolumeDefinition.
 *
 */
struct SoundVolumeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOUNDVOLUMEDEFINITION
public:
    struct SoundVolumeDefinition& operator=(struct SoundVolumeDefinition const &) = delete;
    SoundVolumeDefinition(struct SoundVolumeDefinition const &) = delete;
    SoundVolumeDefinition() = delete;
#endif

public:
    /**
     * @symbol ?initialize@SoundVolumeDefinition@@QEAAXAEAVEntityContext@@@Z
     * @hash   -1129565474
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @symbol ?buildSchema@SoundVolumeDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@USoundVolumeDefinition@@@JsonUtil@@@std@@@Z
     * @hash   2076698886
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct SoundVolumeDefinition>> &);

};