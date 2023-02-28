#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::block {

/**
 * @brief Block break event.
 * @details This event is called when a player breaks a block.
 */
class BlockBreakEvent : public Event<BlockBreakEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);

    explicit BlockBreakEvent(Player* player, const BlockInstance& blockInstance);

    LL_DELETE_COPY(BlockBreakEvent);
    LL_DELETE_MOVE(BlockBreakEvent);
};

} // namespace ll::event::block