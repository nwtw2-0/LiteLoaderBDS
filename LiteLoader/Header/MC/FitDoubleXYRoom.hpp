// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FitDoubleXYRoomAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FitDoubleXYRoom {
#include "Extra/FitDoubleXYRoomAPI.hpp"
public:
    virtual ~FitDoubleXYRoom();
    virtual bool fits(class RoomDefinition const&);
    virtual std::unique_ptr<class OceanMonumentPiece> create(int&, class std::shared_ptr<class RoomDefinition>, class Random&);
};