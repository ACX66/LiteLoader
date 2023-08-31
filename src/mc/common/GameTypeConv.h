#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"

namespace GameTypeConv {
// NOLINTBEGIN
/**
 * @symbol
 * ?gameTypeToNonLocString\@GameTypeConv\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4GameType\@\@\@Z
 */
MCAPI std::string gameTypeToNonLocString(enum class GameType);
/**
 * @symbol
 * ?gameTypeToString\@GameTypeConv\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4GameType\@\@\@Z
 */
MCAPI std::string gameTypeToString(enum class GameType);
/**
 * @symbol ?intToGameType\@GameTypeConv\@\@YA?AW4GameType\@\@H\@Z
 */
MCAPI enum class GameType intToGameType(int32_t);
/**
 * @symbol ?intToGameTypeForCommands\@GameTypeConv\@\@YA?AW4GameType\@\@H\@Z
 */
MCAPI enum class GameType intToGameTypeForCommands(int32_t);
/**
 * @symbol
 * ?stringToGameType\@GameTypeConv\@\@YA?AW4GameType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI enum class GameType stringToGameType(std::string const&);
// NOLINTEND

}; // namespace GameTypeConv
