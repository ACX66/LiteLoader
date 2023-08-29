#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetScoreboardIdentityPacket : public ::Packet {

public:
    // prevent constructor by default
    SetScoreboardIdentityPacket& operator=(SetScoreboardIdentityPacket const&) = delete;
    SetScoreboardIdentityPacket(SetScoreboardIdentityPacket const&)            = delete;
    SetScoreboardIdentityPacket()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SetScoreboardIdentityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SetScoreboardIdentityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SetScoreboardIdentityPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SetScoreboardIdentityPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETSCOREBOARDIDENTITYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SetScoreboardIdentityPacket();
#endif
    /**
     * @symbol ?change\@SetScoreboardIdentityPacket\@\@SA?AV1\@AEBUScoreboardId\@\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI static class SetScoreboardIdentityPacket change(struct ScoreboardId const&, struct PlayerScoreboardId const&);
    // NOLINTEND
};
