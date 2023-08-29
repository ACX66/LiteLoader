#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/trim/TrimMaterial.h"
#include "mc/world/trim/TrimPattern.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class TrimDataPacket : public ::Packet {

public:
    std::vector<TrimPattern>  mTrimPatterns;  // this+0x30
    std::vector<TrimMaterial> mTrimMaterials; // this+0x48

    // prevent constructor by default
    TrimDataPacket& operator=(TrimDataPacket const&) = delete;
    TrimDataPacket(TrimDataPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@TrimDataPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@TrimDataPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@TrimDataPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@TrimDataPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRIMDATAPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TrimDataPacket();
#endif
    /**
     * @symbol ??0TrimDataPacket\@\@QEAA\@XZ
     */
    MCAPI TrimDataPacket();
    /**
     * @symbol
     * ?prepareFromRegistries\@TrimDataPacket\@\@SA?AV1\@AEBVTrimPatternRegistry\@\@AEBVTrimMaterialRegistry\@\@\@Z
     */
    MCAPI static class TrimDataPacket
    prepareFromRegistries(class TrimPatternRegistry const&, class TrimMaterialRegistry const&);
    // NOLINTEND
};
