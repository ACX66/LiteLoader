#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/DataLoadHelperType.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/InternalComponentRegistry.h"
#include "mc/world/level/levelgen/structure/DataLoadHelper.h"

class StructureDataLoadHelper : public ::DataLoadHelper {

public:
    // prevent constructor by default
    StructureDataLoadHelper& operator=(StructureDataLoadHelper const&) = delete;
    StructureDataLoadHelper(StructureDataLoadHelper const&)            = delete;
    StructureDataLoadHelper()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_destructor_-1
     */
    virtual ~StructureDataLoadHelper();
    /**
     * @vftbl 1
     * @symbol ?loadPosition\@StructureDataLoadHelper\@\@UEAA?AVVec3\@\@AEBV2\@\@Z
     */
    virtual class Vec3 loadPosition(class Vec3 const&);
    /**
     * @vftbl 2
     * @symbol ?loadBlockPosition\@StructureDataLoadHelper\@\@UEAA?AVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class BlockPos loadBlockPosition(class BlockPos const&);
    /**
     * @vftbl 3
     * @symbol ?loadBlockPositionOffset\@StructureDataLoadHelper\@\@UEAA?AVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class BlockPos loadBlockPositionOffset(class BlockPos const&);
    /**
     * @vftbl 4
     * @symbol ?loadRotationDegreesX\@StructureDataLoadHelper\@\@UEAAMM\@Z
     */
    virtual float loadRotationDegreesX(float);
    /**
     * @vftbl 5
     * @symbol ?loadRotationDegreesY\@StructureDataLoadHelper\@\@UEAAMM\@Z
     */
    virtual float loadRotationDegreesY(float);
    /**
     * @vftbl 6
     * @symbol ?loadRotationRadiansX\@StructureDataLoadHelper\@\@UEAAMM\@Z
     */
    virtual float loadRotationRadiansX(float);
    /**
     * @vftbl 7
     * @symbol ?loadRotationRadiansY\@StructureDataLoadHelper\@\@UEAAMM\@Z
     */
    virtual float loadRotationRadiansY(float);
    /**
     * @vftbl 8
     * @symbol ?loadFacingID\@StructureDataLoadHelper\@\@UEAAEE\@Z
     */
    virtual unsigned char loadFacingID(unsigned char);
    /**
     * @vftbl 9
     * @symbol ?loadDirection\@StructureDataLoadHelper\@\@UEAA?AVVec3\@\@AEBV2\@\@Z
     */
    virtual class Vec3 loadDirection(class Vec3 const&);
    /**
     * @vftbl 10
     * @symbol ?loadDirection\@StructureDataLoadHelper\@\@UEAA?AW4Type\@Direction\@\@W423\@\@Z
     */
    virtual enum class Direction::Type loadDirection(enum class Direction::Type);
    /**
     * @vftbl 11
     * @symbol ?loadRotation\@StructureDataLoadHelper\@\@UEAA?AW4Rotation\@\@W42\@\@Z
     */
    virtual enum class Rotation loadRotation(enum class Rotation);
    /**
     * @vftbl 12
     * @symbol ?loadMirror\@StructureDataLoadHelper\@\@UEAA?AW4Mirror\@\@W42\@\@Z
     */
    virtual enum class Mirror loadMirror(enum class Mirror);
    /**
     * @vftbl 13
     * @symbol ?loadActorUniqueID\@StructureDataLoadHelper\@\@UEAA?AUActorUniqueID\@\@U2\@\@Z
     */
    virtual struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID);
    /**
     * @vftbl 14
     * @symbol ?loadOwnerID\@StructureDataLoadHelper\@\@UEAA?AUActorUniqueID\@\@U2\@\@Z
     */
    virtual struct ActorUniqueID loadOwnerID(struct ActorUniqueID);
    /**
     * @vftbl 15
     * @symbol
     * ?loadActorInternalComponentInfo\@StructureDataLoadHelper\@\@UEAAPEBUComponentInfo\@InternalComponentRegistry\@\@AEBV?$unordered_map\@VHashedString\@\@UComponentInfo\@InternalComponentRegistry\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@5\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@UComponentInfo\@InternalComponentRegistry\@\@\@std\@\@\@5\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@5\@\@Z
     */
    virtual struct InternalComponentRegistry::ComponentInfo const*
    loadActorInternalComponentInfo(std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo> const&, std::string const&);
    /**
     * @vftbl 16
     * @symbol ?getType\@StructureDataLoadHelper\@\@UEBA?AW4DataLoadHelperType\@\@XZ
     */
    virtual enum class DataLoadHelperType getType() const;
    /**
     * @vftbl 17
     * @symbol ?shouldResetTime\@StructureDataLoadHelper\@\@UEAA_NXZ
     */
    virtual bool shouldResetTime();
    /**
     * @vftbl 18
     * @symbol ?_generateNewID\@StructureDataLoadHelper\@\@MEAA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID _generateNewID();
    /**
     * @symbol
     * ??0StructureDataLoadHelper\@\@QEAA\@AEBVBlockPos\@\@0AEBVVec3\@\@UActorUniqueID\@\@W4Rotation\@\@W4Mirror\@\@AEAVLevel\@\@\@Z
     */
    MCAPI
    StructureDataLoadHelper(class BlockPos const&, class BlockPos const&, class Vec3 const&, struct ActorUniqueID, enum class Rotation, enum class Mirror, class Level&);
    // NOLINTEND
};
