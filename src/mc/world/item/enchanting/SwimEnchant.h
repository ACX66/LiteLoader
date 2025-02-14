#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class SwimEnchant : public ::Enchant {
public:
    // prevent constructor by default
    SwimEnchant& operator=(SwimEnchant const&) = delete;
    SwimEnchant(SwimEnchant const&)            = delete;
    SwimEnchant()                              = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?getMinCost@SwimEnchant@@UEBAHH@Z
    virtual int getMinCost(int) const;

    // vIndex: 3, symbol: ?getMaxCost@SwimEnchant@@UEBAHH@Z
    virtual int getMaxCost(int) const;

    // vIndex: 5, symbol: ?getMaxLevel@SwimEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: ?_isValidEnchantmentTypeForCategory@SwimEnchant@@EEBA_NW4Type@Enchant@@@Z
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type) const;

    // symbol:
    // ??0SwimEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2HH@Z
    MCAPI SwimEnchant(::Enchant::Type, ::Enchant::Frequency, std::string_view, std::string_view, int, int);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?VALID_ENCHANTMENTS@SwimEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
    MCAPI static std::vector<::Enchant::Type> const VALID_ENCHANTMENTS;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    inline auto& $VALID_ENCHANTMENTS() { return VALID_ENCHANTMENTS; }

    // NOLINTEND
};
