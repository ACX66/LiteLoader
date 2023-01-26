/**
 * @file  RakNet.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class NetworkIdentifier;
#undef BEFORE_EXTRA

/**
 * @brief MC namespace RakNet.
 *
 */
namespace RakNet {

#define AFTER_EXTRA
// Add Member There
    enum class StartupResult;
    class RakNetSocket2;
    struct SplitPacketChannel;
    class BitStream;
    struct Packet;
    class RakNetSocket2;
    class RakPeerInterface;
    class SimpleMutex;
    struct SocketDescriptor;
    struct SplitPacketChannel;

    struct SystemAddress {
        char filler[17 * 8]; // uncertain?
        MCAPI const char* ToString(bool, char) const;
    };
    struct RakNetGUID {
        uint64_t unk;
        short unk8;
    };
    struct AddressOrGUID {
        RakNetGUID guid;
        SystemAddress adr;
    };

    class RakPeer {
    public:
        RakPeer(RakPeer const&) = delete;
        RakPeer(RakPeer&&) = delete;
        SystemAddress getAdr(NetworkIdentifier const& ni) {
            RakNetGUID const& guid = dAccess<RakNetGUID>(&ni, 8);
            return RakPeer::GetSystemAddressFromGuid(guid);
        }
        MCAPI virtual SystemAddress GetSystemAddressFromGuid(struct RakNet::RakNetGUID) const;
        MCAPI virtual int GetAveragePing(struct RakNet::AddressOrGUID);
        MCAPI virtual int GetLastPing(struct RakNet::AddressOrGUID) const;
        MCAPI virtual int GetLowestPing(struct RakNet::AddressOrGUID) const;
    };
#undef AFTER_EXTRA
    /**
     * @symbol ?ConnectionAttemptLoop@RakNet@@YAIPEAX@Z
     * @hash   1478097333
     */
    MCAPI unsigned int ConnectionAttemptLoop(void *);
    /**
     * @symbol ?GetTime@RakNet@@YA_KXZ
     * @hash   -940008704
     */
    MCAPI unsigned __int64 GetTime();
    /**
     * @symbol ?GetTimeMS@RakNet@@YAIXZ
     * @hash   -1948155093
     */
    MCAPI unsigned int GetTimeMS();
    /**
     * @symbol ?GetTimeUS@RakNet@@YA_KXZ
     * @hash   421567404
     */
    MCAPI unsigned __int64 GetTimeUS();
    /**
     * @symbol ?NonNumericHostString@RakNet@@YA_NPEBD@Z
     * @hash   -45305319
     */
    MCAPI bool NonNumericHostString(char const *);
    /**
     * @symbol ?ProcessNetworkPacket@RakNet@@YAXUSystemAddress@1@PEBDHPEAVRakPeer@1@PEAVRakNetSocket2@1@_KAEAVBitStream@1@@Z
     * @hash   889494527
     */
    MCAPI void ProcessNetworkPacket(struct RakNet::SystemAddress, char const *, int, class RakNet::RakPeer *, class RakNet::RakNetSocket2 *, unsigned __int64, class RakNet::BitStream &);
    /**
     * @symbol ?ProcessOfflineNetworkPacket@RakNet@@YA_NUSystemAddress@1@PEBDHPEAVRakPeer@1@PEAVRakNetSocket2@1@PEA_N_K@Z
     * @hash   893350614
     */
    MCAPI bool ProcessOfflineNetworkPacket(struct RakNet::SystemAddress, char const *, int, class RakNet::RakPeer *, class RakNet::RakNetSocket2 *, bool *, unsigned __int64);
    /**
     * @symbol ?SplitPacketChannelComp@RakNet@@YAHAEBGAEBQEAUSplitPacketChannel@1@@Z
     * @hash   -456465070
     */
    MCAPI int SplitPacketChannelComp(unsigned short const &, struct RakNet::SplitPacketChannel *const &);
    /**
     * @symbol ?UNASSIGNED_RAKNET_GUID@RakNet@@3URakNetGUID@1@B
     * @hash   1356773319
     */
    MCAPI extern struct RakNet::RakNetGUID const UNASSIGNED_RAKNET_GUID;
    /**
     * @symbol ?UNASSIGNED_SYSTEM_ADDRESS@RakNet@@3USystemAddress@1@B
     * @hash   1499697001
     */
    MCAPI extern struct RakNet::SystemAddress const UNASSIGNED_SYSTEM_ADDRESS;
    /**
     * @symbol ?UpdateNetworkLoop@RakNet@@YAIPEAX@Z
     * @hash   1189695625
     */
    MCAPI unsigned int UpdateNetworkLoop(void *);
    /**
     * @symbol ?UpdateTCPInterfaceLoop@RakNet@@YAIPEAX@Z
     * @hash   -1753564605
     */
    MCAPI unsigned int UpdateTCPInterfaceLoop(void *);
    /**
     * @symbol ?_DLMallocDirectMMap@RakNet@@YAPEAX_K@Z
     * @hash   -948146234
     */
    MCAPI void * _DLMallocDirectMMap(unsigned __int64);
    /**
     * @symbol ?_DLMallocMMap@RakNet@@YAPEAX_K@Z
     * @hash   1725834598
     */
    MCAPI void * _DLMallocMMap(unsigned __int64);
    /**
     * @symbol ?_DLMallocMUnmap@RakNet@@YAHPEAX_K@Z
     * @hash   367386561
     */
    MCAPI int _DLMallocMUnmap(void *, unsigned __int64);
    /**
     * @symbol ?_RakFree@RakNet@@YAXPEAX@Z
     * @hash   1433501660
     */
    MCAPI void _RakFree(void *);
    /**
     * @symbol ?_RakFree_Ex@RakNet@@YAXPEAXPEBDI@Z
     * @hash   464086533
     */
    MCAPI void _RakFree_Ex(void *, char const *, unsigned int);
    /**
     * @symbol ?_RakMalloc@RakNet@@YAPEAX_K@Z
     * @hash   -1853739564
     */
    MCAPI void * _RakMalloc(unsigned __int64);
    /**
     * @symbol ?_RakMalloc_Ex@RakNet@@YAPEAX_KPEBDI@Z
     * @hash   1701586141
     */
    MCAPI void * _RakMalloc_Ex(unsigned __int64, char const *, unsigned int);
    /**
     * @symbol ?_RakRealloc@RakNet@@YAPEAXPEAX_K@Z
     * @hash   -844363340
     */
    MCAPI void * _RakRealloc(void *, unsigned __int64);
    /**
     * @symbol ?_RakRealloc_Ex@RakNet@@YAPEAXPEAX_KPEBDI@Z
     * @hash   -2095904667
     */
    MCAPI void * _RakRealloc_Ex(void *, unsigned __int64, char const *, unsigned int);

};