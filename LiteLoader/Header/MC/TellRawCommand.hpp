// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/TellRawCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART
class TellRawCommand {
#include "Extra/TellRawCommandAPI.hpp"
public:
    virtual ~TellRawCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};