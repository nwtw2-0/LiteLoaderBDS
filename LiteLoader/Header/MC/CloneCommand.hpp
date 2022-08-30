/**
 * @file  CloneCommand.hpp
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
 * @brief MC class CloneCommand.
 *
 */
class CloneCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLONECOMMAND
public:
    class CloneCommand& operator=(class CloneCommand const &) = delete;
    CloneCommand(class CloneCommand const &) = delete;
    CloneCommand() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~CloneCommand();
    /**
     * @vtable 1
     * @symbol ?execute@CloneCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLONECOMMAND
#endif
    /**
     * @symbol ?setup@CloneCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};