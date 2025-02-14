#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/Container.h"
#include "mc/world/actor/Hopper.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerType.h"

class HopperBlockActor : public BlockActor, public Container, public Hopper {
public:
    // prevent constructor by default
    HopperBlockActor& operator=(HopperBlockActor const&) = delete;
    HopperBlockActor(HopperBlockActor const&)            = delete;
    HopperBlockActor()                                   = delete;

public:
    // NOLINTBEGIN
    // symbol:
    // ?_getUpdatePacket@HopperBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // symbol: ?_onUpdatePacket@HopperBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // symbol: ?getContainer@HopperBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container* getContainer();

    // symbol: ?getContainer@HopperBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const* getContainer() const;

    // symbol: ?getContainerSize@HopperBlockActor@@UEBAHXZ
    MCVAPI int getContainerSize() const;

    // symbol: ?getItem@HopperBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const& getItem(int) const;

    // symbol: ?getMaxStackSize@HopperBlockActor@@UEBAHXZ
    MCVAPI int getMaxStackSize() const;

    // symbol: ?getName@HopperBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?load@HopperBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // symbol: ?onMove@HopperBlockActor@@UEAAXXZ
    MCVAPI void onMove();

    // symbol: ?onNeighborChanged@HopperBlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCVAPI void onNeighborChanged(class BlockSource&, class BlockPos const&);

    // symbol: ?save@HopperBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag&) const;

    // symbol: ?serverInitItemStackIds@HopperBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(int, int, std::function<void(int, class ItemStack const&)>);

    // symbol: ?setContainerChanged@HopperBlockActor@@UEAAXH@Z
    MCVAPI void setContainerChanged(int);

    // symbol: ?setItem@HopperBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int, class ItemStack const&);

    // symbol: ?startOpen@HopperBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player&);

    // symbol: ?stopOpen@HopperBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player&);

    // symbol: ?tick@HopperBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource&);

    // symbol: ??0HopperBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI HopperBlockActor(class BlockPos const&);

    // symbol: ?checkForSmeltEverythingAchievement@HopperBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource&);

    // symbol: ?getAttachedFurnace@HopperBlockActor@@QEAAPEAVFurnaceBlockActor@@AEAVBlockSource@@@Z
    MCAPI class FurnaceBlockActor* getAttachedFurnace(class BlockSource&);

    // symbol: ?isAttachedToChestAndFurnace@HopperBlockActor@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool isAttachedToChestAndFurnace(class BlockSource&);

    // symbol: ?updateCooldownAfterMove@HopperBlockActor@@QEAAXAEBUTick@@H@Z
    MCAPI void updateCooldownAfterMove(struct Tick const&, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_ensureTickingOrder@HopperBlockActor@@AEAAXAEAVBlockSource@@H@Z
    MCAPI void _ensureTickingOrder(class BlockSource&, int);

    // symbol: ?_tick@HopperBlockActor@@AEAAXAEAVBlockSource@@H@Z
    MCAPI void _tick(class BlockSource&, int);

    // symbol: ?isAttachedToContainerType@HopperBlockActor@@AEAA_NAEAVBlockSource@@W4ContainerType@@@Z
    MCAPI bool isAttachedToContainerType(class BlockSource&, ::ContainerType);

    // symbol: ?isSourceOfContainerType@HopperBlockActor@@AEAA_NAEAVBlockSource@@W4ContainerType@@@Z
    MCAPI bool isSourceOfContainerType(class BlockSource&, ::ContainerType);

    // NOLINTEND
};
