#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace VolumeInstanceData { struct VolumeStorageDefinition; }
// clang-format on

namespace VolumeInstanceData {
// NOLINTBEGIN
// symbol: ?bindVolumeStorageType@VolumeInstanceData@@YAXXZ
MCAPI void bindVolumeStorageType();

// symbol:
// ?deserialize@VolumeInstanceData@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@AEAVEntityContext@@@Z
MCAPI void deserialize(std::string const&, class CompoundTag const&, class EntityContext&);

// symbol:
// ?getIdentifier@VolumeInstanceData@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z
MCAPI std::string const& getIdentifier(class CompoundTag const&);

// symbol: ?serialize@VolumeInstanceData@@YA?AVCompoundTag@@AEBVEntityContext@@@Z
MCAPI class CompoundTag serialize(class EntityContext const&);
// NOLINTEND

}; // namespace VolumeInstanceData
