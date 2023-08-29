#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CommandOutputPacket : public ::Packet {

public:
    // prevent constructor by default
    CommandOutputPacket& operator=(CommandOutputPacket const&) = delete;
    CommandOutputPacket(CommandOutputPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CommandOutputPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@CommandOutputPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CommandOutputPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@CommandOutputPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDOUTPUTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CommandOutputPacket();
#endif
    /**
     * @symbol ??0CommandOutputPacket\@\@QEAA\@AEBVCommandOrigin\@\@AEBVCommandOutput\@\@\@Z
     */
    MCAPI CommandOutputPacket(class CommandOrigin const&, class CommandOutput const&);
    /**
     * @symbol ??0CommandOutputPacket\@\@QEAA\@XZ
     */
    MCAPI CommandOutputPacket();
    // NOLINTEND
};
