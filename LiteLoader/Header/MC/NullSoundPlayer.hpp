/**
 * @file  NullSoundPlayer.hpp
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
 * @brief MC class NullSoundPlayer.
 *
 */
class NullSoundPlayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLSOUNDPLAYER
public:
    class NullSoundPlayer& operator=(class NullSoundPlayer const &) = delete;
    NullSoundPlayer(class NullSoundPlayer const &) = delete;
    NullSoundPlayer() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~NullSoundPlayer();
    /**
     * @vtable 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
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
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vtable 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vtable 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vtable 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vtable 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vtable 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vtable 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vtable 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vtable 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vtable 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vtable 15
     * @symbol ?getCurrentlyPlayingMusicName@NullSoundPlayer@@UEAA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName();
    /**
     * @vtable 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vtable 17
     * @symbol ?registerLoop@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6AXAEAULoopingSoundState@@@Z@3@MM@Z
     */
    virtual unsigned __int64 registerLoop(std::string const &, class std::function<void (struct LoopingSoundState &)>, float, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NULLSOUNDPLAYER
    /**
     * @vtable -1
     * @symbol ?fadeOut@NullSoundPlayer@@UEAAX_KM@Z
     */
    MCVAPI void fadeOut(unsigned __int64, float);
    /**
     * @vtable -1
     * @symbol ?fadeToStopMusic@NullSoundPlayer@@UEAAXM@Z
     */
    MCVAPI void fadeToStopMusic(float);
    /**
     * @vtable -1
     * @symbol ?getItem@NullSoundPlayer@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@AEAVSoundItem@@@Z
     */
    MCVAPI bool getItem(std::string const &, class Core::Path const &, class SoundItem &) const;
    /**
     * @vtable -1
     * @symbol ?isLoadingMusic@NullSoundPlayer@@UEBA_NXZ
     */
    MCVAPI bool isLoadingMusic() const;
    /**
     * @vtable -1
     * @symbol ?isPlayingMusic@NullSoundPlayer@@UEBA_NAEBVPath@Core@@@Z
     */
    MCVAPI bool isPlayingMusic(class Core::Path const &) const;
    /**
     * @vtable -1
     * @symbol ?isPlayingMusicEvent@NullSoundPlayer@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI bool isPlayingMusicEvent(std::string const &) const;
    /**
     * @vtable -1
     * @symbol ?isPlayingSound@NullSoundPlayer@@UEBA_N_K@Z
     */
    MCVAPI bool isPlayingSound(unsigned __int64) const;
    /**
     * @vtable -1
     * @symbol ?play@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
     */
    MCVAPI unsigned __int64 play(std::string const &, class Vec3 const &, float, float);
    /**
     * @vtable -1
     * @symbol ?playAttached@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$function@$$A6AXAEAUSoundInstanceProperties@@@Z@3@@Z
     */
    MCVAPI unsigned __int64 playAttached(std::string const &, class std::function<void (struct SoundInstanceProperties &)> &&);
    /**
     * @vtable -1
     * @symbol ?playMusic@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MAEAI@Z
     */
    MCVAPI void playMusic(std::string const &, float, unsigned int &);
    /**
     * @vtable -1
     * @symbol ?playMusic@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z
     */
    MCVAPI void playMusic(std::string const &, float);
    /**
     * @vtable -1
     * @symbol ?playUI@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MM@Z
     */
    MCVAPI unsigned __int64 playUI(std::string const &, float, float);
    /**
     * @vtable -1
     * @symbol ?setMusicVolumeMultiplier@NullSoundPlayer@@UEAAXM@Z
     */
    MCVAPI void setMusicVolumeMultiplier(float);
    /**
     * @vtable -1
     * @symbol ?stop@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void stop(std::string const &);
    /**
     * @vtable -1
     * @symbol ?stop@NullSoundPlayer@@UEAAX_K@Z
     */
    MCVAPI void stop(unsigned __int64);
    /**
     * @vtable -1
     * @symbol ?stopAllDelayedSoundActions@NullSoundPlayer@@UEAAXXZ
     */
    MCVAPI void stopAllDelayedSoundActions();
    /**
     * @vtable -1
     * @symbol ?stopAllSounds@NullSoundPlayer@@UEAAXXZ
     */
    MCVAPI void stopAllSounds();
    /**
     * @vtable -1
     * @symbol ?stopMusic@NullSoundPlayer@@UEAAXXZ
     */
    MCVAPI void stopMusic();
    /**
     * @vtable -1
     * @symbol ?tryGetLoopingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@ULoopingSoundAttributes@@@std@@_K@Z
     */
    MCVAPI class std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(unsigned __int64) const;
    /**
     * @vtable -1
     * @symbol ?tryGetPlayingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@UPlayingSoundAttributes@@@std@@_K@Z
     */
    MCVAPI class std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(unsigned __int64) const;
    /**
     * @vtable -1
     * @symbol ?unregisterLoop@NullSoundPlayer@@UEAAX_K_N@Z
     */
    MCVAPI void unregisterLoop(unsigned __int64, bool);
#endif

};