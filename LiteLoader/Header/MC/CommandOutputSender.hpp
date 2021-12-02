// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_COMMANDOUTPUTSENDER
#include "Extra/CommandOutputSenderAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMMANDOUTPUTSENDER
class CommandOutputSender {
#include "Extra/CommandOutputSenderAPI.hpp"
public:
    /*0*/ virtual ~CommandOutputSender();
    /*1*/ virtual void send(class CommandOrigin const&, class CommandOutput const&);
    /*2*/ virtual void registerOutputCallback(class std::function<void(class AutomationCmdOutput&)> const&);

public:
    MCAPI void sendToAdmins(class CommandOrigin const&, class CommandOutput const&, enum CommandPermissionLevel);

    MCAPI static std::vector<std::string> translate(std::vector<std::string> const&);

protected:
    MCAPI class Json::Value _toJson(class CommandOutput const&) const;
};