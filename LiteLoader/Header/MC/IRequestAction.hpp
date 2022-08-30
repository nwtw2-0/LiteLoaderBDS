/**
 * @file  IRequestAction.hpp
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
 * @brief MC class IRequestAction.
 *
 */
class IRequestAction {

#define AFTER_EXTRA
// Add Member There
public:
enum RequestActionType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IREQUESTACTION
public:
    class IRequestAction& operator=(class IRequestAction const &) = delete;
    IRequestAction(class IRequestAction const &) = delete;
    IRequestAction() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~IRequestAction();
    /**
     * @vtable 1
     * @symbol ?execute@TestAction@@UEAAXAEAVServerLevel@@AEAVDimension@@@Z
     */
    virtual void execute(class ServerLevel &, class Dimension &) = 0;
    /**
     * @vtable 2
     * @symbol ?serialize@IRequestAction@@UEAAXAEAVCompoundTag@@@Z
     */
    virtual void serialize(class CompoundTag &);
    /**
     * @vtable 3
     * @symbol ??8IRequestAction@@UEBA_NAEAV0@@Z
     */
    virtual bool operator==(class IRequestAction &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IREQUESTACTION
#endif
    /**
     * @symbol ??0IRequestAction@@QEAA@AEBW4RequestActionType@0@@Z
     */
    MCAPI IRequestAction(enum IRequestAction::RequestActionType const &);
    /**
     * @symbol ?isValidTag@IRequestAction@@SA_NAEBVCompoundTag@@@Z
     */
    MCAPI static bool isValidTag(class CompoundTag const &);

};