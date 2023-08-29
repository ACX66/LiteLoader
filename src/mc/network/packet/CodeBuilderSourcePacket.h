#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/codebuilder/Category.h"
#include "mc/codebuilder/Operation.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CodeBuilderSourcePacket : public ::Packet {

public:
    CodeBuilderStorageQueryOptions::Operation mOperation; // this+0x30
    CodeBuilderStorageQueryOptions::Category  mCategory;  // this+0x31
    std::string                                mValue;     // this+0x38

    // prevent constructor by default
    CodeBuilderSourcePacket& operator=(CodeBuilderSourcePacket const&) = delete;
    CodeBuilderSourcePacket(CodeBuilderSourcePacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CodeBuilderSourcePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@CodeBuilderSourcePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CodeBuilderSourcePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@CodeBuilderSourcePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ??0CodeBuilderSourcePacket\@\@QEAA\@XZ
     */
    MCAPI CodeBuilderSourcePacket();
    // NOLINTEND
};
