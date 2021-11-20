// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SavedDataStorageAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SavedDataStorage {
#include "Extra/SavedDataStorageAPI.hpp"
public:
    virtual ~SavedDataStorage();

public:
    MCAPI bool loadAndSet(class SavedData&, std::string const&);
    MCAPI void save();
    MCAPI void set(std::string const&, class SavedData&);

private:
    MCAPI void _save(class SavedData const&);
};