#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class FurnaceContainerManagerModel : public ::ContainerManagerModel {

public:
    // prevent constructor by default
    FurnaceContainerManagerModel& operator=(FurnaceContainerManagerModel const&) = delete;
    FurnaceContainerManagerModel(FurnaceContainerManagerModel const&)            = delete;
    FurnaceContainerManagerModel()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 6
     * @symbol
     * ?getItemCopies\@FurnaceContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl 7
     * @symbol ?setSlot\@FurnaceContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int32_t, class ItemStack const&, bool);
    /**
     * @vftbl 8
     * @symbol ?getSlot\@FurnaceContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getSlot(int32_t) const;
    /**
     * @vftbl 9
     * @symbol ?setData\@FurnaceContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int32_t, int32_t);
    /**
     * @vftbl 10
     * @symbol ?broadcastChanges\@FurnaceContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vftbl 16
     * @symbol ?isValid\@FurnaceContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @vftbl 17
     * @symbol ?_postInit\@FurnaceContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FURNACECONTAINERMANAGERMODEL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FurnaceContainerManagerModel();
#endif
    /**
     * @symbol ??0FurnaceContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI FurnaceContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0FurnaceContainerManagerModel\@\@IEAA\@AEBVHashedString\@\@W4ContainerType\@\@W4BlockActorType\@\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI
    FurnaceContainerManagerModel(class HashedString const&, enum class ContainerType, enum class BlockActorType, enum class ContainerID, class Player&, class BlockPos const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_getFurnaceEntity\@FurnaceContainerManagerModel\@\@AEAAPEAVFurnaceBlockActor\@\@XZ
     */
    MCAPI class FurnaceBlockActor* _getFurnaceEntity();
    /**
     * @symbol ?_updateResultSlotInfo\@FurnaceContainerManagerModel\@\@AEAAXXZ
     */
    MCAPI void _updateResultSlotInfo();
    // NOLINTEND
};
