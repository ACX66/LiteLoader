#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class UnlockedRecipesPacket : public ::Packet {
public:
    // UnlockedRecipesPacket inner types define
    enum class PacketType : int {
        Empty                    = 0x0,
        InitiallyUnlockedRecipes = 0x1,
        NewlyUnlockedRecipes     = 0x2,
        RemoveUnlockedRecipes    = 0x3,
        RemoveAllUnlockedRecipes = 0x4,
    };

public:
    PacketType mPacketType; // this+0x30

    // prevent constructor by default
    UnlockedRecipesPacket& operator=(UnlockedRecipesPacket const&) = delete;
    UnlockedRecipesPacket(UnlockedRecipesPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UnlockedRecipesPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@UnlockedRecipesPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UnlockedRecipesPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@UnlockedRecipesPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UNLOCKEDRECIPESPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UnlockedRecipesPacket();
#endif
    /**
     * @symbol ??0UnlockedRecipesPacket\@\@QEAA\@XZ
     */
    MCAPI UnlockedRecipesPacket();
    /**
     * @symbol
     * ??0UnlockedRecipesPacket\@\@QEAA\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@W4PacketType\@0\@\@Z
     */
    MCAPI UnlockedRecipesPacket(std::vector<std::string>, enum class UnlockedRecipesPacket::PacketType);
    // NOLINTEND
};
