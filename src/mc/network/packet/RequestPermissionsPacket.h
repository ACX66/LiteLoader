#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"

class RequestPermissionsPacket : public ::Packet {

public:
    ActorUniqueID         mTargetPlayerId;        // this+0x30
    PlayerPermissionLevel mPlayerPermissions;     // this+0x38
    unsigned short        mCustomPermissionFlags; // this+0x3A

    // prevent constructor by default
    RequestPermissionsPacket& operator=(RequestPermissionsPacket const&) = delete;
    RequestPermissionsPacket(RequestPermissionsPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@RequestPermissionsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@RequestPermissionsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@RequestPermissionsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@RequestPermissionsPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ??0RequestPermissionsPacket\@\@QEAA\@XZ
     */
    MCAPI RequestPermissionsPacket();
    /**
     * @symbol ?getCustomAbilityValue\@RequestPermissionsPacket\@\@QEBA_NW4AbilitiesIndex\@\@\@Z
     */
    MCAPI bool getCustomAbilityValue(enum class AbilitiesIndex) const;
    /**
     * @symbol ?getPlayerPermissions\@RequestPermissionsPacket\@\@QEBA?AW4PlayerPermissionLevel\@\@XZ
     */
    MCAPI enum class PlayerPermissionLevel getPlayerPermissions() const;
    /**
     * @symbol ?getTargetPlayerId\@RequestPermissionsPacket\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getTargetPlayerId() const;
    // NOLINTEND
};
