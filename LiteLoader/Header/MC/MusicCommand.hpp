/**
 * @file  MusicCommand.hpp
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
 * @brief MC class MusicCommand.
 *
 */
class MusicCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MUSICCOMMAND
public:
    class MusicCommand& operator=(class MusicCommand const &) = delete;
    MusicCommand(class MusicCommand const &) = delete;
    MusicCommand() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~MusicCommand();
    /**
     * @vtable 1
     * @symbol ?execute@MusicCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MUSICCOMMAND
#endif
    /**
     * @symbol ?setup@MusicCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?_handleActionQueueOrPlay@MusicCommand@@AEBAXAEAVCompoundTag@@AEAVCommandOutput@@@Z
     */
    MCAPI void _handleActionQueueOrPlay(class CompoundTag &, class CommandOutput &) const;
    /**
     * @symbol ?_handleActionStop@MusicCommand@@AEBAXAEAVCompoundTag@@AEAVCommandOutput@@@Z
     */
    MCAPI void _handleActionStop(class CompoundTag &, class CommandOutput &) const;
    /**
     * @symbol ?_handleActionVolume@MusicCommand@@AEBAXAEAVCompoundTag@@AEAVCommandOutput@@@Z
     */
    MCAPI void _handleActionVolume(class CompoundTag &, class CommandOutput &) const;

private:

};