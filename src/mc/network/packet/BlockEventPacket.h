#pragma once

#include "../NetworkBlockPosition.h"
#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class BlockEventPacket : public ::Packet {

public:
    NetworkBlockPosition mPos; // this+0x2c
    int                  mB0;  // this+0x38
    int                  mB1;  // this+0x3c

    // prevent constructor by default
    BlockEventPacket& operator=(BlockEventPacket const&) = delete;
    BlockEventPacket(BlockEventPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@BlockEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@BlockEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@BlockEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@BlockEventPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKEVENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockEventPacket();
#endif
    /**
     * @symbol ??0BlockEventPacket\@\@QEAA\@XZ
     */
    MCAPI BlockEventPacket();
    /**
     * @symbol ??0BlockEventPacket\@\@QEAA\@VBlockPos\@\@HH\@Z
     */
    MCAPI BlockEventPacket(class BlockPos, int, int);
    // NOLINTEND
};
