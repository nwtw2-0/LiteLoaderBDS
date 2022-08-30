/**
 * @file  SummonCommand.hpp
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
 * @brief MC class SummonCommand.
 *
 */
class SummonCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUMMONCOMMAND
public:
    class SummonCommand& operator=(class SummonCommand const &) = delete;
    SummonCommand(class SummonCommand const &) = delete;
    SummonCommand() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~SummonCommand();
    /**
     * @vtable 1
     * @symbol ?execute@SummonCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUMMONCOMMAND
#endif
    /**
     * @symbol ?setup@SummonCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};