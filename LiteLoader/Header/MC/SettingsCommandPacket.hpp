/**
 * @file  SettingsCommandPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SettingsCommandPacket.
 *
 */
class SettingsCommandPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETTINGSCOMMANDPACKET
public:
    class SettingsCommandPacket& operator=(class SettingsCommandPacket const &) = delete;
    SettingsCommandPacket(class SettingsCommandPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~SettingsCommandPacket();
    /**
     * @vtable 1
     * @symbol ?getId@SettingsCommandPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@SettingsCommandPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@SettingsCommandPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@SettingsCommandPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETTINGSCOMMANDPACKET
#endif
    /**
     * @symbol ??0SettingsCommandPacket@@QEAA@XZ
     */
    MCAPI SettingsCommandPacket();
    /**
     * @symbol ?getCommandString@SettingsCommandPacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getCommandString() const;
    /**
     * @symbol ?getSupressOutput@SettingsCommandPacket@@QEBA_NXZ
     */
    MCAPI bool getSupressOutput() const;

};