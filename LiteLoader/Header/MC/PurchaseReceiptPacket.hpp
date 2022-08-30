/**
 * @file  PurchaseReceiptPacket.hpp
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
 * @brief MC class PurchaseReceiptPacket.
 *
 */
class PurchaseReceiptPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PURCHASERECEIPTPACKET
public:
    class PurchaseReceiptPacket& operator=(class PurchaseReceiptPacket const &) = delete;
    PurchaseReceiptPacket(class PurchaseReceiptPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~PurchaseReceiptPacket();
    /**
     * @vtable 1
     * @symbol ?getId@PurchaseReceiptPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@PurchaseReceiptPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@PurchaseReceiptPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@PurchaseReceiptPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PURCHASERECEIPTPACKET
#endif
    /**
     * @symbol ??0PurchaseReceiptPacket@@QEAA@XZ
     */
    MCAPI PurchaseReceiptPacket();

};