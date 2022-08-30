/**
 * @file  ShortTag.hpp
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
 * @brief MC class ShortTag.
 *
 */
class ShortTag : public Tag {

#define AFTER_EXTRA
// Add Member There
short val;

public:
    LIAPI short& value();
    LIAPI ShortTag& operator=(short val);
    LIAPI static std::unique_ptr<ShortTag> create(short val = 0);
    LIAPI bool set(short val);
    LIAPI short get();
    LIAPI operator short() const;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHORTTAG
public:
    class ShortTag& operator=(class ShortTag const &) = delete;
    ShortTag(class ShortTag const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ShortTag();
    /**
     * @vtable 2
     * @symbol ?write@ShortTag@@UEBAXAEAVIDataOutput@@@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @vtable 3
     * @symbol ?load@ShortTag@@UEAAXAEAVIDataInput@@@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @vtable 4
     * @symbol ?toString@ShortTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toString() const;
    /**
     * @vtable 5
     * @symbol ?getId@ShortTag@@UEBA?AW4Type@Tag@@XZ
     */
    virtual enum Tag::Type getId() const;
    /**
     * @vtable 6
     * @symbol ?equals@ShortTag@@UEBA_NAEBVTag@@@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @vtable 9
     * @symbol ?copy@ShortTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vtable 10
     * @symbol ?hash@ShortTag@@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHORTTAG
#endif
    /**
     * @symbol ??0ShortTag@@QEAA@XZ
     */
    MCAPI ShortTag();
    /**
     * @symbol ??0ShortTag@@QEAA@F@Z
     */
    MCAPI ShortTag(short);

};