#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MaterialType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class MoveToLiquidGoal : public ::BaseMoveToBlockGoal {

public:
    // prevent constructor by default
    MoveToLiquidGoal& operator=(MoveToLiquidGoal const&) = delete;
    MoveToLiquidGoal(MoveToLiquidGoal const&)            = delete;
    MoveToLiquidGoal()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@MoveToLiquidGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MoveToLiquidGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveToLiquidGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 11
     * @symbol ?isValidTarget\@MoveToLiquidGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    /**
     * @vftbl 17
     * @symbol ?findTargetBlock\@MoveToLiquidGoal\@\@UEAA_NXZ
     */
    virtual bool findTargetBlock();
    /**
     * @symbol ??0MoveToLiquidGoal\@\@QEAA\@AEAVMob\@\@MHHHW4MaterialType\@\@M\@Z
     */
    MCAPI MoveToLiquidGoal(class Mob&, float, int32_t, int32_t, int32_t, enum class MaterialType, float);
    // NOLINTEND
};
