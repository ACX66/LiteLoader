#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Side.h"

namespace PaddleBehaviorUtility {
// NOLINTBEGIN
// symbol: ?computePaddleForcesBasedOnGaze@PaddleBehaviorUtility@@YAXAEAVVec3@@AEAM1MMM@Z
MCAPI void computePaddleForcesBasedOnGaze(class Vec3&, float&, float&, float, float, float);

// symbol: ?setPaddleForce@PaddleBehaviorUtility@@YA_NAEAUPaddle@@AEBUTick@@M@Z
MCAPI bool setPaddleForce(struct Paddle&, struct Tick const&, float);

// symbol: ?setPaddleState@PaddleBehaviorUtility@@YA_NAEAUPaddle@@AEAVSynchedActorData@@_NW4Side@@UTick@@22@Z
MCAPI bool setPaddleState(struct Paddle&, class SynchedActorData&, bool, ::Side, struct Tick, bool, bool);
// NOLINTEND

}; // namespace PaddleBehaviorUtility
