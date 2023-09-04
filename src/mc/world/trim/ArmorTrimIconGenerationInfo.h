#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ArmorTrimIconGenerationInfo {
public:
    // prevent constructor by default
    ArmorTrimIconGenerationInfo& operator=(ArmorTrimIconGenerationInfo const&) = delete;
    ArmorTrimIconGenerationInfo(ArmorTrimIconGenerationInfo const&)            = delete;
    ArmorTrimIconGenerationInfo()                                              = delete;

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildTrimmedArmorName@ArmorTrimIconGenerationInfo@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@0@Z
    MCAPI static std::string buildTrimmedArmorName(std::string const&, std::string const&);

    // NOLINTEND
};
