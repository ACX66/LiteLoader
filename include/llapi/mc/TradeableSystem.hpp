/**
 * @file  TradeableSystem.hpp
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
 * @brief MC class TradeableSystem.
 *
 */
class TradeableSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADEABLESYSTEM
public:
    class TradeableSystem& operator=(class TradeableSystem const &) = delete;
    TradeableSystem(class TradeableSystem const &) = delete;
    TradeableSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1059077723
     */
    virtual ~TradeableSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@TradeableSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   1489673933
     */
    virtual void tick(class EntityRegistry &);

};