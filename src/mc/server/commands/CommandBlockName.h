#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandBlockName {
public:
    uint64 id;

public:
    // NOLINTBEGIN
    // symbol: ??0CommandBlockName@@QEAA@_K@Z
    MCAPI CommandBlockName(uint64);

    // symbol:
    // ?getDescriptionId@CommandBlockName@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getDescriptionId() const;

    // symbol: ??BCommandBlockName@@QEBA_KXZ
    MCAPI operator uint64() const;

    // symbol:
    // ?resolveBlock@CommandBlockName@@QEBA?AVCommandBlockNameResult@@AEBV?$vector@VBlockStateCommandParam@@V?$allocator@VBlockStateCommandParam@@@std@@@std@@HAEAVCommandOutput@@@Z
    MCAPI class CommandBlockNameResult
    resolveBlock(std::vector<class BlockStateCommandParam> const&, int, class CommandOutput&) const;

    // symbol: ?resolveBlock@CommandBlockName@@QEBA?AVCommandBlockNameResult@@H@Z
    MCAPI class CommandBlockNameResult resolveBlock(int) const;

    // symbol:
    // ?resolveBlock@CommandBlockName@@QEBA?AVCommandBlockNameResult@@AEBV?$vector@VBlockStateCommandParam@@V?$allocator@VBlockStateCommandParam@@@std@@@std@@AEAVCommandOutput@@@Z
    MCAPI class CommandBlockNameResult
    resolveBlock(std::vector<class BlockStateCommandParam> const&, class CommandOutput&) const;

    // NOLINTEND
};
