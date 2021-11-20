// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/NetworkItemInstanceDescriptorAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NetworkItemInstanceDescriptor {
#include "Extra/NetworkItemInstanceDescriptorAPI.hpp"

public:
    MCAPI class ItemInstance getItemInstance(class BlockPalette const&) const;
    MCAPI void read(class ReadOnlyBinaryStream&);
    MCAPI void write(class BinaryStream&) const;
};