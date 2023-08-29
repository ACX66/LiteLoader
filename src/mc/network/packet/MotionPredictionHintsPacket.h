#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MotionPredictionHintsPacket : public ::Packet {

public:
    // prevent constructor by default
    MotionPredictionHintsPacket& operator=(MotionPredictionHintsPacket const&) = delete;
    MotionPredictionHintsPacket(MotionPredictionHintsPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@MotionPredictionHintsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@MotionPredictionHintsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@MotionPredictionHintsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@MotionPredictionHintsPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOTIONPREDICTIONHINTSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MotionPredictionHintsPacket();
#endif
    /**
     * @symbol ??0MotionPredictionHintsPacket\@\@QEAA\@AEBVActor\@\@\@Z
     */
    MCAPI MotionPredictionHintsPacket(class Actor const&);
    /**
     * @symbol ??0MotionPredictionHintsPacket\@\@QEAA\@XZ
     */
    MCAPI MotionPredictionHintsPacket();
    // NOLINTEND
};
