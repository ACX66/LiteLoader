#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AdjustmentEffect.h"
#include "mc/world/level/biome/VanillaBiomeTypes.h"
#include "mc/world/level/levelgen/structure/PoolElementStructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class AncientCityPiece : public ::PoolElementStructurePiece {

public:
    // prevent constructor by default
    AncientCityPiece& operator=(AncientCityPiece const&) = delete;
    AncientCityPiece(AncientCityPiece const&)            = delete;
    AncientCityPiece()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 13
     * @symbol
     * ?generateHeightAtPosition\@AncientCityPiece\@\@UEBAHAEBVBlockPos\@\@AEAVDimension\@\@AEAVBlockVolume\@\@AEAV?$unordered_map\@VChunkPos\@\@V?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual int32_t
    generateHeightAtPosition(class BlockPos const&, class Dimension&, class BlockVolume&, std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<int16_t>>>&)
        const;
    /**
     * @vftbl 14
     * @symbol ?getSupportBlock\@AncientCityPiece\@\@UEBAPEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class Block const* getSupportBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /**
     * @vftbl 15
     * @symbol ?getBeardStabilizeBlock\@AncientCityPiece\@\@UEBAAEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const& getBeardStabilizeBlock(class Block const&) const;
    /**
     * @vftbl 16
     * @symbol ?getTerrainAdjustmentEffect\@AncientCityPiece\@\@UEBA?AW4AdjustmentEffect\@\@XZ
     */
    virtual enum class AdjustmentEffect getTerrainAdjustmentEffect() const;
    /**
     * @symbol
     * ?addPieces\@AncientCityPiece\@\@SAXVBlockPos\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@AEAVJigsawStructureRegistry\@\@W4VanillaBiomeTypes\@\@AEAVDimension\@\@\@Z
     */
    MCAPI static void
    addPieces(class BlockPos, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, class JigsawStructureRegistry&, enum class VanillaBiomeTypes, class Dimension&);
    // NOLINTEND
};
