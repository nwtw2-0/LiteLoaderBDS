/**
 * @file  CapacitorComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CapacitorComponent.
 *
 */
class CapacitorComponent : public ProducerComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAPACITORCOMPONENT
public:
    class CapacitorComponent& operator=(class CapacitorComponent const &) = delete;
    CapacitorComponent(class CapacitorComponent const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~CapacitorComponent();
    /**
     * @vtable 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vtable 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vtable 22
     * @symbol ?getCircuitComponentType@CapacitorComponent@@UEBA?AW4CircuitComponentType@@XZ
     */
    virtual enum CircuitComponentType getCircuitComponentType() const;
    /**
     * @vtable 24
     * @symbol ?getPoweroutDirection@CapacitorComponent@@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAPACITORCOMPONENT
#endif
    /**
     * @symbol ??0CapacitorComponent@@QEAA@XZ
     */
    MCAPI CapacitorComponent();

};