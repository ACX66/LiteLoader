#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/TcpProxy.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

class RakTcpProxy : public ::TcpProxy {

public:
    // prevent constructor by default
    RakTcpProxy& operator=(RakTcpProxy const&) = delete;
    RakTcpProxy(RakTcpProxy const&)            = delete;
    RakTcpProxy()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?start\@RakTcpProxy\@\@UEAA_NGGG\@Z
     */
    virtual bool start(uint16_t, uint16_t, uint16_t);
    /**
     * @vftbl 2
     * @symbol
     * ?connect\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    virtual struct RakNet::SystemAddress connect(std::string const&, uint16_t);
    /**
     * @vftbl 3
     * @symbol ?send\@RakTcpProxy\@\@UEAAXPEBDIUSystemAddress\@RakNet\@\@\@Z
     */
    virtual void send(char const*, uint32_t, struct RakNet::SystemAddress);
    /**
     * @vftbl 4
     * @symbol ?close\@RakTcpProxy\@\@UEAAXUSystemAddress\@RakNet\@\@\@Z
     */
    virtual void close(struct RakNet::SystemAddress);
    /**
     * @vftbl 5
     * @symbol ?packetsAvailable\@RakTcpProxy\@\@UEAA_NXZ
     */
    virtual bool packetsAvailable();
    /**
     * @vftbl 6
     * @symbol ?nextPacket\@RakTcpProxy\@\@UEAAPEAUPacket\@RakNet\@\@XZ
     */
    virtual struct RakNet::Packet* nextPacket();
    /**
     * @vftbl 7
     * @symbol ?deallocatePacket\@RakTcpProxy\@\@UEAAXPEAUPacket\@RakNet\@\@\@Z
     */
    virtual void deallocatePacket(struct RakNet::Packet*);
    /**
     * @vftbl 8
     * @symbol ?nextCompletedConnectionAttempt\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@XZ
     */
    virtual struct RakNet::SystemAddress nextCompletedConnectionAttempt();
    /**
     * @vftbl 9
     * @symbol ?nextFailedConnectionAttempt\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@XZ
     */
    virtual struct RakNet::SystemAddress nextFailedConnectionAttempt();
    /**
     * @vftbl 10
     * @symbol ?nextLostConnection\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@XZ
     */
    virtual struct RakNet::SystemAddress nextLostConnection();
    // NOLINTEND
};
