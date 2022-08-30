/**
 * @file  TextObjectScore.hpp
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
 * @brief MC class TextObjectScore.
 *
 */
class TextObjectScore {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTSCORE
public:
    class TextObjectScore& operator=(class TextObjectScore const &) = delete;
    TextObjectScore(class TextObjectScore const &) = delete;
    TextObjectScore() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~TextObjectScore();
    /**
     * @vtable 1
     * @symbol ?asString@TextObjectScore@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string asString() const;
    /**
     * @vtable 2
     * @symbol ?asJsonValue@TextObjectScore@@UEBA?AVValue@Json@@XZ
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @vtable 3
     * @symbol ?resolve@TextObjectScore@@UEBA?AVValue@Json@@AEBUResolveData@@@Z
     */
    virtual class Json::Value resolve(struct ResolveData const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEXTOBJECTSCORE
#endif
    /**
     * @symbol ??0TextObjectScore@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI TextObjectScore(std::string, std::string);
MCAPI static std::string const RAW_TEXT_SCORE_KEY;
MCAPI static std::string const RAW_TEXT_SCORE_NAME_KEY;
MCAPI static std::string const RAW_TEXT_SCORE_OBJECTIVE_KEY;
MCAPI static std::string const RAW_TEXT_SCORE_STAR;

};