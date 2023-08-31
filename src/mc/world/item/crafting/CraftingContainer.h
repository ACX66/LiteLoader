#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"

class CraftingContainer : public ::Container {

public:
    // prevent constructor by default
    CraftingContainer& operator=(CraftingContainer const&) = delete;
    CraftingContainer(CraftingContainer const&)            = delete;
    CraftingContainer()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?serverInitItemStackIds\@CraftingContainer\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    virtual void serverInitItemStackIds(int32_t, int32_t, std::function<void(int32_t, class ItemStack const&)>);
    /**
     * @vftbl 5
     * @symbol ?getItem\@CraftingContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getItem(int32_t) const;
    /**
     * @vftbl 10
     * @symbol ?setItem\@CraftingContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int32_t, class ItemStack const&);
    /**
     * @vftbl 16
     * @symbol ?getContainerSize\@CraftingContainer\@\@UEBAHXZ
     */
    virtual int32_t getContainerSize() const;
    /**
     * @vftbl 17
     * @symbol ?getMaxStackSize\@CraftingContainer\@\@UEBAHXZ
     */
    virtual int32_t getMaxStackSize() const;
    /**
     * @vftbl 18
     * @symbol ?startOpen\@CraftingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player&);
    /**
     * @vftbl 19
     * @symbol ?stopOpen\@CraftingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void stopOpen(class Player&);
    /**
     * @vftbl 25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25();
    /**
     * @vftbl 26
     * @symbol __unk_vfn_26
     */
    virtual void __unk_vfn_26();
    /**
     * @vftbl 27
     * @symbol ?setContainerChanged\@CraftingContainer\@\@UEAAXH\@Z
     */
    virtual void setContainerChanged(int32_t);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTINGCONTAINER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CraftingContainer();
#endif
    /**
     * @symbol ??0CraftingContainer\@\@QEAA\@HH\@Z
     */
    MCAPI CraftingContainer(int32_t, int32_t);
    /**
     * @symbol ?getItem\@CraftingContainer\@\@QEBAAEBVItemStack\@\@HH\@Z
     */
    MCAPI class ItemStack const& getItem(int32_t, int32_t) const;
    // NOLINTEND
};
