#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SpawnExperienceOrbPacket : public ::Packet {

public:
    Vec3 mPos;   // this+0x30
    int  mCount; // this+0x3C

    // prevent constructor by default
    SpawnExperienceOrbPacket& operator=(SpawnExperienceOrbPacket const&) = delete;
    SpawnExperienceOrbPacket(SpawnExperienceOrbPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SpawnExperienceOrbPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SpawnExperienceOrbPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SpawnExperienceOrbPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SpawnExperienceOrbPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNEXPERIENCEORBPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SpawnExperienceOrbPacket();
#endif
    /**
     * @symbol ??0SpawnExperienceOrbPacket\@\@QEAA\@AEBVVec3\@\@H\@Z
     */
    MCAPI SpawnExperienceOrbPacket(class Vec3 const&, int32_t);
    /**
     * @symbol ??0SpawnExperienceOrbPacket\@\@QEAA\@XZ
     */
    MCAPI SpawnExperienceOrbPacket();
    // NOLINTEND
};
