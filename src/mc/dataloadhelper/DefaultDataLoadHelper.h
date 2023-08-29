#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/DataLoadHelperType.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/InternalComponentRegistry.h"
#include "mc/world/level/levelgen/structure/DataLoadHelper.h"

class DefaultDataLoadHelper : public ::DataLoadHelper {

public:
    // prevent constructor by default
    DefaultDataLoadHelper& operator=(DefaultDataLoadHelper const&) = delete;
    DefaultDataLoadHelper(DefaultDataLoadHelper const&)            = delete;
    DefaultDataLoadHelper()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 15
     * @symbol
     * ?loadActorInternalComponentInfo\@DefaultDataLoadHelper\@\@UEAAPEBUComponentInfo\@InternalComponentRegistry\@\@AEBV?$unordered_map\@VHashedString\@\@UComponentInfo\@InternalComponentRegistry\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@5\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@UComponentInfo\@InternalComponentRegistry\@\@\@std\@\@\@5\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@5\@\@Z
     */
    virtual struct InternalComponentRegistry::ComponentInfo const*
    loadActorInternalComponentInfo(std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo> const&, std::string const&);
    /**
     * @vftbl 16
     * @symbol ?getType\@DefaultDataLoadHelper\@\@UEBA?AW4DataLoadHelperType\@\@XZ
     */
    virtual enum class DataLoadHelperType getType() const;
    /**
     * @vftbl 17
     * @symbol ?shouldResetTime\@DefaultDataLoadHelper\@\@UEAA_NXZ
     */
    virtual bool shouldResetTime();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEFAULTDATALOADHELPER
    /**
     * @symbol ?loadActorUniqueID\@DefaultDataLoadHelper\@\@UEAA?AUActorUniqueID\@\@U2\@\@Z
     */
    MCVAPI struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID);
    /**
     * @symbol ?loadBlockPosition\@DefaultDataLoadHelper\@\@UEAA?AVBlockPos\@\@AEBV2\@\@Z
     */
    MCVAPI class BlockPos loadBlockPosition(class BlockPos const&);
    /**
     * @symbol ?loadBlockPositionOffset\@DefaultDataLoadHelper\@\@UEAA?AVBlockPos\@\@AEBV2\@\@Z
     */
    MCVAPI class BlockPos loadBlockPositionOffset(class BlockPos const&);
    /**
     * @symbol ?loadDirection\@DefaultDataLoadHelper\@\@UEAA?AW4Type\@Direction\@\@W423\@\@Z
     */
    MCVAPI enum class Direction::Type loadDirection(enum class Direction::Type);
    /**
     * @symbol ?loadDirection\@DefaultDataLoadHelper\@\@UEAA?AVVec3\@\@AEBV2\@\@Z
     */
    MCVAPI class Vec3 loadDirection(class Vec3 const&);
    /**
     * @symbol ?loadFacingID\@DefaultDataLoadHelper\@\@UEAAEE\@Z
     */
    MCVAPI unsigned char loadFacingID(unsigned char);
    /**
     * @symbol ?loadMirror\@DefaultDataLoadHelper\@\@UEAA?AW4Mirror\@\@W42\@\@Z
     */
    MCVAPI enum class Mirror loadMirror(enum class Mirror);
    /**
     * @symbol ?loadOwnerID\@DefaultDataLoadHelper\@\@UEAA?AUActorUniqueID\@\@U2\@\@Z
     */
    MCVAPI struct ActorUniqueID loadOwnerID(struct ActorUniqueID);
    /**
     * @symbol ?loadPosition\@DefaultDataLoadHelper\@\@UEAA?AVVec3\@\@AEBV2\@\@Z
     */
    MCVAPI class Vec3 loadPosition(class Vec3 const&);
    /**
     * @symbol ?loadRotation\@DefaultDataLoadHelper\@\@UEAA?AW4Rotation\@\@W42\@\@Z
     */
    MCVAPI enum class Rotation loadRotation(enum class Rotation);
    /**
     * @symbol ?loadRotationDegreesX\@DefaultDataLoadHelper\@\@UEAAMM\@Z
     */
    MCVAPI float loadRotationDegreesX(float);
    /**
     * @symbol ?loadRotationDegreesY\@DefaultDataLoadHelper\@\@UEAAMM\@Z
     */
    MCVAPI float loadRotationDegreesY(float);
    /**
     * @symbol ?loadRotationRadiansX\@DefaultDataLoadHelper\@\@UEAAMM\@Z
     */
    MCVAPI float loadRotationRadiansX(float);
    /**
     * @symbol ?loadRotationRadiansY\@DefaultDataLoadHelper\@\@UEAAMM\@Z
     */
    MCVAPI float loadRotationRadiansY(float);
#endif
    // NOLINTEND
};
