// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ContainerValidationBase.hpp"
#define EXTRA_INCLUDE_PART_CURSORCONTAINERVALIDATION
#include "Extra/CursorContainerValidationAPI.hpp"
#undef EXTRA_INCLUDE_PART_CURSORCONTAINERVALIDATION
class CursorContainerValidation : public ContainerValidationBase {
#include "Extra/CursorContainerValidationAPI.hpp"
public:
    /*0*/ virtual ~CursorContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /*2*/ virtual void unk_vfn_2();
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void unk_vfn_5();
    /*6*/ virtual void unk_vfn_6();
};