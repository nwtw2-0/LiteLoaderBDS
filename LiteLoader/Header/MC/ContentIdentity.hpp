// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ContentIdentityAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ContentIdentity {
#include "Extra/ContentIdentityAPI.hpp"

public:
    MCAPI std::string asString() const;
    MCAPI bool operator!=(class ContentIdentity const&);
    MCAPI bool operator==(class ContentIdentity const&);
    MCAPI class ContentIdentity& operator=(class ContentIdentity&&);
    MCAPI class ContentIdentity& operator=(class ContentIdentity const&);
    MCAPI class mce::UUID const& getAsUUID() const;
    MCAPI bool isValid() const;

    MCAPI static class ContentIdentity EMPTY;
    MCAPI static class ContentIdentity fromString(std::string const&);
};