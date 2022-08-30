/**
 * @file  LevelChunkMetaData.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelChunkMetaData.
 *
 */
class LevelChunkMetaData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKMETADATA
public:
    class LevelChunkMetaData& operator=(class LevelChunkMetaData const &) = delete;
    LevelChunkMetaData() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELCHUNKMETADATA
#endif
    /**
     * @symbol ??0LevelChunkMetaData@@QEAA@AEBV0@@Z
     */
    MCAPI LevelChunkMetaData(class LevelChunkMetaData const &);
    /**
     * @symbol ??0LevelChunkMetaData@@QEAA@AEAVIDataInput@@@Z
     */
    MCAPI LevelChunkMetaData(class IDataInput &);
    /**
     * @symbol ?getCurrentHash@LevelChunkMetaData@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCurrentHash() const;
    /**
     * @symbol ?serialize@LevelChunkMetaData@@QEBAXAEAVIDataOutput@@@Z
     */
    MCAPI void serialize(class IDataOutput &) const;
    /**
     * @symbol ??1LevelChunkMetaData@@QEAA@XZ
     */
    MCAPI ~LevelChunkMetaData();
MCAPI static unsigned __int64 const INVALID_META_DATA;

//protected:
    /**
     * @symbol ?_deserialize@LevelChunkMetaData@@IEAAXAEAVIDataInput@@@Z
     */
    MCAPI void _deserialize(class IDataInput &);
    /**
     * @symbol ?_recomputeHash@LevelChunkMetaData@@IEBAXXZ
     */
    MCAPI void _recomputeHash() const;

protected:

};