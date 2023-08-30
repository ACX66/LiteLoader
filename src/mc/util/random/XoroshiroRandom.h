#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/math/IRandom.h"

class XoroshiroRandom : public ::IRandom {

public:
    // prevent constructor by default
    XoroshiroRandom& operator=(XoroshiroRandom const&) = delete;
    XoroshiroRandom(XoroshiroRandom const&)            = delete;
    XoroshiroRandom()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?nextInt\@XoroshiroRandom\@\@UEAAHXZ
     */
    virtual int32_t nextInt();
    /**
     * @vftbl 2
     * @symbol ?nextInt\@XoroshiroRandom\@\@UEAAHH\@Z
     */
    virtual int32_t nextInt(int32_t);
    /**
     * @vftbl 3
     * @symbol ?nextLong\@XoroshiroRandom\@\@UEAA_JXZ
     */
    virtual int64_t nextLong();
    /**
     * @vftbl 4
     * @symbol ?nextBoolean\@XoroshiroRandom\@\@UEAA_NXZ
     */
    virtual bool nextBoolean();
    /**
     * @vftbl 5
     * @symbol ?nextFloat\@XoroshiroRandom\@\@UEAAMXZ
     */
    virtual float nextFloat();
    /**
     * @vftbl 6
     * @symbol ?nextDouble\@XoroshiroRandom\@\@UEAANXZ
     */
    virtual double nextDouble();
    /**
     * @vftbl 7
     * @symbol ?nextGaussianDouble\@XoroshiroRandom\@\@UEAANXZ
     */
    virtual double nextGaussianDouble();
    /**
     * @vftbl 8
     * @symbol ?consumeCount\@XoroshiroRandom\@\@UEAAXI\@Z
     */
    virtual void consumeCount(uint32_t);
    /**
     * @vftbl 9
     * @symbol
     * ?fork\@XoroshiroRandom\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IRandom> fork();
    /**
     * @vftbl 10
     * @symbol
     * ?forkPositional\@XoroshiroRandom\@\@UEAA?AV?$unique_ptr\@VIPositionalRandomFactory\@\@U?$default_delete\@VIPositionalRandomFactory\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_XOROSHIRORANDOM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~XoroshiroRandom();
#endif
    // NOLINTEND
};
