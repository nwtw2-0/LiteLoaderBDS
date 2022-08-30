/**
 * @file  NpcAction.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NpcAction.
 *
 */
class NpcAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCACTION
public:
    class NpcAction& operator=(class NpcAction const &) = delete;
    NpcAction(class NpcAction const &) = delete;
    NpcAction() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~NpcAction();
    /**
     * @vtable 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @vtable 2
     * @symbol ?fromJson@NpcAction@@UEAA_NAEBVValue@Json@@@Z
     */
    virtual bool fromJson(class Json::Value const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCACTION
#endif
    /**
     * @symbol ?getMode@NpcAction@@QEBA?AW4NpcActionMode@@XZ
     */
    MCAPI enum NpcActionMode getMode() const;
    /**
     * @symbol ?getText@NpcAction@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getText() const;
    /**
     * @symbol ?getType@NpcAction@@QEBA?AW4NpcActionType@@XZ
     */
    MCAPI enum NpcActionType getType() const;
    /**
     * @symbol ??9NpcAction@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator!=(class NpcAction const &) const;
    /**
     * @symbol ??8NpcAction@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class NpcAction const &) const;
    /**
     * @symbol ?setButtonName@NpcAction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setButtonName(std::string const &);
    /**
     * @symbol ?setMode@NpcAction@@QEAAXW4NpcActionMode@@@Z
     */
    MCAPI void setMode(enum NpcActionMode);
    /**
     * @symbol ?setText@NpcAction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setText(std::string const &);
    /**
     * @symbol ?read@NpcAction@@SA?AV?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@AEBVValue@Json@@@Z
     */
    MCAPI static std::unique_ptr<class NpcAction> read(class Json::Value const &);

//protected:
    /**
     * @symbol ?toJsonBase@NpcAction@@IEAA?AVValue@Json@@AEAV23@@Z
     */
    MCAPI class Json::Value toJsonBase(class Json::Value &);

//private:

protected:

private:
MCAPI static std::string const BUTTON_NAME_KEY;
MCAPI static std::string const DATA_KEY;
MCAPI static int const MAX_BUTTON_NAME_LENGTH;
MCAPI static std::string const MODE_KEY;
MCAPI static std::string const TEXT_KEY;
MCAPI static std::string const TYPE_KEY;

};