// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CONTAINERVALIDATORFACTORY
#include "Extra/ContainerValidatorFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_CONTAINERVALIDATORFACTORY
class ContainerValidatorFactory {
#include "Extra/ContainerValidatorFactoryAPI.hpp"

public:
    MCAPI static std::unique_ptr<class ContainerScreenValidatorBase> createContainerScreenValidator(class ContainerScreenContext const&);
    MCAPI static class std::shared_ptr<class ContainerValidationBase const> createContainerValidator(enum ContainerEnumName, class ContainerScreenContext const&, enum ContainerValidationCaller);
    MCAPI static class Container* getBackingContainer(enum ContainerEnumName, class ContainerScreenContext const&);
};