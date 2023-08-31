#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class HorseArmorItem : public ::Item {
public:
    // HorseArmorItem inner types define
    enum class Tier {};

public:
    // prevent constructor by default
    HorseArmorItem& operator=(HorseArmorItem const&) = delete;
    HorseArmorItem(HorseArmorItem const&)            = delete;
    HorseArmorItem()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 18
     * @symbol ?isDyeable\@HorseArmorItem\@\@UEBA_NXZ
     */
    virtual bool isDyeable() const;
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl 60
     * @symbol
     * ?appendFormattedHovertext\@HorseArmorItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;
    /**
     * @vftbl 64
     * @symbol ?getArmorValue\@HorseArmorItem\@\@UEBAHXZ
     */
    virtual int32_t getArmorValue() const;
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl 73
     * @symbol ?getColor\@HorseArmorItem\@\@UEBA?AVColor\@mce\@\@PEBVCompoundTag\@\@AEBVItemDescriptor\@\@\@Z
     */
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /**
     * @vftbl 74
     * @symbol ?hasCustomColor\@HorseArmorItem\@\@UEBA_NPEBVCompoundTag\@\@\@Z
     */
    virtual bool hasCustomColor(class CompoundTag const*) const;
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl 77
     * @symbol ?clearColor\@HorseArmorItem\@\@UEBAXPEAVCompoundTag\@\@\@Z
     */
    virtual void clearColor(class CompoundTag*) const;
    /**
     * @vftbl 78
     * @symbol ?setColor\@HorseArmorItem\@\@UEBAXAEAVItemStackBase\@\@AEBVColor\@mce\@\@\@Z
     */
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const;
    /**
     * @vftbl 79
     * @symbol __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 85
     * @symbol ?dispense\@HorseArmorItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource&, class Container&, int32_t, class Vec3 const&, uint8_t) const;
    /**
     * @vftbl 115
     * @symbol __unk_vfn_115
     */
    virtual void __unk_vfn_115();
    /**
     * @vftbl 116
     * @symbol __unk_vfn_116
     */
    virtual void __unk_vfn_116();
    /**
     * @symbol
     * ??0HorseArmorItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HHW4Tier\@0\@\@Z
     */
    MCAPI HorseArmorItem(std::string const&, int32_t, int32_t, enum class HorseArmorItem::Tier);
    /**
     * @symbol ?getTier\@HorseArmorItem\@\@QEBA?AW4Tier\@1\@XZ
     */
    MCAPI enum class HorseArmorItem::Tier getTier() const;
    /**
     * @symbol ?mHealthPerTier\@HorseArmorItem\@\@2QBHB
     */
    MCAPI static int32_t const mHealthPerTier[];
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_tryEquipHorseArmor\@HorseArmorItem\@\@CA_NPEAVActor\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI static bool _tryEquipHorseArmor(class Actor*, class ItemStack const&);
    // NOLINTEND
};
