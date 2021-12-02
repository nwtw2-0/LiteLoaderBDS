// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#include "Bedrock.hpp"
#define EXTRA_INCLUDE_PART_OPTION
#include "Extra/OptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_OPTION
class Option {
#include "Extra/OptionAPI.hpp"
public:
    /*0*/ virtual ~Option();
    /*1*/ virtual void save(std::vector<struct std::pair<std::string, std::string>>&) = 0;
    /*2*/ virtual void load(std::string const&)                                       = 0;
    /*3*/ virtual void load(class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>>&);
    /*4*/ virtual void load(class Json::Value const&);

public:
    MCAPI bool getBool() const;
    MCAPI class Bedrock::PubSub::Subscription registerLock(class std::function<void(bool&)>);
    MCAPI class Bedrock::PubSub::Subscription registerObserver(class std::function<void(class Option const&)>);

    MCAPI static bool read(std::string const&, bool&);

private:
    MCAPI void _updatePropertyVector(std::vector<struct std::pair<std::string, std::string>>&, std::string const&);
};