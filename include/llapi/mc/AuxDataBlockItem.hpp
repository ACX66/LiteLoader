/**
 * @file  AuxDataBlockItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BlockItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AuxDataBlockItem.
 *
 */
class AuxDataBlockItem : public BlockItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUXDATABLOCKITEM
public:
    class AuxDataBlockItem& operator=(class AuxDataBlockItem const &) = delete;
    AuxDataBlockItem(class AuxDataBlockItem const &) = delete;
    AuxDataBlockItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -107467108
     */
    virtual ~AuxDataBlockItem();
    /**
     * @vftbl  7
     * @hash   -1253298233
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -234427292
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -231656729
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -229809687
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  45
     * @symbol ?getLevelDataForAuxValue@AuxDataBlockItem@@UEBAHH@Z
     * @hash   -1395067098
     */
    virtual int getLevelDataForAuxValue(int) const;
    /**
     * @vftbl  51
     * @hash   -119910688
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -118063646
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  66
     * @hash   -86663932
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -62652386
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -61728865
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -275840522
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -255523060
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  95
     * @symbol ?buildDescriptionId@AuxDataBlockItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   -49456904
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @symbol ??0AuxDataBlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HPEBVBlock@@@Z
     * @hash   1072380096
     */
    MCAPI AuxDataBlockItem(std::string const &, int, class Block const *);

};