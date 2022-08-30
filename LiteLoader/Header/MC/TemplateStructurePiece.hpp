/**
 * @file  TemplateStructurePiece.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TemplateStructurePiece.
 *
 */
class TemplateStructurePiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEMPLATESTRUCTUREPIECE
public:
    class TemplateStructurePiece& operator=(class TemplateStructurePiece const &) = delete;
    TemplateStructurePiece(class TemplateStructurePiece const &) = delete;
    TemplateStructurePiece() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol 
     */
    virtual ~TemplateStructurePiece();
    /**
     * @vtable 1
     * @symbol ?moveBoundingBox@TemplateStructurePiece@@UEAAXHHH@Z
     */
    virtual void moveBoundingBox(int, int, int);
    /**
     * @vtable 4
     * @symbol ?postProcess@TemplateStructurePiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEMPLATESTRUCTUREPIECE
#endif
    /**
     * @symbol ??0TemplateStructurePiece@@QEAA@H@Z
     */
    MCAPI TemplateStructurePiece(int);

//protected:
    /**
     * @symbol ?_setup@TemplateStructurePiece@@IEAAXAEAVLegacyStructureTemplate@@AEBVLegacyStructureSettings@@AEBVBlockPos@@@Z
     */
    MCAPI void _setup(class LegacyStructureTemplate &, class LegacyStructureSettings const &, class BlockPos const &);

//private:
    /**
     * @symbol ?_setBoundingBoxFromTemplate@TemplateStructurePiece@@AEAAXXZ
     */
    MCAPI void _setBoundingBoxFromTemplate();

protected:

private:

};