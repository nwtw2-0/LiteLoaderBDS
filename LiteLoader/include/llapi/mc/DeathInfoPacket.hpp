/**
 * @file  DeathInfoPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DeathInfoPacket.
 *
 */
class DeathInfoPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEATHINFOPACKET
public:
    class DeathInfoPacket& operator=(class DeathInfoPacket const &) = delete;
    DeathInfoPacket(class DeathInfoPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   382815160
     */
    virtual ~DeathInfoPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@DeathInfoPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -197413564
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@DeathInfoPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1929646095
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@DeathInfoPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1336353226
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@DeathInfoPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   220016774
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0DeathInfoPacket@@QEAA@XZ
     * @hash   -1656884794
     */
    MCAPI DeathInfoPacket();
    /**
     * @symbol ??0DeathInfoPacket@@QEAA@AEBU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@std@@@Z
     * @hash   -1588033266
     */
    MCAPI DeathInfoPacket(struct std::pair<std::string, std::vector<std::string>> const &);

};