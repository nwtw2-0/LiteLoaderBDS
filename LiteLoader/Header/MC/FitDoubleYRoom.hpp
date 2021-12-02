// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_FITDOUBLEYROOM
#include "Extra/FitDoubleYRoomAPI.hpp"
#undef EXTRA_INCLUDE_PART_FITDOUBLEYROOM
class FitDoubleYRoom {
#include "Extra/FitDoubleYRoomAPI.hpp"
public:
    /*0*/ virtual ~FitDoubleYRoom();
    /*1*/ virtual bool fits(class RoomDefinition const&) const;
    /*2*/ virtual std::unique_ptr<class OceanMonumentPiece> create(int&, class std::shared_ptr<class RoomDefinition>, class Random&);
};