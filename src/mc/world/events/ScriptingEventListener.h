#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class ScriptingEventListener {

public:
    // prevent constructor by default
    ScriptingEventListener& operator=(ScriptingEventListener const&) = delete;
    ScriptingEventListener(ScriptingEventListener const&)            = delete;
    ScriptingEventListener()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?onEvent\@ScriptingEventListener\@\@UEAA?AW4EventResult\@\@AEBUScriptingNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ScriptingNotificationEvent const&);
    // NOLINTEND
};
