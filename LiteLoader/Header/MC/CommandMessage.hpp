/**
 * @file  CommandMessage.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandMessage.
 *
 */
class CommandMessage {

#define AFTER_EXTRA
// Add Member There
    struct MessageComponent
    /*{
        char filler[200];
        void* unk[2];
        std::vector<void*> unk2[5];
    }*/;
    std::vector<MessageComponent> components;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDMESSAGE
public:
    class CommandMessage& operator=(class CommandMessage const &) = delete;
    CommandMessage(class CommandMessage const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDMESSAGE
#endif
    /**
     * @symbol ??0CommandMessage@@QEAA@XZ
     */
    MCAPI CommandMessage();
    /**
     * @symbol ?getMessage@CommandMessage@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCommandOrigin@@@Z
     */
    MCAPI std::string getMessage(class CommandOrigin const &) const;
    /**
     * @symbol ??1CommandMessage@@QEAA@XZ
     */
    MCAPI ~CommandMessage();

};