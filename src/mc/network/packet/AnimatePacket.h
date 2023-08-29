#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/ActorRuntimeID.h"

class AnimatePacket : public ::Packet {
public:
    // AnimatePacket inner types define
    enum class Action {
        NoAction         = 0x0,
        Swing            = 0x1,
        WakeUp           = 0x3,
        CriticalHit      = 0x4,
        MagicCriticalHit = 0x5,
        RowRight         = 0x80,
        RowLeft          = 0x81,
    };

    ActorRuntimeID        mRuntimeId; // this+0x30
    AnimatePacket::Action mAction;    // this+0x38
    float                 mData;      // this+0x3C

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AnimatePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@AnimatePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@AnimatePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@AnimatePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANIMATEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AnimatePacket();
#endif
    /**
     * @symbol ??0AnimatePacket\@\@QEAA\@W4Action\@0\@AEAVActor\@\@\@Z
     */
    MCAPI AnimatePacket(enum class AnimatePacket::Action, class Actor&);
    /**
     * @symbol ??0AnimatePacket\@\@QEAA\@XZ
     */
    MCAPI AnimatePacket();
    /**
     * @symbol ??0AnimatePacket\@\@QEAA\@W4Action\@0\@VActorRuntimeID\@\@M\@Z
     */
    MCAPI AnimatePacket(enum class AnimatePacket::Action, class ActorRuntimeID, float);
    /**
     * @symbol ??0AnimatePacket\@\@QEAA\@W4Action\@0\@VActorRuntimeID\@\@\@Z
     */
    MCAPI AnimatePacket(enum class AnimatePacket::Action, class ActorRuntimeID);
    // NOLINTEND
};
