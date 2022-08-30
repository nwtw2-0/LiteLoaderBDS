/**
 * @file  RecordItemComponent.hpp
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
 * @brief MC class RecordItemComponent.
 *
 */
class RecordItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECORDITEMCOMPONENT
public:
    class RecordItemComponent& operator=(class RecordItemComponent const &) = delete;
    RecordItemComponent(class RecordItemComponent const &) = delete;
    RecordItemComponent() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~RecordItemComponent();
    /**
     * @vtable 1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VRecordItemComponent@@@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vtable 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vtable 5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VRecordItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vtable 6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VRecordItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RECORDITEMCOMPONENT
#endif
    /**
     * @symbol ?getAlias@RecordItemComponent@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getAlias() const;
    /**
     * @symbol ?getComparatorSignal@RecordItemComponent@@QEBAHXZ
     */
    MCAPI int getComparatorSignal() const;
    /**
     * @symbol ?getDuration@RecordItemComponent@@QEBAMXZ
     */
    MCAPI float getDuration() const;
    /**
     * @symbol ?getSound@RecordItemComponent@@QEBA?AW4LevelSoundEvent@@XZ
     */
    MCAPI enum LevelSoundEvent getSound() const;
    /**
     * @symbol ?bindType@RecordItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier@RecordItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};