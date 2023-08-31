#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/level/block/utils/BlockColor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ItemColorUtil {
// NOLINTBEGIN
/**
 * @symbol ?fromBlockColor\@ItemColorUtil\@\@YA?AW4ItemColor\@\@W4BlockColor\@\@\@Z
 */
MCAPI enum class ItemColor fromBlockColor(enum class BlockColor);
/**
 * @symbol ?fromColor\@ItemColorUtil\@\@YA?AW4ItemColor\@\@AEBVColor\@mce\@\@\@Z
 */
MCAPI enum class ItemColor fromColor(class mce::Color const&);
/**
 * @symbol ?fromInt\@ItemColorUtil\@\@YA?AW4ItemColor\@\@H\@Z
 */
MCAPI enum class ItemColor fromInt(int32_t);
/**
 * @symbol ?getColor\@ItemColorUtil\@\@YA?AVColor\@mce\@\@W4ItemColor\@\@\@Z
 */
MCAPI class mce::Color getColor(enum class ItemColor);
/**
 * @symbol
 * ?getName\@ItemColorUtil\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ItemColor\@\@\@Z
 */
MCAPI std::string const& getName(enum class ItemColor);
/**
 * @symbol
 * ?getNameMixedCase\@ItemColorUtil\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ItemColor\@\@\@Z
 */
MCAPI std::string const& getNameMixedCase(enum class ItemColor);
/**
 * @symbol ?getRGBColor\@ItemColorUtil\@\@YAHW4ItemColor\@\@\@Z
 */
MCAPI int32_t getRGBColor(enum class ItemColor);
// NOLINTEND

}; // namespace ItemColorUtil
