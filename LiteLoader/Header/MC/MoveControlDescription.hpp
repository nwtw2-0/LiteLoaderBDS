/**
 * @file  MoveControlDescription.hpp
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
 * @brief MC structure MoveControlDescription.
 *
 */
struct MoveControlDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLDESCRIPTION
public:
    struct MoveControlDescription& operator=(struct MoveControlDescription const &) = delete;
    MoveControlDescription(struct MoveControlDescription const &) = delete;
    MoveControlDescription() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVECONTROLDESCRIPTION
    /**
     * @vtable -1
     * @symbol ?deserializeData@MoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    MCVAPI void deserializeData(struct DeserializeDataParams);
    /**
     * @vtable -1
     * @symbol ?serializeData@MoveControlDescription@@UEBAXAEAVValue@Json@@@Z
     */
    MCVAPI void serializeData(class Json::Value &) const;
#endif

};