#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureStart {

public:
    // prevent constructor by default
    StructureStart& operator=(StructureStart const&) = delete;
    StructureStart(StructureStart const&)            = delete;
    StructureStart()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?postProcess\@StructureStart\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @vftbl 2
     * @symbol ?isValid\@StructureStart\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURESTART
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StructureStart();
#endif
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?calculateBoundingBox\@StructureStart\@\@IEAAXXZ
     */
    MCAPI void calculateBoundingBox();
    /**
     * @symbol ?moveBoundingBoxes\@StructureStart\@\@IEAAXH\@Z
     */
    MCAPI void moveBoundingBoxes(int32_t);
    /**
     * @symbol ?moveInsideHeights\@StructureStart\@\@IEAAXAEAVRandom\@\@FF\@Z
     */
    MCAPI void moveInsideHeights(class Random&, int16_t, int16_t);
    /**
     * @symbol ?moveToBelowSeaLevel\@StructureStart\@\@IEAAXFFAEAVRandom\@\@H\@Z
     */
    MCAPI void moveToBelowSeaLevel(int16_t, int16_t, class Random&, int32_t);
    // NOLINTEND
};
