#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class InteractPacket : public ::Packet {
public:
    // InteractPacket inner types define
    enum class Action : unsigned char {
        Invalid        = 0x0,
        StopRiding     = 0x3,
        InteractUpdate = 0x4,
        NpcOpen        = 0x5,
        OpenInventory  = 0x6,
    };

public:
    InteractPacket::Action mAction;   // this+0x30
    ActorRuntimeID         mTargetId; // this+0x38
    Vec3                   mPos;      // this+0x40

    // prevent constructor by default
    InteractPacket& operator=(InteractPacket const&) = delete;
    InteractPacket(InteractPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@InteractPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@InteractPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@InteractPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@InteractPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INTERACTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~InteractPacket();
#endif
    /**
     * @symbol ??0InteractPacket\@\@QEAA\@W4Action\@0\@VActorRuntimeID\@\@AEBVVec3\@\@\@Z
     */
    MCAPI InteractPacket(enum class InteractPacket::Action, class ActorRuntimeID, class Vec3 const&);
    /**
     * @symbol ??0InteractPacket\@\@QEAA\@XZ
     */
    MCAPI InteractPacket();
    // NOLINTEND
};
