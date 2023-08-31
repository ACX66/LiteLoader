#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandBlockName {

public:
    uint64_t id;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CommandBlockName\@\@QEAA\@_K\@Z
     */
    MCAPI CommandBlockName(uint64_t);
    /**
     * @symbol
     * ?getDescriptionId\@CommandBlockName\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescriptionId() const;
    /**
     * @symbol ??BCommandBlockName\@\@QEBA_KXZ
     */
    MCAPI operator uint64_t() const;
    /**
     * @symbol
     * ?resolveBlock\@CommandBlockName\@\@QEBA?AVCommandBlockNameResult\@\@AEBV?$vector\@VBlockStateCommandParam\@\@V?$allocator\@VBlockStateCommandParam\@\@\@std\@\@\@std\@\@HAEAVCommandOutput\@\@\@Z
     */
    MCAPI class CommandBlockNameResult
    resolveBlock(std::vector<class BlockStateCommandParam> const&, int32_t, class CommandOutput&) const;
    /**
     * @symbol ?resolveBlock\@CommandBlockName\@\@QEBA?AVCommandBlockNameResult\@\@H\@Z
     */
    MCAPI class CommandBlockNameResult resolveBlock(int32_t) const;
    /**
     * @symbol
     * ?resolveBlock\@CommandBlockName\@\@QEBA?AVCommandBlockNameResult\@\@AEBV?$vector\@VBlockStateCommandParam\@\@V?$allocator\@VBlockStateCommandParam\@\@\@std\@\@\@std\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI class CommandBlockNameResult
    resolveBlock(std::vector<class BlockStateCommandParam> const&, class CommandOutput&) const;
    // NOLINTEND
};
