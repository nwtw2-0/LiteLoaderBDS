/**
 * @file  EncryptedProxyEnv.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TransactionalWorldBlockTarget.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EncryptedProxyEnv.
 *
 */
class EncryptedProxyEnv : public TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCRYPTEDPROXYENV
public:
    class EncryptedProxyEnv& operator=(class EncryptedProxyEnv const &) = delete;
    EncryptedProxyEnv(class EncryptedProxyEnv const &) = delete;
    EncryptedProxyEnv() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~EncryptedProxyEnv();
    /**
     * @vtable 1
     * @symbol ?NewSequentialFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
     */
    virtual class leveldb::Status NewSequentialFile(std::string const &, class leveldb::SequentialFile **);
    /**
     * @vtable 2
     * @symbol ?NewRandomAccessFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
     */
    virtual class leveldb::Status NewRandomAccessFile(std::string const &, class leveldb::RandomAccessFile **);
    /**
     * @vtable 3
     * @symbol ?NewWritableFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
     */
    virtual class leveldb::Status NewWritableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @vtable 7
     * @symbol ?DeleteFileA@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual class leveldb::Status DeleteFileA(std::string const &);
    /**
     * @vtable 11
     * @symbol ?RenameFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    virtual class leveldb::Status RenameFile(std::string const &, std::string const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCRYPTEDPROXYENV
#endif
    /**
     * @symbol ??0EncryptedProxyEnv@@QEAA@PEAVEnv@leveldb@@AEBVContentIdentity@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4EncryptedProxyReadMode@@@Z
     */
    MCAPI EncryptedProxyEnv(class leveldb::Env *, class ContentIdentity const &, std::string const &, enum EncryptedProxyReadMode);

};