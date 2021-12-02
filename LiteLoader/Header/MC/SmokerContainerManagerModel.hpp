// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FurnaceContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART_SMOKERCONTAINERMANAGERMODEL
#include "Extra/SmokerContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_SMOKERCONTAINERMANAGERMODEL
class SmokerContainerManagerModel : public FurnaceContainerManagerModel {
#include "Extra/SmokerContainerManagerModelAPI.hpp"
public:
    /*0*/ virtual ~SmokerContainerManagerModel();
    /*1*/ virtual int /*enum ContainerID*/ getContainerId() const;
    /*2*/ virtual void setContainerId(int /*enum ContainerID*/);
    /*3*/ virtual int /*enum ContainerType*/ getContainerType() const;
    /*4*/ virtual void setContainerType(int /*enum ContainerType*/);
};