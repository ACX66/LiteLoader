#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/EquipmentSlot.h"

class WearableItemComponent {
public:
    // prevent constructor by default
    WearableItemComponent& operator=(WearableItemComponent const&) = delete;
    WearableItemComponent(WearableItemComponent const&)            = delete;
    WearableItemComponent()                                        = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?checkComponentDataForContentErrors@ItemComponent@@UEBA_NXZ
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: ?isNetworkComponent@ChargeableItemComponent@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 4, symbol:
    // ?buildNetworkTag@ChargeableItemComponent@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 5, symbol: ?initializeFromNetwork@ChargeableItemComponent@@UEAA_NAEBVCompoundTag@@@Z
    virtual bool initializeFromNetwork(class CompoundTag const&);

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@ItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7, symbol: ?initializeComponent@ItemComponent@@UEBAXXZ
    virtual void initializeComponent() const;

    // vIndex: 8, symbol: ?_canUseOn@ItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 9, symbol: ?_useOn@ItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // symbol: ?getSlot@WearableItemComponent@@QEBA?AW4EquipmentSlot@@XZ
    MCAPI ::EquipmentSlot getSlot() const;

    // symbol: ?use@WearableItemComponent@@QEBA_NAEAVItemStack@@AEAVPlayer@@@Z
    MCAPI bool use(class ItemStack&, class Player&) const;

    // symbol: ?bindType@WearableItemComponent@@SAXXZ
    MCAPI static void bindType();

    // symbol: ?getIdentifier@WearableItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
