/**
 * @file  MobArmorEquipmentPacket.hpp
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
 * @brief MC class MobArmorEquipmentPacket.
 *
 */
class MobArmorEquipmentPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBARMOREQUIPMENTPACKET
public:
    class MobArmorEquipmentPacket& operator=(class MobArmorEquipmentPacket const &) = delete;
    MobArmorEquipmentPacket(class MobArmorEquipmentPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~MobArmorEquipmentPacket();
    /**
     * @vtable 1
     * @symbol ?getId@MobArmorEquipmentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@MobArmorEquipmentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@MobArmorEquipmentPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@MobArmorEquipmentPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBARMOREQUIPMENTPACKET
#endif
    /**
     * @symbol ??0MobArmorEquipmentPacket@@QEAA@XZ
     */
    MCAPI MobArmorEquipmentPacket();
    /**
     * @symbol ??0MobArmorEquipmentPacket@@QEAA@AEBVActor@@@Z
     */
    MCAPI MobArmorEquipmentPacket(class Actor const &);

};