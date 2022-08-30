/**
 * @file  UpdateSoftEnumPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum SoftEnumUpdateType : char
{
    Add = 0,
    Remove = 1,
    Set = 2,
};

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateSoftEnumPacket.
 *
 */
class UpdateSoftEnumPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATESOFTENUMPACKET
public:
    class UpdateSoftEnumPacket& operator=(class UpdateSoftEnumPacket const &) = delete;
    UpdateSoftEnumPacket(class UpdateSoftEnumPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~UpdateSoftEnumPacket();
    /**
     * @vtable 1
     * @symbol ?getId@UpdateSoftEnumPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@UpdateSoftEnumPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@UpdateSoftEnumPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@UpdateSoftEnumPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATESOFTENUMPACKET
#endif
    /**
     * @symbol ??0UpdateSoftEnumPacket@@QEAA@XZ
     */
    MCAPI UpdateSoftEnumPacket();
    /**
     * @symbol ??0UpdateSoftEnumPacket@@QEAA@W4SoftEnumUpdateType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI UpdateSoftEnumPacket(enum SoftEnumUpdateType, std::string const &, std::vector<std::string> const &);

};