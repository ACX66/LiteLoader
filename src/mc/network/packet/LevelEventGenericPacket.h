#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/events/LevelEvent.h"
#include "mc/network/packet/Packet.h"

class LevelEventGenericPacket : public ::Packet {

public:
    int32_t                          mEventId; // this+0x30
    std::unique_ptr<CompoundTag> mData;    // this+0x38

    // prevent constructor by default
    LevelEventGenericPacket& operator=(LevelEventGenericPacket const&) = delete;
    LevelEventGenericPacket(LevelEventGenericPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@LevelEventGenericPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@LevelEventGenericPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@LevelEventGenericPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@LevelEventGenericPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELEVENTGENERICPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelEventGenericPacket();
#endif
    /**
     * @symbol ??0LevelEventGenericPacket\@\@QEAA\@XZ
     */
    MCAPI LevelEventGenericPacket();
    /**
     * @symbol ??0LevelEventGenericPacket\@\@QEAA\@W4LevelEvent\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI LevelEventGenericPacket(enum class LevelEvent, class CompoundTag const&);
    // NOLINTEND
};
