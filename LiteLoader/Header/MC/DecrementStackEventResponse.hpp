/**
 * @file  DecrementStackEventResponse.hpp
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
 * @brief MC class DecrementStackEventResponse.
 *
 */
class DecrementStackEventResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DECREMENTSTACKEVENTRESPONSE
public:
    class DecrementStackEventResponse& operator=(class DecrementStackEventResponse const &) = delete;
    DecrementStackEventResponse(class DecrementStackEventResponse const &) = delete;
    DecrementStackEventResponse() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~DecrementStackEventResponse();
    /**
     * @vtable 1
     * @symbol ?getName@DecrementStackEventResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @vtable 2
     * @symbol ?executeAction@DecrementStackEventResponse@@UEBAXAEAVRenderParams@@@Z
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @vtable 3
     * @symbol ?buildSchema@DecrementStackEventResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DECREMENTSTACKEVENTRESPONSE
#endif
MCAPI static std::string const NameID;

};