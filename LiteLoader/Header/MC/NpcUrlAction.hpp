// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_NPCURLACTION
#include "Extra/NpcUrlActionAPI.hpp"
#undef EXTRA_INCLUDE_PART_NPCURLACTION
class NpcUrlAction {
#include "Extra/NpcUrlActionAPI.hpp"
public:
    /*0*/ virtual ~NpcUrlAction();
    /*1*/ virtual class Json::Value toJson();
};