#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakNetSocket2 {

public:
    // prevent constructor by default
    RakNetSocket2& operator=(RakNetSocket2 const&) = delete;
    RakNetSocket2(RakNetSocket2 const&)            = delete;
    RakNetSocket2()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?SetMulticastInterface\@RakNetSocket2\@RakNet\@\@UEAAXH\@Z
     */
    virtual void SetMulticastInterface(int32_t);
    // NOLINTEND
};

}; // namespace RakNet
