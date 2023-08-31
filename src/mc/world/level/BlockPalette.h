#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/buffer_span_mut.h"

class BlockPalette {
public:
    // BlockPalette inner types declare
    // clang-format off
    struct ConstructorToken;
    // clang-format on

    // BlockPalette inner types define
    enum class PaletteType : int32_t {
        Sequential = 0x0,
        Hashed     = 0x1,
    };

    struct ConstructorToken {
    };

    std::mutex                                      mLegacyBlockStatesConversionWarningMutex;
    std::set<std::pair<int32_t, int32_t>>                   mLegacyBlockStatesConversionWarningSet;
    std::map<std::string, class BlockLegacy const*> mNameLookup;
    std::vector<class Block const*>                 mBlockFromNetworkId;
    class Level*                                    mLevel;

public:
    // prevent constructor by default
    BlockPalette& operator=(BlockPalette const&) = delete;
    BlockPalette(BlockPalette const&)            = delete;
    BlockPalette()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getPaletteType\@BlockPalette\@\@UEAA?AW4PaletteType\@1\@XZ
     */
    virtual enum class BlockPalette::PaletteType getPaletteType();
    /**
     * @vftbl 2
     * @symbol ?appendBlock\@BlockPalette\@\@UEAAXAEBVBlock\@\@\@Z
     */
    virtual void appendBlock(class Block const&);
    /**
     * @vftbl 3
     * @symbol ?getBlock\@BlockPalette\@\@UEBAAEBVBlock\@\@AEBI\@Z
     */
    virtual class Block const& getBlock(uint32_t const&) const;
    /**
     * @vftbl 4
     * @symbol ?assignBlockNetworkId\@BlockPalette\@\@MEBAXAEBVBlock\@\@_K\@Z
     */
    virtual void assignBlockNetworkId(class Block const&, uint64_t) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKPALETTE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockPalette();
#endif
    /**
     * @symbol ??0BlockPalette\@\@QEAA\@UConstructorToken\@0\@\@Z
     */
    MCAPI BlockPalette(struct BlockPalette::ConstructorToken);
    /**
     * @symbol ??0BlockPalette\@\@QEAA\@AEAVLevel\@\@\@Z
     */
    MCAPI BlockPalette(class Level&);
    /**
     * @symbol ?cacheBlockComponentData\@BlockPalette\@\@QEAAXXZ
     */
    MCAPI void cacheBlockComponentData();
    /**
     * @symbol ?convertLegacyBlock\@BlockPalette\@\@QEBAAEBVBlock\@\@UBlockID\@\@G\@Z
     */
    MCAPI class Block const& convertLegacyBlock(struct BlockID, uint16_t) const;
    /**
     * @symbol
     * ?convertLegacyBlocks\@BlockPalette\@\@QEBA_NV?$buffer_span_mut\@PEBVBlock\@\@\@\@V?$buffer_span\@UBlockID\@\@\@\@V?$buffer_span\@UNibblePair\@\@\@\@_K\@Z
     */
    MCAPI bool convertLegacyBlocks( // NOLINT
        class buffer_span_mut<class Block const*>,
        class buffer_span<struct BlockID>,
        class buffer_span<struct NibblePair>,
        uint64_t
    ) const;
    /**
     * @symbol ?getBlock\@BlockPalette\@\@QEBAAEBVBlock\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI class Block const& getBlock(class CompoundTag const&) const;
    /**
     * @symbol ?getBlockFromLegacyData\@BlockPalette\@\@QEBAAEBVBlock\@\@UNewBlockID\@\@I\@Z
     */
    MCAPI class Block const& getBlockFromLegacyData(struct NewBlockID, uint32_t) const;
    /**
     * @symbol
     * ?getBlockLegacy\@BlockPalette\@\@QEBAPEBVBlockLegacy\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class BlockLegacy const* getBlockLegacy(std::string const&) const;
    /**
     * @symbol ?initFromBlockDefinitions\@BlockPalette\@\@QEAAXXZ
     */
    MCAPI void initFromBlockDefinitions();
    /**
     * @symbol ?switchBlock\@BlockPalette\@\@QEBAAEBVBlock\@\@AEBV2\@AEBVBlockLegacy\@\@\@Z
     */
    MCAPI class Block const& switchBlock(class Block const&, class BlockLegacy const&) const;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?shouldWarnFor\@BlockPalette\@\@IEBA_NUNewBlockID\@\@G\@Z
     */
    MCAPI bool shouldWarnFor(struct NewBlockID, uint16_t) const;
    // NOLINTEND
};
