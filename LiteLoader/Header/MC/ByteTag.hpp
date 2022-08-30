/**
 * @file  ByteTag.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ByteTag.
 *
 */
class ByteTag : public Tag {

#define AFTER_EXTRA
// Add Member There
unsigned char val;

public:
    LIAPI unsigned char& value();
    LIAPI ByteTag& operator=(unsigned char val);
    LIAPI static std::unique_ptr<ByteTag> create(unsigned char val = 0);
    LIAPI bool set(unsigned char val);
    LIAPI unsigned char get();
    LIAPI operator unsigned char() const;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BYTETAG
public:
    class ByteTag& operator=(class ByteTag const &) = delete;
    ByteTag(class ByteTag const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ByteTag();
    /**
     * @vtable 2
     * @symbol ?write@ByteTag@@UEBAXAEAVIDataOutput@@@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @vtable 3
     * @symbol ?load@ByteTag@@UEAAXAEAVIDataInput@@@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @vtable 4
     * @symbol ?toString@ByteTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toString() const;
    /**
     * @vtable 5
     * @symbol ?getId@ByteTag@@UEBA?AW4Type@Tag@@XZ
     */
    virtual enum Tag::Type getId() const;
    /**
     * @vtable 6
     * @symbol ?equals@ByteTag@@UEBA_NAEBVTag@@@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @vtable 9
     * @symbol ?copy@ByteTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vtable 10
     * @symbol ?hash@ByteTag@@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BYTETAG
#endif
    /**
     * @symbol ??0ByteTag@@QEAA@XZ
     */
    MCAPI ByteTag();
    /**
     * @symbol ??0ByteTag@@QEAA@E@Z
     */
    MCAPI ByteTag(unsigned char);

};