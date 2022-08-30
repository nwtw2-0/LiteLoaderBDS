/**
 * @file  DialogueCommand.hpp
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
 * @brief MC class DialogueCommand.
 *
 */
class DialogueCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIALOGUECOMMAND
public:
    class DialogueCommand& operator=(class DialogueCommand const &) = delete;
    DialogueCommand(class DialogueCommand const &) = delete;
    DialogueCommand() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~DialogueCommand();
    /**
     * @vtable 1
     * @symbol ?execute@DialogueCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIALOGUECOMMAND
#endif
    /**
     * @symbol ?setup@DialogueCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};