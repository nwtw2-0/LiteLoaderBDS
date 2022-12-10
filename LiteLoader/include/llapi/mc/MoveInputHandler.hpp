/**
 * @file  MoveInputHandler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveInput.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveInputHandler.
 *
 */
class MoveInputHandler : public MoveInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEINPUTHANDLER
public:
    class MoveInputHandler& operator=(class MoveInputHandler const &) = delete;
    MoveInputHandler(class MoveInputHandler const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   268324187
     */
    virtual ~MoveInputHandler();
    /**
     * @vftbl  1
     * @symbol ?tick@MoveInputHandler@@UEAAXAEAUIPlayerMovementProxy@@@Z
     * @hash   -2002376247
     */
    virtual void tick(struct IPlayerMovementProxy &);
    /**
     * @vftbl  2
     * @hash   -1315668094
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1314744573
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?clearInputState@MoveInputHandler@@UEAAXXZ
     * @hash   1654296170
     */
    virtual void clearInputState();
    /**
     * @vftbl  5
     * @hash   -1312897531
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  9
     * @symbol ?isChangeHeight@MoveInputHandler@@UEBA_NXZ
     * @hash   -2042251240
     */
    virtual bool isChangeHeight() const;
    /**
     * @vftbl  11
     * @symbol ?isPlayerMoving@MoveInputHandler@@UEBA_NXZ
     * @hash   608144592
     */
    virtual bool isPlayerMoving() const;
    /**
     * @vftbl  12
     * @symbol ?extractInputComponent@MoveInputHandler@@UEBA?AUMoveInputComponent@@XZ
     * @hash   719760347
     */
    virtual struct MoveInputComponent extractInputComponent() const;
    /**
     * @vftbl  13
     * @symbol ?applyInputComponent@MoveInputHandler@@UEAAXAEBUMoveInputComponent@@@Z
     * @hash   -1616556141
     */
    virtual void applyInputComponent(struct MoveInputComponent const &);
    /**
     * @vftbl  14
     * @symbol ?fillInputPacket@MoveInputHandler@@UEAAXAEAVPlayerAuthInputPacket@@@Z
     * @hash   1335991374
     */
    virtual void fillInputPacket(class PlayerAuthInputPacket &);
    /**
     * @vftbl  15
     * @hash   -699106350
     */
    virtual void __unk_vfn_15() = 0;
    /**
     * @vftbl  16
     * @symbol ?createSnapshot@MoveInputHandler@@UEAA?AV?$unique_ptr@UIReplayableActorInput@@U?$default_delete@UIReplayableActorInput@@@std@@@std@@XZ
     * @hash   87072761
     */
    virtual std::unique_ptr<struct IReplayableActorInput> createSnapshot();
    /**
     * @symbol ?wantsMoveForward@MoveInputHandler@@QEBA_NXZ
     * @hash   -1856397810
     */
    MCAPI bool wantsMoveForward() const;

//protected:
    /**
     * @symbol ??0MoveInputHandler@@IEAA@XZ
     * @hash   -1957567741
     */
    MCAPI MoveInputHandler();

protected:

};