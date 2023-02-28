#include <llapi/event/EventManager.h>
#include <llapi/event/player/PlayerOpenContainerEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/Level.hpp>
#include <llapi/mc/Player.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>

namespace ll::event::player {

PlayerOpenContainerEvent::PlayerOpenContainerEvent(Player* player, BlockInstance blockInstance)
: player(player), blockInstance(blockInstance), container(blockInstance.getContainer()) {}

LL_GETTER_IMPL(PlayerOpenContainerEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(PlayerOpenContainerEvent, BlockInstance, blockInstance, getBlockInstance)
LL_GETTER_IMPL(PlayerOpenContainerEvent, Container*, container, getContainer)

using EventManager = EventManager<PlayerOpenContainerEvent>;

LL_AUTO_INSTANCE_HOOK(
    PlayerOpenContainerEventHook,
    HookPriority::Normal,
    "?onEvent@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUPlayerOpenContainerEvent@@@Z",
    __int64,
    void* a2
) {
    using ll::memory::dAccess;

    Actor* actor = LL_SYMBOL_CALL("??$tryUnwrap@VActor@@$$V@WeakEntityRef@@QEBAPEAVActor@@XZ", Actor*, void*)(a2);
    if (actor->isPlayer()) {
        BlockPos                 bp = dAccess<BlockPos>(a2, 28);
        PlayerOpenContainerEvent event((Player*)actor, Level::getBlockInstance(bp, actor->getDimensionId()));
        if (!event.getPlayer())
            return 0;

        EventManager::fireEvent(event);
        if (event.isCancelled()) {
            return 0;
        }
    }
    return origin(a2);
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerOpenContainerEvent)