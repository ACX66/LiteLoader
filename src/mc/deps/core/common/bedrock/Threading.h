#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/AsyncErrc.h"
#include "mc/deps/core/common/bedrock/AsyncStatus.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/WorkerTaskStats.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
namespace Bedrock::Threading { class AssignedThread; }
namespace Bedrock::Threading { class OSThreadPriority; }
namespace Bedrock::Threading { class SharedRecursiveMutexBase; }
namespace Bedrock::Threading::AsyncResult { class ToXAsyncBlock; }
namespace Bedrock::Threading::CustomTLS { class TLSManager; }
struct XAsyncBlock;
struct XTaskQueueObject;
// clang-format on

namespace Bedrock::Threading {
using Mutex = std::mutex;
// NOLINTBEGIN
// symbol: ?AdoptLock@Threading@Bedrock@@3AEBUadopt_lock_t@std@@EB
MCAPI extern std::adopt_lock_t const& AdoptLock;

// symbol: ?DeferLock@Threading@Bedrock@@3AEBUdefer_lock_t@std@@EB
MCAPI extern std::defer_lock_t const& DeferLock;

// symbol: ?IS_RUNNING_STATICS@Threading@Bedrock@@YA_NXZ
MCAPI bool IS_RUNNING_STATICS();

// symbol: ?MakeErrorCode@Threading@Bedrock@@YA?AVerror_code@std@@W4AsyncErrc@12@@Z
MCAPI std::error_code MakeErrorCode(::Bedrock::Threading::AsyncErrc);

// symbol: ?TryToLock@Threading@Bedrock@@3AEBUtry_to_lock_t@std@@EB
MCAPI extern std::try_to_lock_t const& TryToLock;

// symbol: ?getDefaultWorkerPool@Threading@Bedrock@@YA?AV?$not_null@PEAVWorkerPool@@@gsl@@XZ
MCAPI gsl::not_null<class WorkerPool*> getDefaultWorkerPool();

// symbol: ?getMainThread@Threading@Bedrock@@YAAEAVAssignedThread@12@XZ
MCAPI class Bedrock::Threading::AssignedThread& getMainThread();

// symbol: ?getMainThreadScheduler@Threading@Bedrock@@YA?AV?$not_null@PEAVScheduler@@@gsl@@XZ
MCAPI gsl::not_null<class Scheduler*> getMainThreadScheduler();

// symbol: ?getNetworkWorkerPool@Threading@Bedrock@@YA?AV?$not_null@PEAVWorkerPool@@@gsl@@XZ
MCAPI gsl::not_null<class WorkerPool*> getNetworkWorkerPool();

// symbol: ?getServerThread@Threading@Bedrock@@YAAEAVAssignedThread@12@XZ
MCAPI class Bedrock::Threading::AssignedThread& getServerThread();
// NOLINTEND

}; // namespace Bedrock::Threading
