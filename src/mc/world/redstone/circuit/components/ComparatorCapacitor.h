#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/SidePoweredComponent.h"

class ComparatorCapacitor : public ::SidePoweredComponent {
public:
    // ComparatorCapacitor inner types define
    enum class Mode {
        CompareMode = 0x0,
        SubtractMode = 0x1,
    };


    int                        mRearAnalogStrength;
    int                        mSideAnalogStrengthRight;
    int                        mSideAnalogStrengthLeft;
    int                        mOldStrength;
    Mode                       mMode;
    int                        mRearStrength;
    int                        mSideStrengths;
    bool                       mHasAnalogBeenSet;
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::ComparatorCapacitor;
public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 11
     * @symbol ?addSource\@ComparatorCapacitor\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int32_t&, bool&);
    /**
     * @vftbl 14
     * @symbol ?evaluate\@ComparatorCapacitor\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    /**
     * @vftbl 15
     * @symbol ?cacheValues\@ComparatorCapacitor\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void cacheValues(class CircuitSystem&, class BlockPos const&);
    /**
     * @vftbl 16
     * @symbol ?updateDependencies\@ComparatorCapacitor\@\@UEAAXAEAVCircuitSceneGraph\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void updateDependencies(class CircuitSceneGraph&, class BlockPos const&);
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl 23
     * @symbol ?getCircuitComponentType\@ComparatorCapacitor\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @symbol ??0ComparatorCapacitor\@\@QEAA\@XZ
     */
    MCAPI ComparatorCapacitor();
    /**
     * @symbol ?clearAnalogStrength\@ComparatorCapacitor\@\@QEAAXE\@Z
     */
    MCAPI void clearAnalogStrength(uint8_t);
    /**
     * @symbol ?getOldStrength\@ComparatorCapacitor\@\@QEAAHXZ
     */
    MCAPI int32_t getOldStrength();
    /**
     * @symbol ?isSubtractMode\@ComparatorCapacitor\@\@QEAA_NXZ
     */
    MCAPI bool isSubtractMode();
    /**
     * @symbol ?setAnalogStrength\@ComparatorCapacitor\@\@QEAAXHE\@Z
     */
    MCAPI void setAnalogStrength(int32_t, uint8_t);
    /**
     * @symbol ?setMode\@ComparatorCapacitor\@\@QEAAXW4Mode\@1\@\@Z
     */
    MCAPI void setMode(enum class ComparatorCapacitor::Mode);
    // NOLINTEND
};
