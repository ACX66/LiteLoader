#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class BookEditPacket : public ::Packet {

public:
    // prevent constructor by default
    BookEditPacket& operator=(BookEditPacket const&) = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@BookEditPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@BookEditPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@BookEditPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@BookEditPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOOKEDITPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BookEditPacket();
#endif
    /**
     * @symbol ??0BookEditPacket\@\@QEAA\@XZ
     */
    MCAPI BookEditPacket();
    /**
     * @symbol ??0BookEditPacket\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI BookEditPacket(class BookEditPacket const&);
    /**
     * @symbol ?getPage\@BookEditPacket\@\@QEBA?AUPageContent\@\@XZ
     */
    MCAPI struct PageContent getPage() const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_readPage\@BookEditPacket\@\@AEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, std::error_code> _readPage(class ReadOnlyBinaryStream&);
    /**
     * @symbol ?_writePage\@BookEditPacket\@\@AEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void _writePage(class BinaryStream&) const;
    // NOLINTEND
};
