#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AttributeInstance;
class DataItem;
class MobEffectInstance;
// clang-format on

namespace ActorContainerDiffHelperImpl::Compare {
// NOLINTBEGIN
/**
 * @symbol
 * ?_attributeSnapshotLessThan\@Compare\@ActorContainerDiffHelperImpl\@\@YA_NV?$not_null\@PEBVAttributeInstance\@\@\@gsl\@\@0\@Z
 */
MCAPI bool
    _attributeSnapshotLessThan(class gsl::not_null<class AttributeInstance const*>, class gsl::not_null<class AttributeInstance const*>);
/**
 * @symbol
 * ?_dataItemLessThan\@Compare\@ActorContainerDiffHelperImpl\@\@YA_NV?$not_null\@PEBVDataItem\@\@\@gsl\@\@V34\@\@Z
 */
MCAPI bool _dataItemLessThan(class gsl::not_null<class DataItem const*>, class gsl::not_null<class DataItem const*>);
/**
 * @symbol
 * ?_mobEffectInstanceLessThan\@Compare\@ActorContainerDiffHelperImpl\@\@YA_NV?$not_null\@PEBVMobEffectInstance\@\@\@gsl\@\@0\@Z
 */
MCAPI bool
    _mobEffectInstanceLessThan(class gsl::not_null<class MobEffectInstance const*>, class gsl::not_null<class MobEffectInstance const*>);
// NOLINTEND

}; // namespace ActorContainerDiffHelperImpl::Compare
