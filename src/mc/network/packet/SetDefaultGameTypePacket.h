#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/GameType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetDefaultGameTypePacket : public ::Packet {

public:
    // prevent constructor by default
    SetDefaultGameTypePacket& operator=(SetDefaultGameTypePacket const&) = delete;
    SetDefaultGameTypePacket(SetDefaultGameTypePacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SetDefaultGameTypePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SetDefaultGameTypePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SetDefaultGameTypePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SetDefaultGameTypePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ??0SetDefaultGameTypePacket\@\@QEAA\@XZ
     */
    MCAPI SetDefaultGameTypePacket();
    /**
     * @symbol ??0SetDefaultGameTypePacket\@\@QEAA\@W4GameType\@\@\@Z
     */
    MCAPI SetDefaultGameTypePacket(enum class GameType);
    // NOLINTEND
};
