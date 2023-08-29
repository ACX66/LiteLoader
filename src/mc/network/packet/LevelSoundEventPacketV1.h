#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/math/Vec3.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LevelSoundEventPacketV1 : public ::Packet {

public:
    LevelSoundEvent mEventId;    // this+0x30
    Vec3            mPos;        // this+0x34
    int             mData;       // this+0x40
    ActorType       mEntityType; // this+0x44
    bool            mIsBabyMob;  // this+0x48
    bool            mIsGlobal;   // this+0x49

    // prevent constructor by default
    LevelSoundEventPacketV1& operator=(LevelSoundEventPacketV1 const&) = delete;
    LevelSoundEventPacketV1(LevelSoundEventPacketV1 const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@LevelSoundEventPacketV1\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@LevelSoundEventPacketV1\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@LevelSoundEventPacketV1\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@LevelSoundEventPacketV1\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ??0LevelSoundEventPacketV1\@\@QEAA\@XZ
     */
    MCAPI LevelSoundEventPacketV1();
    // NOLINTEND
};
