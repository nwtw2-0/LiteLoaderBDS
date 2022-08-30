/**
 * @file  Dimension.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class DimensionHeightRange
{
public:
    short min;
    short max;
};
#undef BEFORE_EXTRA

/**
 * @brief MC class Dimension.
 *
 */
class Dimension {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSION
public:
    class Dimension& operator=(class Dimension const &) = delete;
    Dimension(class Dimension const &) = delete;
    Dimension() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIMENSION
    /**
     * @vtable -1
     * @symbol ?_createChunkBuildOrderPolicy@Dimension@@EEAA?AV?$unique_ptr@VChunkBuildOrderPolicyBase@@U?$default_delete@VChunkBuildOrderPolicyBase@@@std@@@std@@XZ
     */
    MCVAPI std::unique_ptr<class ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();
    /**
     * @vtable -1
     * @symbol ?deserialize@Dimension@@UEAAXAEBVCompoundTag@@@Z
     */
    MCVAPI void deserialize(class CompoundTag const &);
    /**
     * @vtable -1
     * @symbol ?forceCheckAllNeighChunkSavedStat@Dimension@@UEBA_NXZ
     */
    MCVAPI bool forceCheckAllNeighChunkSavedStat() const;
    /**
     * @vtable -1
     * @symbol ?getBrightnessDependentFogColor@Dimension@@UEBA?AVColor@mce@@AEBV23@M@Z
     */
    MCVAPI class mce::Color getBrightnessDependentFogColor(class mce::Color const &, float) const;
    /**
     * @vtable -1
     * @symbol ?getBrightnessRamp@Dimension@@UEBAAEBVDimensionBrightnessRamp@@XZ
     */
    MCVAPI class DimensionBrightnessRamp const & getBrightnessRamp() const;
    /**
     * @vtable -1
     * @symbol ?getClearColorScale@Dimension@@UEAAMXZ
     */
    MCVAPI float getClearColorScale();
    /**
     * @vtable -1
     * @symbol ?getCloudHeight@Dimension@@UEBAFXZ
     */
    MCVAPI short getCloudHeight() const;
    /**
     * @vtable -1
     * @symbol ?getDefaultBiome@Dimension@@UEBAHXZ
     */
    MCVAPI int getDefaultBiome() const;
    /**
     * @vtable -1
     * @symbol ?getLightTextureImageBuilder@Dimension@@UEBAPEAVBaseLightTextureImageBuilder@@XZ
     */
    MCVAPI class BaseLightTextureImageBuilder * getLightTextureImageBuilder() const;
    /**
     * @vtable -1
     * @symbol ?getSpawnPos@Dimension@@UEBA?AVBlockPos@@XZ
     */
    MCVAPI class BlockPos getSpawnPos() const;
    /**
     * @vtable -1
     * @symbol ?getSpawnYPosition@Dimension@@UEBAHXZ
     */
    MCVAPI int getSpawnYPosition() const;
    /**
     * @vtable -1
     * @symbol ?getSunIntensity@Dimension@@UEBAMMAEBVVec3@@M@Z
     */
    MCVAPI float getSunIntensity(float, class Vec3 const &, float) const;
    /**
     * @vtable -1
     * @symbol ?getTimeOfDay@Dimension@@MEBAMHM@Z
     */
    MCVAPI float getTimeOfDay(int, float) const;
    /**
     * @vtable -1
     * @symbol ?hasBedrockFog@Dimension@@UEAA_NXZ
     */
    MCVAPI bool hasBedrockFog();
    /**
     * @vtable -1
     * @symbol ?hasGround@Dimension@@UEBA_NXZ
     */
    MCVAPI bool hasGround() const;
    /**
     * @vtable -1
     * @symbol ?init@Dimension@@UEAAXXZ
     */
    MCVAPI void init();
    /**
     * @vtable -1
     * @symbol ?is2DPositionRelevantForPlayer@Dimension@@UEBA_NAEBVBlockPos@@AEAVPlayer@@@Z
     */
    MCVAPI bool is2DPositionRelevantForPlayer(class BlockPos const &, class Player &) const;
    /**
     * @vtable -1
     * @symbol ?isActorRelevantForPlayer@Dimension@@UEBA_NAEAVPlayer@@AEBVActor@@@Z
     */
    MCVAPI bool isActorRelevantForPlayer(class Player &, class Actor const &) const;
    /**
     * @vtable -1
     * @symbol ?isDay@Dimension@@UEBA_NXZ
     */
    MCVAPI bool isDay() const;
    /**
     * @vtable -1
     * @symbol ?isFoggyAt@Dimension@@UEBA_NHH@Z
     */
    MCVAPI bool isFoggyAt(int, int) const;
    /**
     * @vtable -1
     * @symbol ?isNaturalDimension@Dimension@@UEBA_NXZ
     */
    MCVAPI bool isNaturalDimension() const;
    /**
     * @vtable -1
     * @symbol ?isValidSpawn@Dimension@@UEBA_NHH@Z
     */
    MCVAPI bool isValidSpawn(int, int) const;
    /**
     * @vtable -1
     * @symbol ?mayRespawnViaBed@Dimension@@UEBA_NXZ
     */
    MCVAPI bool mayRespawnViaBed() const;
    /**
     * @vtable -1
     * @symbol ?onBlockChanged@Dimension@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
     */
    MCVAPI void onBlockChanged(class BlockSource &, class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *, enum BlockChangedEventTarget, class Actor *);
    /**
     * @vtable -1
     * @symbol ?onBlockEvent@Dimension@@UEAAXAEAVBlockSource@@HHHHH@Z
     */
    MCVAPI void onBlockEvent(class BlockSource &, int, int, int, int, int);
    /**
     * @vtable -1
     * @symbol ?onChunkLoaded@Dimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @vtable -1
     * @symbol ?onLevelDestruction@Dimension@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void onLevelDestruction(std::string const &);
    /**
     * @vtable -1
     * @symbol ?sendBroadcast@Dimension@@UEAAXAEBVPacket@@PEAVPlayer@@@Z
     */
    MCVAPI void sendBroadcast(class Packet const &, class Player *);
    /**
     * @vtable -1
     * @symbol ?serialize@Dimension@@UEBAXAEAVCompoundTag@@@Z
     */
    MCVAPI void serialize(class CompoundTag &) const;
    /**
     * @vtable -1
     * @symbol ?showSky@Dimension@@UEBA_NXZ
     */
    MCVAPI bool showSky() const;
    /**
     * @vtable -1
     * @symbol ?startLeaveGame@Dimension@@UEAAXXZ
     */
    MCVAPI void startLeaveGame();
    /**
     * @vtable -1
     * @symbol ?tick@Dimension@@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @vtable -1
     * @symbol ?tickRedstone@Dimension@@UEAAXXZ
     */
    MCVAPI void tickRedstone();
    /**
     * @vtable -1
     * @symbol ??1Dimension@@UEAA@XZ
     */
    MCVAPI ~Dimension();
#endif
    /**
     * @symbol ??0Dimension@@QEAA@AEAVILevel@@V?$AutomaticID@VDimension@@H@@VDimensionHeightRange@@AEAVScheduler@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI Dimension(class ILevel &, class AutomaticID<class Dimension, int>, class DimensionHeightRange, class Scheduler &, std::string);
    /**
     * @symbol ?addActorUnloadedChunkTransferToQueue@Dimension@@QEAAXAEBVChunkPos@@0V?$AutomaticID@VDimension@@H@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@5@@Z
     */
    MCAPI void addActorUnloadedChunkTransferToQueue(class ChunkPos const &, class ChunkPos const &, class AutomaticID<class Dimension, int>, std::string &, std::unique_ptr<class CompoundTag>);
    /**
     * @symbol ?addWither@Dimension@@QEAAXAEBUActorUniqueID@@@Z
     */
    MCAPI void addWither(struct ActorUniqueID const &);
    /**
     * @symbol ?distanceToNearestPlayerSqr2D@Dimension@@QEAAMVVec3@@@Z
     */
    MCAPI float distanceToNearestPlayerSqr2D(class Vec3);
    /**
     * @symbol ?fetchAnyInteractablePlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M@Z
     */
    MCAPI class Player * fetchAnyInteractablePlayer(class Vec3 const &, float) const;
    /**
     * @symbol ?fetchAnyPlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M@Z
     */
    MCAPI class Player * fetchAnyPlayer(class Vec3 const &, float) const;
    /**
     * @symbol ?fetchEntity@Dimension@@QEAAPEAVActor@@UActorUniqueID@@_N@Z
     */
    MCAPI class Actor * fetchEntity(struct ActorUniqueID, bool);
    /**
     * @symbol ?fetchNearestAttackablePlayer@Dimension@@QEAAPEAVPlayer@@AEAVActor@@M@Z
     */
    MCAPI class Player * fetchNearestAttackablePlayer(class Actor &, float);
    /**
     * @symbol ?fetchNearestAttackablePlayer@Dimension@@QEAAPEAVPlayer@@VBlockPos@@MPEAVActor@@@Z
     */
    MCAPI class Player * fetchNearestAttackablePlayer(class BlockPos, float, class Actor *);
    /**
     * @symbol ?fetchNearestInteractablePlayer@Dimension@@QEBAPEAVPlayer@@AEAVActor@@M@Z
     */
    MCAPI class Player * fetchNearestInteractablePlayer(class Actor &, float) const;
    /**
     * @symbol ?fetchNearestInteractablePlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M@Z
     */
    MCAPI class Player * fetchNearestInteractablePlayer(class Vec3 const &, float) const;
    /**
     * @symbol ?findPlayer@Dimension@@QEBAPEAVPlayer@@V?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
     */
    MCAPI class Player * findPlayer(class std::function<bool (class Player const &)>) const;
    /**
     * @symbol ?flagEntityforChunkMove@Dimension@@QEAAXAEAVActor@@@Z
     */
    MCAPI void flagEntityforChunkMove(class Actor &);
    /**
     * @symbol ?flushLevelChunkGarbageCollector@Dimension@@QEAAXXZ
     */
    MCAPI void flushLevelChunkGarbageCollector();
    /**
     * @symbol ?flushRunTimeLighting@Dimension@@QEAAXXZ
     */
    MCAPI void flushRunTimeLighting();
    /**
     * @symbol ?forEachPlayer@Dimension@@QEBAXV?$function@$$A6A_NAEAVPlayer@@@Z@std@@@Z
     */
    MCAPI void forEachPlayer(class std::function<bool (class Player &)>) const;
    /**
     * @symbol ?forceSaveVillageManager@Dimension@@QEAAXXZ
     */
    MCAPI void forceSaveVillageManager();
    /**
     * @symbol ?getBlockEventDispatcher@Dimension@@QEAAAEAVBlockEventDispatcher@@XZ
     */
    MCAPI class BlockEventDispatcher & getBlockEventDispatcher();
    /**
     * @symbol ?getBlockSourceFromMainChunkSource@Dimension@@QEBAAEAVBlockSource@@XZ
     */
    MCAPI class BlockSource & getBlockSourceFromMainChunkSource() const;
    /**
     * @symbol ?getChunkBuildOrderPolicy@Dimension@@QEAAAEAVChunkBuildOrderPolicyBase@@XZ
     */
    MCAPI class ChunkBuildOrderPolicyBase & getChunkBuildOrderPolicy();
    /**
     * @symbol ?getChunkLoadActionList@Dimension@@QEAA?AV?$not_null@PEAVChunkLoadActionList@@@gsl@@XZ
     */
    MCAPI class gsl::not_null<class ChunkLoadActionList *> getChunkLoadActionList();
    /**
     * @symbol ?getChunkSource@Dimension@@QEBAAEAVChunkSource@@XZ
     */
    MCAPI class ChunkSource & getChunkSource() const;
    /**
     * @symbol ?getCircuitSystem@Dimension@@QEAAAEAVCircuitSystem@@XZ
     */
    MCAPI class CircuitSystem & getCircuitSystem();
    /**
     * @symbol ?getDelayActionList@Dimension@@QEAA?AV?$not_null@PEAVDelayActionList@@@gsl@@XZ
     */
    MCAPI class gsl::not_null<class DelayActionList *> getDelayActionList();
    /**
     * @symbol ?getDimensionId@Dimension@@QEBA?AV?$AutomaticID@VDimension@@H@@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @symbol ?getDisplayEntities@Dimension@@QEAAAEAV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@XZ
     */
    MCAPI std::vector<class WeakEntityRef> & getDisplayEntities();
    /**
     * @symbol ?getEntityIdMap@Dimension@@QEAAAEAV?$unordered_map@UActorUniqueID@@VWeakEntityRef@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@4@V?$allocator@U?$pair@$$CBUActorUniqueID@@VWeakEntityRef@@@std@@@4@@std@@XZ
     */
    MCAPI class std::unordered_map<struct ActorUniqueID, class WeakEntityRef, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct std::pair<struct ActorUniqueID const, class WeakEntityRef>>> & getEntityIdMap();
    /**
     * @symbol ?getEntityIdMapConst@Dimension@@QEBAAEBV?$unordered_map@UActorUniqueID@@VWeakEntityRef@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@4@V?$allocator@U?$pair@$$CBUActorUniqueID@@VWeakEntityRef@@@std@@@4@@std@@XZ
     */
    MCAPI class std::unordered_map<struct ActorUniqueID, class WeakEntityRef, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct std::pair<struct ActorUniqueID const, class WeakEntityRef>>> const & getEntityIdMapConst() const;
    /**
     * @symbol ?getFeatureTerrainAdjustments@Dimension@@QEAAAEAVFeatureTerrainAdjustments@@XZ
     */
    MCAPI class FeatureTerrainAdjustments & getFeatureTerrainAdjustments();
    /**
     * @symbol ?getGameEventDispatcher@Dimension@@QEBAPEAVGameEventDispatcher@@XZ
     */
    MCAPI class GameEventDispatcher * getGameEventDispatcher() const;
    /**
     * @symbol ?getHeight@Dimension@@QEBAFXZ
     */
    MCAPI short getHeight() const;
    /**
     * @symbol ?getHeightInSubchunks@Dimension@@QEBAGXZ
     */
    MCAPI unsigned short getHeightInSubchunks() const;
    /**
     * @symbol ?getHeightRange@Dimension@@QEBAAEBVDimensionHeightRange@@XZ
     */
    MCAPI class DimensionHeightRange const & getHeightRange() const;
    /**
     * @symbol ?getLevel@Dimension@@QEBAAEAVLevel@@XZ
     */
    MCAPI class Level & getLevel() const;
    /**
     * @symbol ?getLevelConst@Dimension@@QEBAAEBVLevel@@XZ
     */
    MCAPI class Level const & getLevelConst() const;
    /**
     * @symbol ?getMinHeight@Dimension@@QEBAFXZ
     */
    MCAPI short getMinHeight() const;
    /**
     * @symbol ?getMoonBrightness@Dimension@@QEBAMXZ
     */
    MCAPI float getMoonBrightness() const;
    /**
     * @symbol ?getMoonPhase@Dimension@@QEBAHXZ
     */
    MCAPI int getMoonPhase() const;
    /**
     * @symbol ?getPopCap@Dimension@@QEBAMH_N@Z
     */
    MCAPI float getPopCap(int, bool) const;
    /**
     * @symbol ?getSeasons@Dimension@@QEAAAEAVSeasons@@XZ
     */
    MCAPI class Seasons & getSeasons();
    /**
     * @symbol ?getSkyDarken@Dimension@@QEBA?AUBrightness@@XZ
     */
    MCAPI struct Brightness getSkyDarken() const;
    /**
     * @symbol ?getSunAngle@Dimension@@QEBAMM@Z
     */
    MCAPI float getSunAngle(float) const;
    /**
     * @symbol ?getTickingAreas@Dimension@@QEAAAEAVTickingAreaList@@XZ
     */
    MCAPI class TickingAreaList & getTickingAreas();
    /**
     * @symbol ?getTickingAreasConst@Dimension@@QEBAAEBVTickingAreaList@@XZ
     */
    MCAPI class TickingAreaList const & getTickingAreasConst() const;
    /**
     * @symbol ?getTimeOfDay@Dimension@@QEBAMM@Z
     */
    MCAPI float getTimeOfDay(float) const;
    /**
     * @symbol ?getVillageManager@Dimension@@QEBAAEBV?$unique_ptr@VVillageManager@@U?$default_delete@VVillageManager@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class VillageManager> const & getVillageManager() const;
    /**
     * @symbol ?getWeather@Dimension@@QEBAAEAVWeather@@XZ
     */
    MCAPI class Weather & getWeather() const;
    /**
     * @symbol ?getWorldGenerator@Dimension@@QEBAPEAVWorldGenerator@@XZ
     */
    MCAPI class WorldGenerator * getWorldGenerator() const;
    /**
     * @symbol ?hasCeiling@Dimension@@QEBA_NXZ
     */
    MCAPI bool hasCeiling() const;
    /**
     * @symbol ?hasSkylight@Dimension@@QEBA_NXZ
     */
    MCAPI bool hasSkylight() const;
    /**
     * @symbol ?isChunkKnown@Dimension@@QEBA_NAEBVChunkPos@@@Z
     */
    MCAPI bool isChunkKnown(class ChunkPos const &) const;
    /**
     * @symbol ?isLeaveGameDone@Dimension@@QEAA_NXZ
     */
    MCAPI bool isLeaveGameDone();
    /**
     * @symbol ?isRedstoneTick@Dimension@@QEAA_NXZ
     */
    MCAPI bool isRedstoneTick();
    /**
     * @symbol ?isSubChunkHeightWithinRange@Dimension@@QEBA_NAEBF@Z
     */
    MCAPI bool isSubChunkHeightWithinRange(short const &) const;
    /**
     * @symbol ?isUltraWarm@Dimension@@QEBA_NXZ
     */
    MCAPI bool isUltraWarm() const;
    /**
     * @symbol ?onStaticTickingAreaAdded@Dimension@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void onStaticTickingAreaAdded(std::string const &);
    /**
     * @symbol ?registerDisplayEntity@Dimension@@QEAAXV?$WeakRefT@UEntityRefTraits@@@@@Z
     */
    MCAPI void registerDisplayEntity(class WeakRefT<struct EntityRefTraits>);
    /**
     * @symbol ?registerEntity@Dimension@@QEAAXAEBUActorUniqueID@@V?$WeakRefT@UEntityRefTraits@@@@@Z
     */
    MCAPI void registerEntity(struct ActorUniqueID const &, class WeakRefT<struct EntityRefTraits>);
    /**
     * @symbol ?removeActorByID@Dimension@@QEAAXAEBUActorUniqueID@@@Z
     */
    MCAPI void removeActorByID(struct ActorUniqueID const &);
    /**
     * @symbol ?removeWither@Dimension@@QEAAXAEBUActorUniqueID@@@Z
     */
    MCAPI void removeWither(struct ActorUniqueID const &);
    /**
     * @symbol ?sendPacketForEntity@Dimension@@QEAAXAEBVActor@@AEBVPacket@@PEBVPlayer@@@Z
     */
    MCAPI void sendPacketForEntity(class Actor const &, class Packet const &, class Player const *);
    /**
     * @symbol ?sendPacketForPosition@Dimension@@QEAAXAEBVBlockPos@@AEBVPacket@@PEBVPlayer@@@Z
     */
    MCAPI void sendPacketForPosition(class BlockPos const &, class Packet const &, class Player const *);
    /**
     * @symbol ?sendPacketToClients@Dimension@@QEAAXAEBVPacket@@V?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@@Z
     */
    MCAPI void sendPacketToClients(class Packet const &, std::vector<struct NetworkIdentifierWithSubId>);
    /**
     * @symbol ?setCeiling@Dimension@@QEAAX_N@Z
     */
    MCAPI void setCeiling(bool);
    /**
     * @symbol ?setSkylight@Dimension@@QEAAX_N@Z
     */
    MCAPI void setSkylight(bool);
    /**
     * @symbol ?setUltraWarm@Dimension@@QEAAX_N@Z
     */
    MCAPI void setUltraWarm(bool);
    /**
     * @symbol ?transferEntity@Dimension@@QEAAXAEBVChunkPos@@AEBVVec3@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@_N@Z
     */
    MCAPI void transferEntity(class ChunkPos const &, class Vec3 const &, std::unique_ptr<class CompoundTag>, bool);
    /**
     * @symbol ?transferEntityToUnloadedChunk@Dimension@@QEAAXAEAVActor@@PEAVLevelChunk@@@Z
     */
    MCAPI void transferEntityToUnloadedChunk(class Actor &, class LevelChunk *);
    /**
     * @symbol ?transferEntityToUnloadedChunk@Dimension@@QEAAXAEBVChunkPos@@0V?$AutomaticID@VDimension@@H@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@5@@Z
     */
    MCAPI void transferEntityToUnloadedChunk(class ChunkPos const &, class ChunkPos const &, class AutomaticID<class Dimension, int>, std::string &, std::unique_ptr<class CompoundTag>);
    /**
     * @symbol ?tryGarbageCollectStructures@Dimension@@QEAAXXZ
     */
    MCAPI void tryGarbageCollectStructures();
    /**
     * @symbol ?tryGetClosestPublicRegion@Dimension@@QEBAPEAVBlockSource@@AEBVChunkPos@@@Z
     */
    MCAPI class BlockSource * tryGetClosestPublicRegion(class ChunkPos const &) const;
    /**
     * @symbol ?tryLoadLimboEntities@Dimension@@QEAAXAEBVChunkPos@@@Z
     */
    MCAPI void tryLoadLimboEntities(class ChunkPos const &);
    /**
     * @symbol ?unregisterDisplayEntity@Dimension@@QEAAXV?$WeakRefT@UEntityRefTraits@@@@@Z
     */
    MCAPI void unregisterDisplayEntity(class WeakRefT<struct EntityRefTraits>);
    /**
     * @symbol ?unregisterEntity@Dimension@@QEAAXAEBUActorUniqueID@@@Z
     */
    MCAPI void unregisterEntity(struct ActorUniqueID const &);
    /**
     * @symbol ?updateBlockLight@Dimension@@QEAAXAEBVBlockPos@@UBrightness@@111_N@Z
     */
    MCAPI void updateBlockLight(class BlockPos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness, bool);
    /**
     * @symbol ?updateDimensionBlockSourceTick@Dimension@@QEAAXXZ
     */
    MCAPI void updateDimensionBlockSourceTick();
MCAPI static enum LimboEntitiesVersion const CurrentLimboEntitiesVersion;
MCAPI static unsigned int const LOW_CPU_PACKET_BLOCK_LIMIT;
MCAPI static float const MOON_BRIGHTNESS_PER_PHASE[];
MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1>> const STRUCTURE_PRUNE_INTERVAL;

//protected:
    /**
     * @symbol ?_completeEntityTransfer@Dimension@@IEAAXAEAVBlockSource@@V?$OwnerPtrT@UEntityRefTraits@@@@_N@Z
     */
    MCAPI void _completeEntityTransfer(class BlockSource &, class OwnerPtrT<struct EntityRefTraits>, bool);

//private:
    /**
     * @symbol ?_fetchNearestPlayer@Dimension@@AEBAPEAVPlayer@@AEBVVec3@@M_NV?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
     */
    MCAPI class Player * _fetchNearestPlayer(class Vec3 const &, float, bool, class std::function<bool (class Player const &)>) const;
    /**
     * @symbol ?_processEntityChunkTransfers@Dimension@@AEAAXXZ
     */
    MCAPI void _processEntityChunkTransfers();
    /**
     * @symbol ?_sendBlockEntityUpdatePacket@Dimension@@AEAAXAEBVNetworkBlockPosition@@@Z
     */
    MCAPI void _sendBlockEntityUpdatePacket(class NetworkBlockPosition const &);
    /**
     * @symbol ?_sendBlocksChangedPackets@Dimension@@AEAAXXZ
     */
    MCAPI void _sendBlocksChangedPackets();
    /**
     * @symbol ?_tickEntityChunkMoves@Dimension@@AEAAXXZ
     */
    MCAPI void _tickEntityChunkMoves();

protected:

private:

};