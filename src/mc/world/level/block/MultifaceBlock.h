#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MultifaceBlock : public ::BlockLegacy {

public:
    // prevent constructor by default
    MultifaceBlock& operator=(MultifaceBlock const&) = delete;
    MultifaceBlock(MultifaceBlock const&)            = delete;
    MultifaceBlock()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 5
     * @symbol ?clip\@MultifaceBlock\@\@UEBA?AVHitResult\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVVec3\@\@2_N\@Z
     */
    virtual class HitResult
    clip(class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool) const;
    /**
     * @vftbl 8
     * @symbol
     * ?getAABB\@MultifaceBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /**
     * @vftbl 11
     * @symbol
     * ?getVisualShapeInWorld\@MultifaceBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEAV2\@\@Z
     */
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 37
     * @symbol ?isWaterBlocking\@MultifaceBlock\@\@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const;
    /**
     * @vftbl 38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl 43
     * @symbol __unk_vfn_43
     */
    virtual void __unk_vfn_43();
    /**
     * @vftbl 44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl 46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl 47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl 48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl 49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl 50
     * @symbol __unk_vfn_50
     */
    virtual void __unk_vfn_50();
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl 56
     * @symbol __unk_vfn_56
     */
    virtual void __unk_vfn_56();
    /**
     * @vftbl 59
     * @symbol ?sanitizeFillBlock\@MultifaceBlock\@\@UEBAAEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class Block const& sanitizeFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 63
     * @symbol __unk_vfn_63
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl 93
     * @symbol ?mayPlace\@MultifaceBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool mayPlace(class BlockSource&, class BlockPos const&, uint8_t) const;
    /**
     * @vftbl 101
     * @symbol ?neighborChanged\@MultifaceBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 108
     * @symbol ?getPlacementBlock\@MultifaceBlock\@\@UEBAAEBVBlock\@\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uint8_t, class Vec3 const&, int32_t) const;
    /**
     * @vftbl 123
     * @symbol __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl 124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl 125
     * @symbol __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl 128
     * @symbol __unk_vfn_128
     */
    virtual void __unk_vfn_128();
    /**
     * @vftbl 131
     * @symbol __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl 153
     * @symbol __unk_vfn_153
     */
    virtual void __unk_vfn_153();
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 163
     * @symbol __unk_vfn_163
     */
    virtual void __unk_vfn_163();
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl 168
     * @symbol ?tick\@MultifaceBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171();
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 175
     * @symbol ?canSurvive\@MultifaceBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl 192
     * @symbol ?getMultifaceBlock\@SculkVeinBlock\@\@UEBAAEBVBlock\@\@XZ
     */
    virtual class Block const& getMultifaceBlock() const = 0;
    /**
     * @vftbl 193
     * @symbol ?getMultifaceSpreader\@SculkVeinBlock\@\@UEBAAEBVMultifaceSpreader\@\@XZ
     */
    virtual class MultifaceSpreader const& getMultifaceSpreader() const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MULTIFACEBLOCK
    /**
     * @symbol ?isMultifaceBlock\@MultifaceBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isMultifaceBlock() const;
#endif
    /**
     * @symbol
     * ??0MultifaceBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBVMaterial\@\@\@Z
     */
    MCAPI MultifaceBlock(std::string const&, int32_t, class Material const&);
    /**
     * @symbol
     * ?removeFace\@MultifaceBlock\@\@QEBAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@E_N\@Z
     */
    MCAPI void
    removeFace(class IBlockWorldGenAPI&, class BlockSource*, class Block const&, class BlockPos const&, uint8_t, bool)
        const;
    /**
     * @symbol ?convertOldMultifaceToNewMultifaceValue\@MultifaceBlock\@\@SAHH\@Z
     */
    MCAPI static int32_t convertOldMultifaceToNewMultifaceValue(int32_t);
    /**
     * @symbol ?getBlockForPlacement\@MultifaceBlock\@\@SAAEBVBlock\@\@AEBV2\@0AEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI static class Block const&
    getBlockForPlacement(class Block const&, class Block const&, class BlockSource&, class BlockPos const&, uint8_t);
    /**
     * @symbol
     * ?getBlockForPlacementWorldGen\@MultifaceBlock\@\@SAAEBVBlock\@\@AEBV2\@0AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI static class Block const& getBlockForPlacementWorldGen(
        class Block const&,
        class Block const&,
        class IBlockWorldGenAPI&,
        class BlockPos const&,
        uint8_t
    );
    /**
     * @symbol ?getMultifaceValueFromFace\@MultifaceBlock\@\@SAHE\@Z
     */
    MCAPI static int32_t getMultifaceValueFromFace(uint8_t);
    /**
     * @symbol ?hasFace\@MultifaceBlock\@\@SA_NAEBVBlock\@\@E\@Z
     */
    MCAPI static bool hasFace(class Block const&, uint8_t);
    /**
     * @symbol ?MULTIFACE_ALL\@MultifaceBlock\@\@2HB
     */
    MCAPI static int32_t const MULTIFACE_ALL;
    /**
     * @symbol ?MULTIFACE_DOWN\@MultifaceBlock\@\@2HB
     */
    MCAPI static int32_t const MULTIFACE_DOWN;
    /**
     * @symbol ?MULTIFACE_EAST\@MultifaceBlock\@\@2HB
     */
    MCAPI static int32_t const MULTIFACE_EAST;
    /**
     * @symbol ?MULTIFACE_NORTH\@MultifaceBlock\@\@2HB
     */
    MCAPI static int32_t const MULTIFACE_NORTH;
    /**
     * @symbol ?MULTIFACE_SIDES\@MultifaceBlock\@\@2HB
     */
    MCAPI static int32_t const MULTIFACE_SIDES;
    /**
     * @symbol ?MULTIFACE_SOUTH\@MultifaceBlock\@\@2HB
     */
    MCAPI static int32_t const MULTIFACE_SOUTH;
    /**
     * @symbol ?MULTIFACE_UP\@MultifaceBlock\@\@2HB
     */
    MCAPI static int32_t const MULTIFACE_UP;
    /**
     * @symbol ?MULTIFACE_WEST\@MultifaceBlock\@\@2HB
     */
    MCAPI static int32_t const MULTIFACE_WEST;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_canSpread\@MultifaceBlock\@\@IEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool _canSpread(class IBlockWorldGenAPI&, class Block const&, class BlockPos const&, uint8_t) const;
    /**
     * @symbol ?_getNumSides\@MultifaceBlock\@\@IEBAHAEBVBlock\@\@\@Z
     */
    MCAPI int32_t _getNumSides(class Block const&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_removeBlock\@MultifaceBlock\@\@AEBAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI void _removeBlock(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&, bool) const;
    // NOLINTEND
};
