#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/ITaskQueuePortContext.h"
#include "mc/enums/ApiId.h"
#include "mc/enums/TaskQueuePortStatus.h"
#include "mc/enums/XTaskQueuePort.h"

class TaskQueuePortContextImpl : public ::ITaskQueuePortContext {

public:
    // prevent constructor by default
    TaskQueuePortContextImpl& operator=(TaskQueuePortContextImpl const&) = delete;
    TaskQueuePortContextImpl(TaskQueuePortContextImpl const&)            = delete;
    TaskQueuePortContextImpl()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?AddRef\@TaskQueuePortContextImpl\@\@UEAAIXZ
     */
    virtual uint32_t AddRef();
    /**
     * @vftbl 1
     * @symbol ?Release\@TaskQueuePortContextImpl\@\@UEAAIXZ
     */
    virtual uint32_t Release();
    /**
     * @vftbl 2
     * @symbol ?QueryApi\@TaskQueuePortContextImpl\@\@UEAAJW4ApiId\@\@PEAPEAX\@Z
     */
    virtual long QueryApi(enum class ApiId, void**);
    /**
     * @vftbl 3
     * @symbol ?GetType\@TaskQueuePortContextImpl\@\@UEAA?AW4XTaskQueuePort\@\@XZ
     */
    virtual enum class XTaskQueuePort GetType();
    /**
     * @vftbl 4
     * @symbol ?GetStatus\@TaskQueuePortContextImpl\@\@UEAA?AW4TaskQueuePortStatus\@\@XZ
     */
    virtual enum class TaskQueuePortStatus GetStatus();
    /**
     * @vftbl 5
     * @symbol ?GetQueue\@TaskQueuePortContextImpl\@\@UEAAPEAUITaskQueue\@\@XZ
     */
    virtual struct ITaskQueue* GetQueue();
    /**
     * @vftbl 6
     * @symbol ?GetPort\@TaskQueuePortContextImpl\@\@UEAAPEAUITaskQueuePort\@\@XZ
     */
    virtual struct ITaskQueuePort* GetPort();
    /**
     * @vftbl 7
     * @symbol ?TrySetStatus\@TaskQueuePortContextImpl\@\@UEAA_NW4TaskQueuePortStatus\@\@0\@Z
     */
    virtual bool TrySetStatus(enum class TaskQueuePortStatus, enum class TaskQueuePortStatus);
    /**
     * @vftbl 8
     * @symbol ?SetStatus\@TaskQueuePortContextImpl\@\@UEAAXW4TaskQueuePortStatus\@\@\@Z
     */
    virtual void SetStatus(enum class TaskQueuePortStatus);
    /**
     * @vftbl 9
     * @symbol ?ItemQueued\@TaskQueuePortContextImpl\@\@UEAAXXZ
     */
    virtual void ItemQueued();
    /**
     * @vftbl 10
     * @symbol ?AddSuspend\@TaskQueuePortContextImpl\@\@UEAA_NXZ
     */
    virtual bool AddSuspend();
    /**
     * @vftbl 11
     * @symbol ?RemoveSuspend\@TaskQueuePortContextImpl\@\@UEAA_NXZ
     */
    virtual bool RemoveSuspend();
    // NOLINTEND
};
