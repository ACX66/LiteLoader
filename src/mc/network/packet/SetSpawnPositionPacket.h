#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/SpawnPositionType.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/AutomaticID.h"

class SetSpawnPositionPacket : public ::Packet {

public:
    // prevent constructor by default
    SetSpawnPositionPacket& operator=(SetSpawnPositionPacket const&) = delete;
    SetSpawnPositionPacket(SetSpawnPositionPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SetSpawnPositionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SetSpawnPositionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SetSpawnPositionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SetSpawnPositionPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETSPAWNPOSITIONPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SetSpawnPositionPacket();
#endif
    /**
     * @symbol
     * ??0SetSpawnPositionPacket\@\@QEAA\@W4SpawnPositionType\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SetSpawnPositionPacket(enum class SpawnPositionType, DimensionType, class BlockPos const&);
    /**
     * @symbol ??0SetSpawnPositionPacket\@\@QEAA\@XZ
     */
    MCAPI SetSpawnPositionPacket();
    /**
     * @symbol ??0SetSpawnPositionPacket\@\@QEAA\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI SetSpawnPositionPacket(DimensionType, class BlockPos const&, class BlockPos const&);
    // NOLINTEND
};
