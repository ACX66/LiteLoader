#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/AgentAnimation.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AgentAnimationPacket : public ::Packet {

public:
    // prevent constructor by default
    AgentAnimationPacket& operator=(AgentAnimationPacket const&) = delete;
    AgentAnimationPacket(AgentAnimationPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AgentAnimationPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@AgentAnimationPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@AgentAnimationPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@AgentAnimationPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENTANIMATIONPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AgentAnimationPacket();
#endif
    /**
     * @symbol ??0AgentAnimationPacket\@\@QEAA\@W4AgentAnimation\@\@VActorRuntimeID\@\@\@Z
     */
    MCAPI AgentAnimationPacket(enum class AgentAnimation, class ActorRuntimeID);
    /**
     * @symbol ??0AgentAnimationPacket\@\@QEAA\@XZ
     */
    MCAPI AgentAnimationPacket();
    // NOLINTEND
};
