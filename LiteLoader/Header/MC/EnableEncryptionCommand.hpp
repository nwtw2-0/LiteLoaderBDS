// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ENABLEENCRYPTIONCOMMAND
#include "Extra/EnableEncryptionCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENABLEENCRYPTIONCOMMAND
class EnableEncryptionCommand {
#include "Extra/EnableEncryptionCommandAPI.hpp"
public:
    /*0*/ virtual ~EnableEncryptionCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&, class IMinecraftApp&);
};