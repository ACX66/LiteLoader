#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class UnlockRecipeCommand : public ::Command {
public:
    // prevent constructor by default
    UnlockRecipeCommand& operator=(UnlockRecipeCommand const&) = delete;
    UnlockRecipeCommand(UnlockRecipeCommand const&)            = delete;
    UnlockRecipeCommand()                                      = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?execute@UnlockRecipeCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@UnlockRecipeCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
