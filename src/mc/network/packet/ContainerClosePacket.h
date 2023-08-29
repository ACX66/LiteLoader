#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/containers/ContainerID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class ContainerClosePacket : public ::Packet {

public:
    ContainerID mContainerId;          // this+0x30
    bool        mServerInitiatedClose; // this+0x31

    // prevent constructor by default
    ContainerClosePacket& operator=(ContainerClosePacket const&) = delete;
    ContainerClosePacket(ContainerClosePacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ContainerClosePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ContainerClosePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ContainerClosePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ContainerClosePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERCLOSEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerClosePacket();
#endif
    /**
     * @symbol ??0ContainerClosePacket\@\@QEAA\@W4ContainerID\@\@_N\@Z
     */
    MCAPI ContainerClosePacket(enum class ContainerID, bool);
    /**
     * @symbol ??0ContainerClosePacket\@\@QEAA\@XZ
     */
    MCAPI ContainerClosePacket();
    // NOLINTEND
};
