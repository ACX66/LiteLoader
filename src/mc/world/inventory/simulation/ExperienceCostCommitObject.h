#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCommitObject.h"

class ExperienceCostCommitObject : public ::ContainerValidationCommitObject {

public:
    // prevent constructor by default
    ExperienceCostCommitObject& operator=(ExperienceCostCommitObject const&) = delete;
    ExperienceCostCommitObject(ExperienceCostCommitObject const&)            = delete;
    ExperienceCostCommitObject()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?append\@ExperienceCostCommitObject\@\@UEAA_NPEAVContainerValidationCommitObject\@\@\@Z
     */
    virtual bool append(class ContainerValidationCommitObject*);
    /**
     * @vftbl 2
     * @symbol ?canCommit\@ExperienceCostCommitObject\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canCommit(class ContainerScreenContext const&) const;
    /**
     * @vftbl 3
     * @symbol ?commit\@ExperienceCostCommitObject\@\@UEAAXAEBVContainerScreenContext\@\@\@Z
     */
    virtual void commit(class ContainerScreenContext const&);
    /**
     * @symbol ??0ExperienceCostCommitObject\@\@QEAA\@H\@Z
     */
    MCAPI ExperienceCostCommitObject(int32_t);
    // NOLINTEND
};
