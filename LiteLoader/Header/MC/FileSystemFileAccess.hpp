/**
 * @file  FileSystemFileAccess.hpp
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
 * @brief MC class FileSystemFileAccess.
 *
 */
class FileSystemFileAccess {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILESYSTEMFILEACCESS
public:
    class FileSystemFileAccess& operator=(class FileSystemFileAccess const &) = delete;
    FileSystemFileAccess(class FileSystemFileAccess const &) = delete;
    FileSystemFileAccess() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~FileSystemFileAccess();
    /**
     * @vtable 1
     * @symbol ?fopen@FileSystemFileAccess@@UEAAPEAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void * fopen(class Core::Path const &, std::string const &);
    /**
     * @vtable 2
     * @symbol ?fclose@FileSystemFileAccess@@UEAAHPEAX@Z
     */
    virtual int fclose(void *);
    /**
     * @vtable 3
     * @symbol ?fseek@FileSystemFileAccess@@UEAAHPEAX_JH@Z
     */
    virtual int fseek(void *, __int64, int);
    /**
     * @vtable 4
     * @symbol ?ftell@FileSystemFileAccess@@UEAA_JPEAX@Z
     */
    virtual __int64 ftell(void *);
    /**
     * @vtable 5
     * @symbol ?getReadInterface@FileSystemFileAccess@@UEBAPEBVIFileReadAccess@@XZ
     */
    virtual class IFileReadAccess const * getReadInterface() const;
    /**
     * @vtable 6
     * @symbol ?getWriteInterface@FileSystemFileAccess@@UEAAPEAVIFileWriteAccess@@XZ
     */
    virtual class IFileWriteAccess * getWriteInterface();
    /**
     * @vtable 7
     * @symbol ?unload@FileSystemFileAccess@@UEAAXXZ
     */
    virtual void unload();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILESYSTEMFILEACCESS
#endif
    /**
     * @symbol ??0FileSystemFileAccess@@QEAA@W4FileSystemMode@@@Z
     */
    MCAPI FileSystemFileAccess(enum FileSystemMode);

};