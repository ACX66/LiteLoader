#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/HashType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

namespace Crypto::Hash {
// NOLINTBEGIN
/**
 * @symbol
 * ?hash\@Hash\@Crypto\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4HashType\@12\@PEBXI\@Z
 */
MCAPI std::string hash(enum class Crypto::Hash::HashType, void const*, uint32_t);
/**
 * @symbol
 * ?hash\@Hash\@Crypto\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4HashType\@12\@AEBV34\@\@Z
 */
MCAPI std::string hash(enum class Crypto::Hash::HashType, std::string const&);
// NOLINTEND

}; // namespace Crypto::Hash
