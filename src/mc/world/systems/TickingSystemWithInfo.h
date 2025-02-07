#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickingSystemWithInfo {
public:
    // prevent constructor by default
    TickingSystemWithInfo& operator=(TickingSystemWithInfo const&) = delete;
    TickingSystemWithInfo(TickingSystemWithInfo const&)            = delete;
    TickingSystemWithInfo()                                        = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0TickingSystemWithInfo@@QEAA@$$QEAU0@@Z
    MCAPI TickingSystemWithInfo(struct TickingSystemWithInfo&&);

    // symbol: ??1TickingSystemWithInfo@@QEAA@XZ
    MCAPI ~TickingSystemWithInfo();

    // NOLINTEND
};
