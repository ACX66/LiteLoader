#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityRegistryRefTraits.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/entity/gamerefs_entity/StackResultStorageEntity.h"

class WeakStorageEntity {
public:
    // WeakStorageEntity inner types define
    enum class EmptyInit : int32_t {
        NoValue = 0,
    };

    enum class VariadicInit : int32_t {
        NonAmbiguous = 0,
    };

    WeakRefT<EntityRegistryRefTraits> mRegistry;
    class EntityId                    mEntity;

    template <class Entity, bool IncludeRemoved = false>
    constexpr Entity* tryUnwrap() {
        return StackResultStorageEntity(*this).tryUnwrap<Entity, IncludeRemoved>();
    }

public:
    // prevent constructor by default
    WeakStorageEntity& operator=(WeakStorageEntity const&) = delete;
    WeakStorageEntity(WeakStorageEntity const&)            = delete;
    WeakStorageEntity()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??8WeakStorageEntity\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class WeakStorageEntity const&) const;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ??0WeakStorageEntity\@\@IEAA\@AEBVStackResultStorageEntity\@\@\@Z
     */
    MCAPI WeakStorageEntity(class StackResultStorageEntity const&);
    /**
     * @symbol ??0WeakStorageEntity\@\@IEAA\@AEBVOwnerStorageEntity\@\@\@Z
     */
    MCAPI WeakStorageEntity(class OwnerStorageEntity const&);
    /**
     * @symbol ??0WeakStorageEntity\@\@IEAA\@W4VariadicInit\@0\@AEBVEntityContext\@\@\@Z
     */
    MCAPI WeakStorageEntity(enum class WeakStorageEntity::VariadicInit, class EntityContext const&);
    /**
     * @symbol ??0WeakStorageEntity\@\@IEAA\@W4EmptyInit\@0\@\@Z
     */
    MCAPI WeakStorageEntity(enum class WeakStorageEntity::EmptyInit);
    /**
     * @symbol ?_isSet\@WeakStorageEntity\@\@IEBA_NXZ
     */
    MCAPI bool _isSet() const;
    /**
     * @symbol ?_reset\@WeakStorageEntity\@\@IEAAXXZ
     */
    MCAPI void _reset();
    // NOLINTEND
};
