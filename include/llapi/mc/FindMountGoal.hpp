/**
 * @file  FindMountGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FindMountGoal.
 *
 */
class FindMountGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDMOUNTGOAL
public:
    class FindMountGoal& operator=(class FindMountGoal const &) = delete;
    FindMountGoal(class FindMountGoal const &) = delete;
    FindMountGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1973109857
     */
    virtual ~FindMountGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@FindMountGoal@@UEAA_NXZ
     * @hash   -1794717811
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@FindMountGoal@@UEAA_NXZ
     * @hash   -927891765
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@FindMountGoal@@UEAAXXZ
     * @hash   -342304346
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@FindMountGoal@@UEAAXXZ
     * @hash   -737906058
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@FindMountGoal@@UEAAXXZ
     * @hash   -1222243359
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@FindMountGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1003108509
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0FindMountGoal@@QEAA@AEAVMob@@MH_N1MH@Z
     * @hash   -1093459314
     */
    MCAPI FindMountGoal(class Mob &, float, int, bool, bool, float, int);
    /**
     * @symbol ?isInMountRange@FindMountGoal@@QEAA_NXZ
     * @hash   1672096490
     */
    MCAPI bool isInMountRange();

};