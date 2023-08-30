#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class BrewingStandResultContainerValidation : public ::ContainerValidationBase {

public:
    // prevent constructor by default
    BrewingStandResultContainerValidation& operator=(BrewingStandResultContainerValidation const&) = delete;
    BrewingStandResultContainerValidation(BrewingStandResultContainerValidation const&)            = delete;
    BrewingStandResultContainerValidation()                                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?isValidSlotForContainer\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVContainer\@\@H\@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int32_t) const;
    /**
     * @vftbl 2
     * @symbol
     * ?isItemAllowedInSlot\@BrewingStandResultContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
     */
    virtual bool
    isItemAllowedInSlot(class ContainerScreenContext const&, int32_t, class ItemStackBase const&, int32_t) const;
    /**
     * @vftbl 3
     * @symbol ?getAvailableSetCount\@BrewingStandResultContainerValidation\@\@UEBAHHAEBVItemStackBase\@\@\@Z
     */
    virtual int32_t getAvailableSetCount(int32_t, class ItemStackBase const&) const;
    /**
     * @vftbl 4
     * @symbol ?isItemAllowedToAdd\@BrewingStandResultContainerValidation\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool isItemAllowedToAdd(class ItemStack const&) const;
    /**
     * @vftbl 5
     * @symbol
     * ?isItemAllowedToRemove\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const&, class ItemStackBase const&) const;
    /**
     * @vftbl 6
     * @symbol ?canItemMoveToContainer\@ContainerValidationBase\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const&) const;
    /**
     * @vftbl 7
     * @symbol ?canDestroy\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const&) const;
    /**
     * @vftbl 8
     * @symbol ?getContainerOffset\@BrewingStandResultContainerValidation\@\@UEBAHAEBVContainerScreenContext\@\@\@Z
     */
    virtual int32_t getContainerOffset(class ContainerScreenContext const&) const;
    /**
     * @vftbl 9
     * @symbol
     * ?getContainerSize\@BrewingStandResultContainerValidation\@\@UEBAHAEBVContainerScreenContext\@\@AEBVContainer\@\@\@Z
     */
    virtual int32_t getContainerSize(class ContainerScreenContext const&, class Container const&) const;
    // NOLINTEND
};
