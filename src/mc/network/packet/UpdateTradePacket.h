#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

class UpdateTradePacket : public ::Packet {

public:
    ContainerID   mContainerId;       // this+0x30
    ContainerType mType;              // this+0x31
    std::string   mDisplayName;       // this+0x38
    int           mSize;              // this+0x58
    int           mTraderTier;        // this+0x5C
    ActorUniqueID mEntityUniqueID;    // this+0x60
    ActorUniqueID mLastTradingPlayer; // this+0x68
    CompoundTag   mData;              // this+0x70
    bool          mUseNewTradeScreen; // this+0x88
    bool          mUsingEconomyTrade; // this+0x89

    // prevent constructor by default
    UpdateTradePacket& operator=(UpdateTradePacket const&) = delete;
    UpdateTradePacket(UpdateTradePacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateTradePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@UpdateTradePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateTradePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@UpdateTradePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATETRADEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateTradePacket();
#endif
    /**
     * @symbol ??0UpdateTradePacket\@\@QEAA\@XZ
     */
    MCAPI UpdateTradePacket();
    /**
     * @symbol
     * ??0UpdateTradePacket\@\@QEAA\@W4ContainerID\@\@W4ContainerType\@\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAVCompoundTag\@\@AEBUActorUniqueID\@\@4H_N5\@Z
     */
    MCAPI UpdateTradePacket(
        enum class ContainerID,
        enum class ContainerType,
        int,
        std::string const&,
        class CompoundTag&&,
        struct ActorUniqueID const&,
        struct ActorUniqueID const&,
        int,
        bool,
        bool
    );
    // NOLINTEND
};
