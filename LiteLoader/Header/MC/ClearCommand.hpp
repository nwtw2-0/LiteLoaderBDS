/**
 * @file  ClearCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ClearCommand.
 *
 */
class ClearCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLEARCOMMAND
public:
    class ClearCommand& operator=(class ClearCommand const &) = delete;
    ClearCommand(class ClearCommand const &) = delete;
    ClearCommand() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ClearCommand();
    /**
     * @vtable 1
     * @symbol ?execute@ClearCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLEARCOMMAND
#endif
    /**
     * @symbol ?setup@ClearCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};