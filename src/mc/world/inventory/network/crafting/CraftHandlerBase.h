#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/item/components/ItemStackNetResult.h"
#include "mc/world/item/components/ItemStackRequestActionType.h"

class CraftHandlerBase {

public:
    // prevent constructor by default
    CraftHandlerBase& operator=(CraftHandlerBase const&) = delete;
    CraftHandlerBase(CraftHandlerBase const&)            = delete;
    CraftHandlerBase()                                   = delete;

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
     * ?handleConsumedItem\@CraftHandlerBase\@\@UEAA?AW4ItemStackNetResult\@\@W4ContainerEnumName\@\@EAEBVItemStack\@\@\@Z
     */
    virtual enum class ItemStackNetResult
    handleConsumedItem(enum class ContainerEnumName, unsigned char, class ItemStack const&);
    /**
     * @vftbl 2
     * @symbol ?preHandleAction\@CraftHandlerBase\@\@UEAA?AW4ItemStackNetResult\@\@W4ItemStackRequestActionType\@\@\@Z
     */
    virtual enum class ItemStackNetResult preHandleAction(enum class ItemStackRequestActionType);
    /**
     * @vftbl 3
     * @symbol ?endRequestBatch\@CraftHandlerBase\@\@UEAAXXZ
     */
    virtual void endRequestBatch();
    /**
     * @vftbl 4
     * @symbol
     * ?_handleCraftAction\@CraftHandlerLoom\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&) = 0;
    /**
     * @vftbl 5
     * @symbol ?_postCraftRequest\@CraftHandlerBase\@\@MEAAX_N\@Z
     */
    virtual void _postCraftRequest(bool);
    /**
     * @vftbl 6
     * @symbol ?_getLevelRecipes\@CraftHandlerBase\@\@MEBAPEBVRecipes\@\@XZ
     */
    virtual class Recipes const* _getLevelRecipes() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTHANDLERBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CraftHandlerBase();
#endif
    // NOLINTEND
};
