// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ContainerValidationBase.hpp"
#define EXTRA_INCLUDE_PART_ANVILINPUTCONTAINERVALIDATION
#include "Extra/AnvilInputContainerValidationAPI.hpp"
#undef EXTRA_INCLUDE_PART_ANVILINPUTCONTAINERVALIDATION
class AnvilInputContainerValidation : public ContainerValidationBase {
#include "Extra/AnvilInputContainerValidationAPI.hpp"
public:
    /*0*/ virtual ~AnvilInputContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /*2*/ virtual void unk_vfn_2();
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void unk_vfn_5();
};