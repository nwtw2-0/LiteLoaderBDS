/**
 * @file  FurnaceContainerScreenValidator.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerScreenValidatorBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FurnaceContainerScreenValidator.
 *
 */
class FurnaceContainerScreenValidator : public ContainerScreenValidatorBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FURNACECONTAINERSCREENVALIDATOR
public:
    class FurnaceContainerScreenValidator& operator=(class FurnaceContainerScreenValidator const &) = delete;
    FurnaceContainerScreenValidator(class FurnaceContainerScreenValidator const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~FurnaceContainerScreenValidator();
    /**
     * @vtable 1
     * @symbol ?postCommitItemRemoved@FurnaceContainerScreenValidator@@UEAA?AV?$shared_ptr@VContainerValidationCommitObject@@@std@@W4ContainerEnumName@@HAEBVItemStack@@@Z
     */
    virtual class std::shared_ptr<class ContainerValidationCommitObject> postCommitItemRemoved(enum ContainerEnumName, int, class ItemStack const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FURNACECONTAINERSCREENVALIDATOR
#endif
    /**
     * @symbol ??0FurnaceContainerScreenValidator@@QEAA@XZ
     */
    MCAPI FurnaceContainerScreenValidator();

};