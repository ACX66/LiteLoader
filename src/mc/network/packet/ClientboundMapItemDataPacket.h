#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/saveddata/maps/MapDecoration.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/saveddata/maps/MapItemTrackedActor.h"

class ClientboundMapItemDataPacket : public ::Packet {
public:
    // ClientboundMapItemDataPacket inner types define
    enum class Type : int32_t {
        Invalid          = 0,
        TextureUpdate    = 1 << 1,
        DecorationUpdate = 1 << 2,
        Creation         = 1 << 3,
    };

    std::vector<ActorUniqueID>                  mMapIds;      // this+0x30
    int8_t                                 mScale;       // this+0x48
    std::vector<std::shared_ptr<MapDecoration>> mDecorations; // this+0x50
    std::vector<MapItemTrackedActor::UniqueId>  mUniqueIds;   // this+0x68
    int32_t                                         mStartX;      // this+0x80
    int32_t                                         mStartY;      // this+0x84
    class BlockPos                              mMapOrigin;   // this+0x88
    uint8_t                               mDimension;   // this+0x94
    int32_t                                         mWidth;       // this+0x98
    int32_t                                         mHeight;      // this+0x9C
    Type                                        mType;        // this+0xA0
    std::vector<uint32_t>                   mMapPixels;   // this+0xA8
    bool                                        mLocked;      // this+0xC0

public:
    // prevent constructor by default
    ClientboundMapItemDataPacket& operator=(ClientboundMapItemDataPacket const&) = delete;
    ClientboundMapItemDataPacket(ClientboundMapItemDataPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ClientboundMapItemDataPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ClientboundMapItemDataPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ClientboundMapItemDataPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ClientboundMapItemDataPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLIENTBOUNDMAPITEMDATAPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ClientboundMapItemDataPacket();
#endif
    /**
     * @symbol ??0ClientboundMapItemDataPacket\@\@QEAA\@V?$not_null\@PEAVMapItemSavedData\@\@\@gsl\@\@AEAVLevel\@\@\@Z
     */
    MCAPI ClientboundMapItemDataPacket(class gsl::not_null<class MapItemSavedData*>, class Level&);
    /**
     * @symbol
     * ??0ClientboundMapItemDataPacket\@\@QEAA\@UActorUniqueID\@\@CAEBV?$vector\@U?$pair\@UUniqueId\@MapItemTrackedActor\@\@V?$shared_ptr\@VMapDecoration\@\@\@std\@\@\@std\@\@V?$allocator\@U?$pair\@UUniqueId\@MapItemTrackedActor\@\@V?$shared_ptr\@VMapDecoration\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@V?$buffer_span\@I\@\@HHHHV?$AutomaticID\@VDimension\@\@H\@\@_NAEBVBlockPos\@\@\@Z
     */
    MCAPI
    ClientboundMapItemDataPacket(struct ActorUniqueID, int8_t, std::vector<std::pair<struct MapItemTrackedActor::UniqueId, std::shared_ptr<class MapDecoration>>> const&, class buffer_span<uint32_t>, int32_t, int32_t, int32_t, int32_t, DimensionType, bool, class BlockPos const&);
    /**
     * @symbol ??0ClientboundMapItemDataPacket\@\@QEAA\@XZ
     */
    MCAPI ClientboundMapItemDataPacket();
    // NOLINTEND
};
