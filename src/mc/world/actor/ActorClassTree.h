#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorCategory.h"
#include "mc/entity/utilities/ActorType.h"

class ActorClassTree {

public:
    // prevent constructor by default
    ActorClassTree& operator=(ActorClassTree const&) = delete;
    ActorClassTree(ActorClassTree const&)            = delete;
    ActorClassTree()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getEntityTypeIdLegacy\@ActorClassTree\@\@SA?AW4ActorType\@\@W42\@\@Z
     */
    MCAPI static enum class ActorType getEntityTypeIdLegacy(enum class ActorType);
    /**
     * @symbol ?hasCategory\@ActorClassTree\@\@SA_NAEBW4ActorCategory\@\@W42\@\@Z
     */
    MCAPI static bool hasCategory(enum class ActorCategory const&, enum class ActorCategory);
    /**
     * @symbol ?isHangingEntity\@ActorClassTree\@\@SA_NAEBVActor\@\@\@Z
     */
    MCAPI static bool isHangingEntity(class Actor const&);
    /**
     * @symbol ?isInstanceOf\@ActorClassTree\@\@SA_NAEBVActor\@\@W4ActorType\@\@\@Z
     */
    MCAPI static bool isInstanceOf(class Actor const&, enum class ActorType);
    /**
     * @symbol ?isMob\@ActorClassTree\@\@SA_NW4ActorType\@\@\@Z
     */
    MCAPI static bool isMob(enum class ActorType);
    /**
     * @symbol ?isMobLegacy\@ActorClassTree\@\@SA_NW4ActorType\@\@\@Z
     */
    MCAPI static bool isMobLegacy(enum class ActorType);
    /**
     * @symbol ?isOfType\@ActorClassTree\@\@SA_NW4ActorType\@\@0\@Z
     */
    MCAPI static bool isOfType(enum class ActorType, enum class ActorType);
    /**
     * @symbol ?isTypeInstanceOf\@ActorClassTree\@\@SA_NW4ActorType\@\@0\@Z
     */
    MCAPI static bool isTypeInstanceOf(enum class ActorType, enum class ActorType);
    // NOLINTEND
};
