/**
 * @file  LevelStorage.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelStorage.
 *
 */
class LevelStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGE
public:
    class LevelStorage& operator=(class LevelStorage const &) = delete;
    LevelStorage(class LevelStorage const &) = delete;
    LevelStorage() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~LevelStorage();
    /**
     * @vtable 1
     * @symbol ?addStorageObserver@DBStorage@@UEAAXV?$unique_ptr@VLevelStorageObserver@@U?$default_delete@VLevelStorageObserver@@@std@@@std@@@Z
     */
    virtual void addStorageObserver(std::unique_ptr<class LevelStorageObserver>) = 0;
    /**
     * @vtable 2
     * @symbol ?getCompoundTag@DBStorage@@UEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4Category@DBHelpers@@@Z
     */
    virtual std::unique_ptr<class CompoundTag> getCompoundTag(std::string const &, enum DBHelpers::Category) = 0;
    /**
     * @vtable 3
     * @symbol ?hasKey@DBStorage@@UEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@W4Category@DBHelpers@@@Z
     */
    virtual bool hasKey(class gsl::basic_string_span<char const, -1>, enum DBHelpers::Category) const = 0;
    /**
     * @vtable 4
     * @symbol ?forEachKeyWithPrefix@DBStorage@@UEBAXV?$basic_string_span@$$CBD$0?0@gsl@@W4Category@DBHelpers@@AEBV?$function@$$A6AXV?$basic_string_span@$$CBD$0?0@gsl@@0@Z@std@@@Z
     */
    virtual void forEachKeyWithPrefix(class gsl::basic_string_span<char const, -1>, enum DBHelpers::Category, class std::function<void (class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>)> const &) const = 0;
    /**
     * @vtable 5
     * @symbol ?loadLevelData@DBStorage@@UEAA_NAEAVLevelData@@@Z
     */
    virtual bool loadLevelData(class LevelData &) = 0;
    /**
     * @vtable 6
     * @symbol ?createChunkStorage@DBStorage@@UEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z
     */
    virtual std::unique_ptr<class ChunkSource> createChunkStorage(std::unique_ptr<class ChunkSource>, enum StorageVersion) = 0;
    /**
     * @vtable 7
     * @symbol ?saveLevelData@DBStorage@@UEAAXAEBVLevelData@@@Z
     */
    virtual void saveLevelData(class LevelData const &) = 0;
    /**
     * @vtable 8
     * @symbol ?getFullPath@DBStorage@@UEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const & getFullPath() const = 0;
    /**
     * @vtable 9
     * @symbol ?saveData@DBStorage@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@$$QEAV43@W4Category@DBHelpers@@@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(std::string const &, std::string &&, enum DBHelpers::Category) = 0;
    /**
     * @vtable 10
     * @symbol ?saveData@DBStorage@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBVLevelStorageWriteBatch@@@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(class LevelStorageWriteBatch const &) = 0;
    /**
     * @vtable 11
     * @symbol ?deleteData@DBStorage@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4Category@DBHelpers@@@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> deleteData(std::string const &, enum DBHelpers::Category) = 0;
    /**
     * @vtable 12
     * @symbol ?syncIO@DBStorage@@UEAAXXZ
     */
    virtual void syncIO() = 0;
    /**
     * @vtable 13
     * @symbol ?getStatistics@DBStorage@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void getStatistics(std::string &) const = 0;
    /**
     * @vtable 14
     * @symbol ?clonePlayerData@LevelStorage@@UEAA_NV?$basic_string_span@$$CBD$0?0@gsl@@0@Z
     */
    virtual bool clonePlayerData(class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>);
    /**
     * @vtable 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15() = 0;
    /**
     * @vtable 16
     * @symbol ?startShutdown@DBStorage@@UEAAXXZ
     */
    virtual void startShutdown() = 0;
    /**
     * @vtable 17
     * @symbol ?isShuttingDown@DBStorage@@UEBA_NXZ
     */
    virtual bool isShuttingDown() const = 0;
    /**
     * @vtable 18
     * @symbol ?checkShutdownDone@DBStorage@@UEAA_NXZ
     */
    virtual bool checkShutdownDone() = 0;
    /**
     * @vtable 19
     * @symbol ?loadData@LevelStorage@@UEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Category@DBHelpers@@@Z
     */
    virtual bool loadData(class gsl::basic_string_span<char const, -1>, std::string &, enum DBHelpers::Category) const;
    /**
     * @vtable 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20() = 0;
    /**
     * @vtable 21
     * @symbol ?createSnapshot@DBStorage@@UEAA?AV?$vector@USnapshotFilenameAndLength@@V?$allocator@USnapshotFilenameAndLength@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    virtual std::vector<struct SnapshotFilenameAndLength> createSnapshot(std::string const &) = 0;
    /**
     * @vtable 22
     * @symbol ?releaseSnapshot@DBStorage@@UEAAXXZ
     */
    virtual void releaseSnapshot() = 0;
    /**
     * @vtable 23
     * @symbol ?compactStorage@DBStorage@@UEAAXXZ
     */
    virtual void compactStorage() = 0;
    /**
     * @vtable 24
     * @symbol ?syncAndSuspendStorage@DBStorage@@UEAAXXZ
     */
    virtual void syncAndSuspendStorage() = 0;
    /**
     * @vtable 25
     * @symbol ?resumeStorage@DBStorage@@UEAAXXZ
     */
    virtual void resumeStorage() = 0;
    /**
     * @vtable 26
     * @symbol ?setFlushAllowed@DBStorage@@UEAAX_N@Z
     */
    virtual void setFlushAllowed(bool) = 0;
    /**
     * @vtable 27
     * @symbol ?flushToPermanentStorage@DBStorage@@UEAAXXZ
     */
    virtual void flushToPermanentStorage() = 0;
    /**
     * @vtable 28
     * @symbol ?freeCaches@LevelStorage@@UEAAXXZ
     */
    virtual void freeCaches();
    /**
     * @vtable 29
     * @symbol ?setCompactionCallback@DBStorage@@UEAAXV?$function@$$A6AXW4CompactionStatus@@@Z@std@@@Z
     */
    virtual void setCompactionCallback(class std::function<void (enum CompactionStatus)>) = 0;
    /**
     * @vtable 30
     * @symbol ?setCriticalSyncSaveCallback@DBStorage@@UEAAXV?$function@$$A6AXXZ@std@@@Z
     */
    virtual void setCriticalSyncSaveCallback(class std::function<void (void)>) = 0;
    /**
     * @vtable 31
     * @symbol ?corruptLevel@LevelStorage@@UEAAXXZ
     */
    virtual void corruptLevel();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELSTORAGE
