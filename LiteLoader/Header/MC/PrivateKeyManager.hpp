/**
 * @file  PrivateKeyManager.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Crypto.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PrivateKeyManager.
 *
 */
class PrivateKeyManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRIVATEKEYMANAGER
public:
    class PrivateKeyManager& operator=(class PrivateKeyManager const &) = delete;
    PrivateKeyManager(class PrivateKeyManager const &) = delete;
    PrivateKeyManager() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~PrivateKeyManager();
    /**
     * @vtable 1
     * @symbol ?isValid@PrivateKeyManager@@UEBA_NXZ
     */
    virtual bool isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PRIVATEKEYMANAGER
#endif
    /**
     * @symbol ??0PrivateKeyManager@@QEAA@W4System@Asymmetric@Crypto@@@Z
     */
    MCAPI PrivateKeyManager(enum Crypto::Asymmetric::System);
    /**
     * @symbol ?computeSecret@PrivateKeyManager@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVKeyManager@@@Z
     */
    MCAPI std::string computeSecret(class KeyManager const &) const;
    /**
     * @symbol ?sign@PrivateKeyManager@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@W4HashType@Hash@Crypto@@@Z
     */
    MCAPI std::string sign(std::string const &, enum Crypto::Hash::HashType) const;

};