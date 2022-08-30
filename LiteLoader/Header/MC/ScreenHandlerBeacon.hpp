/**
 * @file  ScreenHandlerBeacon.hpp
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
 * @brief MC class ScreenHandlerBeacon.
 *
 */
class ScreenHandlerBeacon {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENHANDLERBEACON
public:
    class ScreenHandlerBeacon& operator=(class ScreenHandlerBeacon const &) = delete;
    ScreenHandlerBeacon(class ScreenHandlerBeacon const &) = delete;
    ScreenHandlerBeacon() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~ScreenHandlerBeacon();
    /**
     * @vtable 1
     * @symbol ?handleAction@ScreenHandlerBeacon@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestAction@@@Z
     */
    virtual enum ItemStackNetResult handleAction(class ItemStackRequestAction const &);
    /**
     * @vtable 2
     * @symbol ?endRequest@ScreenHandlerBeacon@@MEAA?AW4ItemStackNetResult@@XZ
     */
    virtual enum ItemStackNetResult endRequest();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?postRequest@ScreenHandlerBeacon@@MEAAX_N@Z
     */
    virtual void postRequest(bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCREENHANDLERBEACON
#endif
    /**
     * @symbol ??0ScreenHandlerBeacon@@QEAA@AEBVContainerScreenContext@@AEAVItemStackRequestActionHandler@@@Z
     */
    MCAPI ScreenHandlerBeacon(class ContainerScreenContext const &, class ItemStackRequestActionHandler &);

//private:
    /**
     * @symbol ?_handleBeaconPaymentAction@ScreenHandlerBeacon@@AEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionBeaconPayment@@@Z
     */
    MCAPI enum ItemStackNetResult _handleBeaconPaymentAction(class ItemStackRequestActionBeaconPayment const &);

private:

};