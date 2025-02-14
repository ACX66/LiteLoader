#include "mc/server/SimulatedPlayer.h"
#include "liteloader/api/GlobalServiceAPI.h"
#include "liteloader/api/utils/RNG.h"
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/world/level/Level.h"

optional_ref<SimulatedPlayer> SimulatedPlayer::create(
    std::string const& name,
    class Vec3 const&  pos,
    DimensionType      dimID,
    class Vec2 const&  rotation
) {
    OwnerPtrT<EntityRefTraits> ownerPtr =
        Global<ServerNetworkHandler>->createSimulatedPlayer(name, '-' + std::to_string(RNG::rand<uint64>()));
    auto player = ownerPtr.tryUnwrap<SimulatedPlayer>();

    if (player == nullptr) {
        return nullptr;
    }

    player->postLoad(true);
    player->getLevel().addUser(std::move(ownerPtr));

    if (pos == Vec3::MIN) {
        player->setLocalPlayerAsInitialized();
        player->doInitialSpawn();
        return player;
    }

    player->setRespawnReady(Vec3(0, 32768, 0));

    player->setRespawnPosition(pos, dimID);

    player->setLocalPlayerAsInitialized();
    player->doInitialSpawn();

    player->teleport(pos, dimID, rotation);

    return player;
}

bool SimulatedPlayer::simulateDestroyLookAt(float handLength) {

    auto hitResult = traceRay(handLength, false);

    if (hitResult.mType != HitResultType::Tile) {
        return false;
    }
    return simulateDestroyBlock(hitResult.mBlockPos, (ScriptModuleMinecraft::ScriptFacing)hitResult.mFacing);
}