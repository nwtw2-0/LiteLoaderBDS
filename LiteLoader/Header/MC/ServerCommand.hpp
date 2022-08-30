/**
 * @file  ServerCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerCommand.
 *
 */
class ServerCommand {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERCOMMAND
public:
    class ServerCommand& operator=(class ServerCommand const &) = delete;
    ServerCommand(class ServerCommand const &) = delete;
    ServerCommand() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERCOMMAND
    /**
     * @vtable -1
     * @symbol ??1ServerCommand@@UEAA@XZ
     */
    MCVAPI ~ServerCommand();
#endif
    /**
     * @symbol ?setup@ServerCommand@@SAXAEAVMinecraft@@@Z
     */
    MCAPI static void setup(class Minecraft &);

//protected:

protected:
MCAPI static class Minecraft * mGame;

};