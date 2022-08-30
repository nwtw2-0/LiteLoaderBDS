/**
 * @file  SystemFilePicker.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SystemFilePicker.
 *
 */
class SystemFilePicker {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYSTEMFILEPICKER
public:
    class SystemFilePicker& operator=(class SystemFilePicker const &) = delete;
    SystemFilePicker(class SystemFilePicker const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~SystemFilePicker();
    /**
     * @vtable 1
     * @symbol ?initFilePick@SystemFilePicker@@UEAAXAEBVPath@Core@@V?$function@$$A6AX_NUFileInfo@@@Z@std@@@Z
     */
    virtual void initFilePick(class Core::Path const &, class std::function<void (bool, struct FileInfo)>);
    /**
     * @vtable 2
     * @symbol ?readBytes@SystemFilePicker@@UEAA_KAEBUFileInfo@@_K1AEAV?$vector@EV?$allocator@E@std@@@std@@@Z
     */
    virtual unsigned __int64 readBytes(struct FileInfo const &, unsigned __int64, unsigned __int64, std::vector<unsigned char> &);
    /**
     * @vtable 3
     * @symbol ?writeBytes@SystemFilePicker@@UEAA_NAEBUFileInfo@@_K1AEBV?$vector@EV?$allocator@E@std@@@std@@@Z
     */
    virtual bool writeBytes(struct FileInfo const &, unsigned __int64, unsigned __int64, std::vector<unsigned char> const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SYSTEMFILEPICKER
#endif
    /**
     * @symbol ??0SystemFilePicker@@QEAA@XZ
     */
    MCAPI SystemFilePicker();

//protected:
    /**
     * @symbol ?_fillFileInfo@SystemFilePicker@@IEAA?AUFileInfo@@AEBVPath@Core@@@Z
     */
    MCAPI struct FileInfo _fillFileInfo(class Core::Path const &);

protected:

};