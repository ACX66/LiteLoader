#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/math/DelegatingRandom.h"

// auto generated forward declare list
// clang-format off
class IPositionalRandomFactory;
class IRandom;
namespace NoiseUtils { class DelegatingRandom; }
// clang-format on

namespace NoiseUtils {

class DoublesForFloatsRandom : public ::NoiseUtils::DelegatingRandom {

public:
    // prevent constructor by default
    DoublesForFloatsRandom& operator=(DoublesForFloatsRandom const&) = delete;
    DoublesForFloatsRandom(DoublesForFloatsRandom const&)            = delete;
    DoublesForFloatsRandom()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?nextInt\@DelegatingRandom\@NoiseUtils\@\@UEAAHXZ
     */
    virtual int nextInt();
    /**
     * @vftbl 2
     * @symbol ?nextInt\@DelegatingRandom\@NoiseUtils\@\@UEAAHH\@Z
     */
    virtual int nextInt(int);
    /**
     * @vftbl 3
     * @symbol ?nextLong\@DelegatingRandom\@NoiseUtils\@\@UEAA_JXZ
     */
    virtual int64_t nextLong();
    /**
     * @vftbl 4
     * @symbol ?nextBoolean\@DelegatingRandom\@NoiseUtils\@\@UEAA_NXZ
     */
    virtual bool nextBoolean();
    /**
     * @vftbl 5
     * @symbol ?nextFloat\@DoublesForFloatsRandom\@NoiseUtils\@\@UEAAMXZ
     */
    virtual float nextFloat();
    /**
     * @vftbl 6
     * @symbol ?nextDouble\@DelegatingRandom\@NoiseUtils\@\@UEAANXZ
     */
    virtual double nextDouble();
    /**
     * @vftbl 7
     * @symbol ?nextGaussianDouble\@XoroshiroRandom\@\@UEAANXZ
     */
    virtual double nextGaussianDouble();
    /**
     * @vftbl 8
     * @symbol ?consumeCount\@DelegatingRandom\@NoiseUtils\@\@UEAAXI\@Z
     */
    virtual void consumeCount(unsigned int);
    /**
     * @vftbl 9
     * @symbol
     * ?fork\@DelegatingRandom\@NoiseUtils\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IRandom> fork();
    /**
     * @vftbl 10
     * @symbol
     * ?forkPositional\@IRandom\@\@UEAA?AV?$unique_ptr\@VIPositionalRandomFactory\@\@U?$default_delete\@VIPositionalRandomFactory\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NOISEUTILS_DOUBLESFORFLOATSRANDOM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DoublesForFloatsRandom();
#endif
    // NOLINTEND
};

}; // namespace NoiseUtils
