#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::CustomTLS {

class TLSManager {
public:
    // prevent constructor by default
    TLSManager& operator=(TLSManager const&) = delete;
    TLSManager(TLSManager const&)            = delete;
    TLSManager()                             = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getSharedInstance@TLSManager@CustomTLS@Threading@Bedrock@@SAAEAV1234@XZ
    MCAPI static class Bedrock::Threading::CustomTLS::TLSManager& getSharedInstance();

    // NOLINTEND
};

}; // namespace Bedrock::Threading::CustomTLS
