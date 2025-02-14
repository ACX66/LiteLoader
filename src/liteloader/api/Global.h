#pragma once
#pragma warning(disable : 4245)
#pragma warning(disable : 4250)
#pragma warning(disable : 4949)

#include "liteloader/api/Macro.h"
#include "mc/_HeaderOutputPredefine.h"

#ifndef NOMINMAX
#define NOMINMAX
#endif // NOMINMAX

// windows types
#include <minwindef.h>

#ifndef FMT_HEADER_ONLY
#define FMT_HEADER_ONLY
#endif // FMT_HEADER_ONLY
#include <FMT/chrono.h>
#include <FMT/color.h>
#include <FMT/core.h>
#include <FMT/os.h>
#include <FMT/printf.h>
#include <gsl/gsl>

#include "liteloader/api/GlobalServiceAPI.h"
#include "liteloader/api/utils/Optional.h"
#include "liteloader/api/utils/SehTranslator.h"

#include "liteloader/api/memory/MemoryUtils.h"
