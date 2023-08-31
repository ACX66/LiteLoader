#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/Color.h"
#include "mc/math/Vec3.h"


// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ClientboundDebugRendererPacket : public ::Packet {
public:
    // ClientboundDebugRendererPacket inner types define
    enum class Type : uint32_t {
        Invalid            = 0x0,
        ClearDebugMarkers  = 0x1,
        AddDebugMarkerCube = 0x2,
    };

    struct DebugMarkerData {
        std::string               text;     // this+0x0
        Vec3                      position; // this+0x20
        mce::Color                color;    // this+0x2C
        std::chrono::milliseconds duration; // this+0x40
    };

public:
    ClientboundDebugRendererPacket::Type                           mType;            // this+0x30
    std::optional<ClientboundDebugRendererPacket::DebugMarkerData> mDebugMarkerData; // this+0x38

    // prevent constructor by default
    ClientboundDebugRendererPacket& operator=(ClientboundDebugRendererPacket const&) = delete;
    ClientboundDebugRendererPacket(ClientboundDebugRendererPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ClientboundDebugRendererPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ClientboundDebugRendererPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ClientboundDebugRendererPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ClientboundDebugRendererPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLIENTBOUNDDEBUGRENDERERPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ClientboundDebugRendererPacket();
#endif
    /**
     * @symbol
     * ??0ClientboundDebugRendererPacket\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVColor\@mce\@\@AEBVVec3\@\@V?$duration\@_JU?$ratio\@$00$0DOI\@\@std\@\@\@chrono\@2\@\@Z
     */
    MCAPI
    ClientboundDebugRendererPacket(std::string, class mce::Color const&, class Vec3 const&, std::chrono::milliseconds);
    /**
     * @symbol ??0ClientboundDebugRendererPacket\@\@QEAA\@W4Type\@0\@\@Z
     */
    MCAPI ClientboundDebugRendererPacket(enum class ClientboundDebugRendererPacket::Type);
    /**
     * @symbol ??0ClientboundDebugRendererPacket\@\@QEAA\@XZ
     */
    MCAPI ClientboundDebugRendererPacket();
    // NOLINTEND
};
