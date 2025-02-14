#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakString; }
namespace RakNet { struct NetworkAdapter; }
// clang-format on

namespace RakNet {

class SocketLayer {
public:
    // prevent constructor by default
    SocketLayer& operator=(SocketLayer const&) = delete;
    SocketLayer(SocketLayer const&)            = delete;
    SocketLayer()                              = delete;

public:
    // NOLINTBEGIN
    // symbol: ?GetMyAdapters@SocketLayer@RakNet@@SAXQEAUNetworkAdapter@2@@Z
    MCAPI static void GetMyAdapters(struct RakNet::NetworkAdapter* const);

    // symbol: ?GetSubNetForSocketAndIp@SocketLayer@RakNet@@SA?AVRakString@2@V32@@Z
    MCAPI static class RakNet::RakString GetSubNetForSocketAndIp(class RakNet::RakString);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mPlatformAdapterOverride@SocketLayer@RakNet@@0V?$function@$$A6A?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ@std@@A
    MCAPI static std::function<std::vector<std::string>(void)> mPlatformAdapterOverride;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    inline auto& $mPlatformAdapterOverride() { return mPlatformAdapterOverride; }

    // NOLINTEND
};

}; // namespace RakNet
