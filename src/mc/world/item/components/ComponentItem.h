#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct Schema; }
namespace mce { class Color; }
// clang-format on

class ComponentItem : public ::Item {
public:
    // prevent constructor by default
    ComponentItem& operator=(ComponentItem const&) = delete;
    ComponentItem(ComponentItem const&)            = delete;
    ComponentItem()                                = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?initServer@ComponentItem@@UEAA_NAEAVValue@Json@@AEBVSemVersion@@_NAEBVExperiments@@@Z
    virtual bool initServer(class Json::Value&, class SemVersion const&, bool, class Experiments const&);

    // vIndex: 2, symbol: ?tearDown@ComponentItem@@UEAAXXZ
    virtual void tearDown();

    // vIndex: 3, symbol:
    // ?setDescriptionId@ComponentItem@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class ComponentItem& setDescriptionId(std::string const&);

    // vIndex: 4, symbol:
    // ?getDescriptionId@ComponentItem@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getDescriptionId() const;

    // vIndex: 7, symbol: ?isMusicDisk@ComponentItem@@UEBA_NXZ
    virtual bool isMusicDisk() const;

    // vIndex: 10, symbol:
    // ?executeEvent@ComponentItem@@UEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
    virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&) const;

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: ?isArmor@ComponentItem@@UEBA_NXZ
    virtual bool isArmor() const;

    // vIndex: 13, symbol: ?isBlockPlanterItem@ComponentItem@@UEBA_NXZ
    virtual bool isBlockPlanterItem() const;

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 17, symbol: ?isDamageable@ComponentItem@@UEBA_NXZ
    virtual bool isDamageable() const;

    // vIndex: 18, symbol: ?isDyeable@ComponentItem@@UEBA_NXZ
    virtual bool isDyeable() const;

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 22, symbol: ?isFood@ComponentItem@@UEBA_NXZ
    virtual bool isFood() const;

    // vIndex: 23, symbol: ?isThrowable@ComponentItem@@UEBA_NXZ
    virtual bool isThrowable() const;

    // vIndex: 24, symbol: ?isUseable@ComponentItem@@UEBA_NXZ
    virtual bool isUseable() const;

    // vIndex: 25, symbol: ?getComponent@ComponentItem@@UEBAPEAVItemComponent@@AEBVHashedString@@@Z
    virtual class ItemComponent* getComponent(class HashedString const&) const;

    // vIndex: 27, symbol: ?getFood@ComponentItem@@UEBAPEAVIFoodItemComponent@@XZ
    virtual class IFoodItemComponent* getFood() const;

    // vIndex: 30, symbol: ?setMaxDamage@ComponentItem@@UEAAAEAVItem@@H@Z
    virtual class Item& setMaxDamage(int);

    // vIndex: 39, symbol:
    // ?buildNetworkTag@ComponentItem@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 40, symbol: ?initializeFromNetwork@ComponentItem@@UEAAXAEBVCompoundTag@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&);

    // vIndex: 41, symbol:
    // ?validateFromNetwork@ComponentItem@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVCompoundTag@@@Z
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const&);

    // vIndex: 42, symbol: ?getBlockShape@ComponentItem@@UEBA?AW4BlockShape@@XZ
    virtual ::BlockShape getBlockShape() const;

    // vIndex: 43, symbol: ?canBeDepleted@ComponentItem@@UEBA_NXZ
    virtual bool canBeDepleted() const;

    // vIndex: 44, symbol: ?canDestroySpecial@ComponentItem@@UEBA_NAEBVBlock@@@Z
    virtual bool canDestroySpecial(class Block const&) const;

    // vIndex: 45, symbol: ?getLevelDataForAuxValue@ComponentItem@@UEBAHH@Z
    virtual int getLevelDataForAuxValue(int) const;

    // vIndex: 47, symbol: ?getMaxDamage@ComponentItem@@UEBAFXZ
    virtual short getMaxDamage() const;

    // vIndex: 48, symbol: ?getAttackDamage@ComponentItem@@UEBAHXZ
    virtual int getAttackDamage() const;

    // vIndex: 50, symbol: ?isGlint@ComponentItem@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool isGlint(class ItemStackBase const&) const;

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 55, symbol: ?canDestroyInCreative@ComponentItem@@UEBA_NXZ
    virtual bool canDestroyInCreative() const;

    // vIndex: 56, symbol: ?isDestructive@ComponentItem@@UEBA_NH@Z
    virtual bool isDestructive(int) const;

    // vIndex: 57, symbol: ?isLiquidClipItem@ComponentItem@@UEBA_NH@Z
    virtual bool isLiquidClipItem(int) const;

    // vIndex: 59, symbol: ?requiresInteract@ComponentItem@@UEBA_NXZ
    virtual bool requiresInteract() const;

    // vIndex: 60, symbol:
    // ?appendFormattedHovertext@ComponentItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 61, symbol: ?isValidRepairItem@ComponentItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;

    // vIndex: 62, symbol: ?getEnchantSlot@ComponentItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 63, symbol: ?getEnchantValue@ComponentItem@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 64, symbol: ?getArmorValue@ComponentItem@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 68, symbol: ?getDamageChance@ComponentItem@@UEBAHH@Z
    virtual int getDamageChance(int) const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 73, symbol: ?getColor@ComponentItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;

    // vIndex: 75, symbol: __unk_vfn_75
    virtual void __unk_vfn_75();

    // vIndex: 76, symbol: ?clearColor@ComponentItem@@UEBAXAEAVItemStackBase@@@Z
    virtual void clearColor(class ItemStackBase&) const;

    // vIndex: 78, symbol: ?setColor@ComponentItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const;

    // vIndex: 79, symbol: __unk_vfn_79
    virtual void __unk_vfn_79();

    // vIndex: 80, symbol: __unk_vfn_80
    virtual void __unk_vfn_80();

    // vIndex: 84, symbol: ?use@ComponentItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack&, class Player&) const;

    // vIndex: 85, symbol: ?dispense@ComponentItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // vIndex: 86, symbol:
    // ?useTimeDepleted@ComponentItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod useTimeDepleted(class ItemStack&, class Level*, class Player*) const;

    // vIndex: 87, symbol: ?releaseUsing@ComponentItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
    virtual void releaseUsing(class ItemStack&, class Player*, int) const;

    // vIndex: 88, symbol: ?getDestroySpeed@ComponentItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
    virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;

    // vIndex: 89, symbol: ?hurtActor@ComponentItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 90, symbol: ?hitActor@ComponentItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 91, symbol: ?hitBlock@ComponentItem@@UEBAXAEAVItemStack@@AEBVBlock@@AEBVBlockPos@@AEAVMob@@@Z
    virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;

    // vIndex: 92, symbol: ?mineBlock@ComponentItem@@UEBA_NAEAVItemInstance@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;

    // vIndex: 93, symbol: ?mineBlock@ComponentItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;

    // vIndex: 94, symbol:
    // ?buildDescriptionName@ComponentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildDescriptionName(class ItemStackBase const&) const;

    // vIndex: 95, symbol:
    // ?buildDescriptionId@ComponentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 96, symbol:
    // ?buildEffectDescriptionName@ComponentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;

    // vIndex: 100, symbol: ?getMaxStackSize@ComponentItem@@UEBAEAEBVItemDescriptor@@@Z
    virtual uchar getMaxStackSize(class ItemDescriptor const&) const;

    // vIndex: 103, symbol: ?getCooldownType@ComponentItem@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 104, symbol: ?getCooldownTime@ComponentItem@@UEBAHXZ
    virtual int getCooldownTime() const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 118, symbol: ?initClient@ComponentItem@@UEAAXAEAVValue@Json@@AEBVSemVersion@@_NAEBVExperiments@@@Z
    virtual void initClient(class Json::Value&, class SemVersion const&, bool, class Experiments const&);

    // vIndex: 119, symbol:
    // ?setIconInfo@ComponentItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 120, symbol: ?getIconInfo@ComponentItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 121, symbol:
    // ?getInteractText@ComponentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
    virtual std::string getInteractText(class Player const&) const;

    // vIndex: 122, symbol: ?getAnimationFrameFor@ComponentItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;

    // vIndex: 123, symbol: ?isEmissive@ComponentItem@@UEBA_NH@Z
    virtual bool isEmissive(int) const;

    // vIndex: 126, symbol: ?canBeCharged@ComponentItem@@UEBA_NXZ
    virtual bool canBeCharged() const;

    // vIndex: 131, symbol:
    // ?getAuxValuesDescription@ComponentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getAuxValuesDescription() const;

    // vIndex: 132, symbol:
    // ?_checkUseOnPermissions@ComponentItem@@EEBA_NAEAVActor@@AEAVItemStackBase@@AEBEAEBVBlockPos@@@Z
    virtual bool _checkUseOnPermissions(class Actor&, class ItemStackBase&, uchar const&, class BlockPos const&) const;

    // vIndex: 133, symbol: ?_calculatePlacePos@ComponentItem@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, uchar&, class BlockPos&) const;

    // vIndex: 134, symbol: ?_shouldAutoCalculatePlacePos@ComponentItem@@EEBA_NXZ
    virtual bool _shouldAutoCalculatePlacePos() const;

    // vIndex: 135, symbol:
    // ?_useOn@ComponentItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack&, class Actor&, class BlockPos, uchar, class Vec3 const&) const;

    // symbol: ?getVariant@ComponentItem@@UEBAHHH_N@Z
    MCVAPI int getVariant(int, int, bool) const;

    // symbol: ?hasCustomColor@ComponentItem@@UEBA_NAEBVItemStackBase@@@Z
    MCVAPI bool hasCustomColor(class ItemStackBase const&) const;

    // symbol: ?isComponentBased@ComponentItem@@UEBA_NXZ
    MCVAPI bool isComponentBased() const;

    // symbol: ?useVariant@ComponentItem@@UEBA_NHH_N@Z
    MCVAPI bool useVariant(int, int, bool) const;

    // symbol: ??1ComponentItem@@UEAA@XZ
    MCVAPI ~ComponentItem();

    // symbol: ??0ComponentItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
    MCAPI ComponentItem(std::string const&, short);

    // symbol: ?_addCerealItemsToMap@ComponentItem@@QEAAXXZ
    MCAPI void _addCerealItemsToMap();

    // symbol:
    // ?_buildItemsFileSchema@ComponentItem@@QEAA?AV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VComponentItem@@@JsonUtil@@@std@@AEAV23@_NVSemVersion@@@Z
    MCAPI std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ComponentItem>>
          _buildItemsFileSchema(
              std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ComponentItem>>&,
              bool,
              class SemVersion
          );

    // symbol:
    // ?_validateClientSchemaAndInitItem@ComponentItem@@QEAA_NAEAVValue@Json@@AEBVSemVersion@@_NAEBVExperiments@@@Z
    MCAPI bool
    _validateClientSchemaAndInitItem(class Json::Value&, class SemVersion const&, bool, class Experiments const&);

    // symbol:
    // ?_validateServerSchemaAndInitItem@ComponentItem@@QEAA_NAEAVValue@Json@@AEBVSemVersion@@_NAEBVExperiments@@@Z
    MCAPI bool
    _validateServerSchemaAndInitItem(class Json::Value&, class SemVersion const&, bool, class Experiments const&);

    // symbol: ?checkComponentDataForContentErrors@ComponentItem@@QEBA_NXZ
    MCAPI bool checkComponentDataForContentErrors() const;

    // symbol: ?executeTrigger@ComponentItem@@QEBA_NAEAVItemStackBase@@AEBVDefinitionTrigger@@AEAVRenderParams@@@Z
    MCAPI bool executeTrigger(class ItemStackBase&, class DefinitionTrigger const&, class RenderParams&) const;

    // symbol: ?parseJsonEvents@ComponentItem@@QEAA_NAEBVValue@Json@@AEBVSemVersion@@@Z
    MCAPI bool parseJsonEvents(class Json::Value const&, class SemVersion const&);

    // symbol: ?setCanDestroyInCreative@ComponentItem@@QEAAX_N@Z
    MCAPI void setCanDestroyInCreative(bool);

    // symbol: ?buildAllPatchSchemas@ComponentItem@@SAXAEAVCerealDocumentUpgrader@@@Z
    MCAPI static void buildAllPatchSchemas(class CerealDocumentUpgrader&);

    // symbol:
    // ?createItemAbstractCerealSchema@ComponentItem@@SA?AUSchema@cereal@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static struct cereal::Schema createItemAbstractCerealSchema(std::string const&);

    // symbol: ?registerItemComponentTypes@ComponentItem@@SAXXZ
    MCAPI static void registerItemComponentTypes();

    // symbol:
    // ?upgradeJson@ComponentItem@@SA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@V?$optional@VSemVersion@@@3@@Z
    MCAPI static bool upgradeJson(std::string&, class Core::Path const&, std::optional<class SemVersion>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_buildItemPropertiesNetworkTag@ComponentItem@@AEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> _buildItemPropertiesNetworkTag() const;

    // symbol:
    // ?_executeEvent@ComponentItem@@AEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@4@AEAVRenderParams@@@Z
    MCAPI void
    _executeEvent(class ItemStackBase&, std::string const&, std::vector<std::pair<std::string const, std::string const>>&, class RenderParams&)
        const;

    // symbol:
    // ?_forceExecuteTrigger@ComponentItem@@AEBA_NAEAVItemStackBase@@AEBVDefinitionTrigger@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@std@@AEAVRenderParams@@@Z
    MCAPI bool
    _forceExecuteTrigger(class ItemStackBase&, class DefinitionTrigger const&, std::vector<std::pair<std::string const, std::string const>>&, class RenderParams&)
        const;

    // symbol:
    // ?_loadComponentsFromNetworkTag@ComponentItem@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z
    MCAPI void _loadComponentsFromNetworkTag(std::string const&, class CompoundTag const&);

    // symbol: ?_loadItemPropertiesNetworkTag@ComponentItem@@AEAAXAEBVCompoundTag@@@Z
    MCAPI void _loadItemPropertiesNetworkTag(class CompoundTag const&);

    // symbol: ?_loadItemTagsNetworkTag@ComponentItem@@AEAAXAEBVListTag@@@Z
    MCAPI void _loadItemTagsNetworkTag(class ListTag const&);

    // symbol: ?_parseCereal@ComponentItem@@AEAA_NAEBVValue@Json@@AEBVSemVersion@@_NAEBVExperiments@@@Z
    MCAPI bool _parseCereal(class Json::Value const&, class SemVersion const&, bool, class Experiments const&);

    // symbol:
    // ?_validateCerealComponent@ComponentItem@@AEAA_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@_NAEBVExperiments@@@Z
    MCAPI bool _validateCerealComponent(std::string, class SemVersion const&, bool, class Experiments const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mDocumentUpgrader@ComponentItem@@0VCerealDocumentUpgrader@@A
    MCAPI static class CerealDocumentUpgrader mDocumentUpgrader;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    inline auto& $mDocumentUpgrader() { return mDocumentUpgrader; }

    // NOLINTEND
};
