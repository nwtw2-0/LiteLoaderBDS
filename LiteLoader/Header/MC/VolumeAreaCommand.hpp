/**
 * @file  VolumeAreaCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VolumeAreaCommand.
 *
 */
class VolumeAreaCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEAREACOMMAND
public:
    class VolumeAreaCommand& operator=(class VolumeAreaCommand const &) = delete;
    VolumeAreaCommand(class VolumeAreaCommand const &) = delete;
    VolumeAreaCommand() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~VolumeAreaCommand();
    /**
     * @vtable 1
     * @symbol ?execute@VolumeAreaCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VOLUMEAREACOMMAND
#endif
    /**
     * @symbol ?setup@VolumeAreaCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?_add@VolumeAreaCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEBVDimension@@AEAVVolumeEntityManagerServer@@AEAVPacketSender@@@Z
     */
    MCAPI void _add(class CommandOrigin const &, class CommandOutput &, class Dimension const &, class VolumeEntityManagerServer &, class PacketSender &) const;
    /**
     * @symbol ?_list@VolumeAreaCommand@@AEBAXAEAVCommandOutput@@AEBVLevel@@AEBVDimension@@AEBVVolumeEntityManagerServer@@@Z
     */
    MCAPI void _list(class CommandOutput &, class Level const &, class Dimension const &, class VolumeEntityManagerServer const &) const;
    /**
     * @symbol ?_remove@VolumeAreaCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEBVDimension@@AEAVVolumeEntityManagerServer@@AEAVPacketSender@@@Z
     */
    MCAPI void _remove(class CommandOrigin const &, class CommandOutput &, class Dimension const &, class VolumeEntityManagerServer &, class PacketSender &) const;
    /**
     * @symbol ?_removeAll@VolumeAreaCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEBVDimension@@AEAVVolumeEntityManagerServer@@AEAVPacketSender@@@Z
     */
    MCAPI void _removeAll(class CommandOrigin const &, class CommandOutput &, class Dimension const &, class VolumeEntityManagerServer &, class PacketSender &) const;

private:

};