// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_LEVELSTORAGESOURCE
#include "Extra/LevelStorageSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART_LEVELSTORAGESOURCE
class LevelStorageSource {
#include "Extra/LevelStorageSourceAPI.hpp"
public:
    /*0*/ virtual ~LevelStorageSource();

public:
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const WORLD_SAVE_FLUSH_INTERVAL;
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const WORLD_SAVE_MENU_FLUSH_INTERVAL;
};