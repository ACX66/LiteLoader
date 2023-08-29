#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/raknet/BitStream.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class RakDataOutput : public ::BytesDataOutput {

public:
  RakNet::BitStream *mBitStream;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_destructor_-1
     */
    virtual ~RakDataOutput();
    /**
     * @vftbl 1
     * @symbol ?writeString\@BytesDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void writeString(std::string_view);
    /**
     * @vftbl 2
     * @symbol ?writeLongString\@BytesDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void writeLongString(std::string_view);
    /**
     * @vftbl 3
     * @symbol ?writeFloat\@BigEndianStringByteOutput\@\@UEAAXM\@Z
     */
    virtual void writeFloat(float);
    /**
     * @vftbl 4
     * @symbol ?writeDouble\@BigEndianStringByteOutput\@\@UEAAXN\@Z
     */
    virtual void writeDouble(double);
    /**
     * @vftbl 5
     * @symbol ?writeByte\@BytesDataOutput\@\@UEAAXD\@Z
     */
    virtual void writeByte(char);
    /**
     * @vftbl 6
     * @symbol ?writeShort\@BigEndianStringByteOutput\@\@UEAAXF\@Z
     */
    virtual void writeShort(short);
    /**
     * @vftbl 7
     * @symbol ?writeInt\@BigEndianStringByteOutput\@\@UEAAXH\@Z
     */
    virtual void writeInt(int);
    /**
     * @vftbl 8
     * @symbol ?writeLongLong\@BigEndianStringByteOutput\@\@UEAAX_J\@Z
     */
    virtual void writeLongLong(int64_t);
    /**
     * @vftbl 9
     * @symbol ?writeBytes\@RakDataOutput\@\@UEAAXPEBX_K\@Z
     */
    virtual void writeBytes(void const*, uint64_t);
    // NOLINTEND
};
