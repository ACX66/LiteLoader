#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class OffhandContainerValidation : public ::ContainerValidationBase {

public:
    // prevent constructor by default
    OffhandContainerValidation& operator=(OffhandContainerValidation const&) = delete;
    OffhandContainerValidation(OffhandContainerValidation const&)            = delete;
    OffhandContainerValidation()                                             = delete;

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
     * ?isItemAllowedInSlot\@OffhandContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
     */
    virtual bool
    isItemAllowedInSlot(class ContainerScreenContext const&, int32_t, class ItemStackBase const&, int32_t) const;
    /**
     * @vftbl 3
     * @symbol ?getAvailableSetCount\@ContainerValidationBase\@\@UEBAHHAEBVItemStackBase\@\@\@Z
     */
    virtual int32_t getAvailableSetCount(int32_t, class ItemStackBase const&) const;
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol
     * ?isItemAllowedToRemove\@OffhandContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const&, class ItemStackBase const&) const;
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol ?canDestroy\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OFFHANDCONTAINERVALIDATION
    /**
     * @symbol ?canItemMoveToContainer\@OffhandContainerValidation\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const&) const;
    /**
     * @symbol ?getContainerOffset\@OffhandContainerValidation\@\@UEBAHAEBVContainerScreenContext\@\@\@Z
     */
    MCVAPI int32_t getContainerOffset(class ContainerScreenContext const&) const;
#endif
    // NOLINTEND
};