#endif
    /**
     * @symbol ?getServerId@LevelStorage@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUPlayerStorageIds@@@Z
     */
    MCAPI std::string getServerId(struct PlayerStorageIds const &);
    /**
     * @symbol ?getServerId@LevelStorage@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@_N@Z
     */
    MCAPI std::string getServerId(class Player const &, bool);
    /**
     * @symbol ?loadAllPlayerIDs@LevelStorage@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@_N@Z
     */
    MCAPI std::vector<std::string> loadAllPlayerIDs(bool) const;
    /**
     * @symbol ?loadPlayerDataFromTag@LevelStorage@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> loadPlayerDataFromTag(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?loadServerPlayerData@LevelStorage@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBVPlayer@@_N@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> loadServerPlayerData(class Player const &, bool);
    /**
     * @symbol ?save@LevelStorage@@QEAAXAEAVActor@@@Z
     */
    MCAPI void save(class Actor &);
    /**
     * @symbol ?saveData@LevelStorage@@QEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVCompoundTag@@W4Category@DBHelpers@@@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(std::string const &, class CompoundTag const &, enum DBHelpers::Category);
MCAPI static std::string const LEGACY_CONSOLE_PLAYER_PREFIX;
MCAPI static std::string const LOCAL_PLAYER_TAG;

};