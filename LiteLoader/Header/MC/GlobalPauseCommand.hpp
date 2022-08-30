/**
 * @file  GlobalPauseCommand.hpp
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
 * @brief MC class GlobalPauseCommand.
 *
 */
class GlobalPauseCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLOBALPAUSECOMMAND
public:
    class GlobalPauseCommand& operator=(class GlobalPauseCommand const &) = delete;
    GlobalPauseCommand(class GlobalPauseCommand const &) = delete;
    GlobalPauseCommand() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~GlobalPauseCommand();
    /**
     * @vtable 1
     * @symbol ?execute@GlobalPauseCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GLOBALPAUSECOMMAND
#endif
    /**
     * @symbol ?setup@GlobalPauseCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};