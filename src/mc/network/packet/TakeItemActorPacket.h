#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class TakeItemActorPacket : public ::Packet {

public:
    ActorRuntimeID mItemId;  // this+0x30
    ActorRuntimeID mActorId; // this+0x38

    // prevent constructor by default
    TakeItemActorPacket& operator=(TakeItemActorPacket const&) = delete;
    TakeItemActorPacket(TakeItemActorPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@TakeItemActorPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@TakeItemActorPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@TakeItemActorPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@TakeItemActorPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TAKEITEMACTORPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TakeItemActorPacket();
#endif
    /**
     * @symbol ??0TakeItemActorPacket\@\@QEAA\@XZ
     */
    MCAPI TakeItemActorPacket();
    /**
     * @symbol ??0TakeItemActorPacket\@\@QEAA\@VActorRuntimeID\@\@0\@Z
     */
    MCAPI TakeItemActorPacket(class ActorRuntimeID, class ActorRuntimeID);
    // NOLINTEND
};
