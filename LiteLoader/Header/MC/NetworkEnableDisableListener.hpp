// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_NETWORKENABLEDISABLELISTENER
#include "Extra/NetworkEnableDisableListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_NETWORKENABLEDISABLELISTENER
class NetworkEnableDisableListener {
#include "Extra/NetworkEnableDisableListenerAPI.hpp"
public:
    /*0*/ virtual ~NetworkEnableDisableListener();

public:
    MCAPI void disable();
    MCAPI bool isDisabled() const;
    MCAPI bool isEnabled() const;
    MCAPI bool isNetworkAllowed() const;
    MCAPI bool isUninitialized() const;
    MCAPI void tryEnable();
    MCAPI void uninitialize();
};