// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TEMPORALATTRIBUTEBUFF
#include "Extra/TemporalAttributeBuffAPI.hpp"
#undef EXTRA_INCLUDE_PART_TEMPORALATTRIBUTEBUFF
class TemporalAttributeBuff {
#include "Extra/TemporalAttributeBuffAPI.hpp"
public:
    /*0*/ virtual ~TemporalAttributeBuff();
    /*1*/ virtual bool isInstantaneous() const;
    /*2*/ virtual bool isSerializable() const;
    /*3*/ virtual void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
    /*4*/ virtual bool shouldBuff() const;
    /*5*/ virtual bool isComplete() const;

public:
    MCAPI float getBaseAmount() const;
    MCAPI int getDuration() const;
    MCAPI int getLifeTimer() const;
    MCAPI void serializationSetLifeTime(int);
};