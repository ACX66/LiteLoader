#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/item/components/ItemStackNetResult.h"
#include "mc/world/item/components/ItemStackRequestActionType.h"

class CraftHandlerLoom : public ::CraftHandlerBase {

public:
    // prevent constructor by default
    CraftHandlerLoom& operator=(CraftHandlerLoom const&) = delete;
    CraftHandlerLoom(CraftHandlerLoom const&)            = delete;
    CraftHandlerLoom()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 4
     * @symbol
     * ?_handleCraftAction\@CraftHandlerLoom\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    // NOLINTEND
};
