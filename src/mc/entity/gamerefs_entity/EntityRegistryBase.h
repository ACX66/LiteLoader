#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityId.h"

class EntityRegistryBase {

public:
    void*                                 mCanModifyDuringView;
    entt::basic_registry<class EntityId>& mRegistry;
    EntityId                              mViewedEntity;
    bool                                  mViewUsesViewedContext;
    uint32_t                          mId;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0EntityRegistryBase\@\@QEAA\@AEAV?$basic_registry\@VEntityId\@\@V?$allocator\@VEntityId\@\@\@std\@\@\@entt\@\@\@Z
     */
    MCAPI EntityRegistryBase(class entt::basic_registry<class EntityId, std::allocator<class EntityId>>&);
    /**
     * @symbol ?isValidEntity\@EntityRegistryBase\@\@QEBA_NAEBVEntityContextBase\@\@\@Z
     */
    MCAPI bool isValidEntity(class EntityContextBase const&) const;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_assertValidRegistry\@EntityRegistryBase\@\@IEBAXAEBVEntityContextBase\@\@\@Z
     */
    MCAPI void _assertValidRegistry(class EntityContextBase const&) const;
    // NOLINTEND

protected:
    // NOLINTBEGIN
    /**
     * @symbol ?mRegistryCount\@EntityRegistryBase\@\@1U?$atomic\@I\@std\@\@A
     */
    MCAPI static std::atomic<uint32_t> mRegistryCount;
    // NOLINTEND
};
