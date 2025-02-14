#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/ParticleType.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

class VillagerBase : public ::Mob {
public:
    // VillagerBase inner types define
    enum class BiomeType {};

public:
    // prevent constructor by default
    VillagerBase& operator=(VillagerBase const&) = delete;
    VillagerBase(VillagerBase const&)            = delete;
    VillagerBase()                               = delete;

public:
    // NOLINTBEGIN
    // vIndex: 13, symbol:
    // ?reloadComponents@VillagerBase@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 86, symbol: __unk_vfn_86
    virtual void __unk_vfn_86();

    // vIndex: 93, symbol: __unk_vfn_93
    virtual void __unk_vfn_93();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 96, symbol: __unk_vfn_96
    virtual void __unk_vfn_96();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 124, symbol: ?onLightningHit@VillagerBase@@UEAAXXZ
    virtual void onLightningHit();

    // vIndex: 127, symbol: ?handleEntityEvent@VillagerBase@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 243, symbol: ?readAdditionalSaveData@VillagerBase@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 244, symbol: ?addAdditionalSaveData@VillagerBase@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 252, symbol: ?_onSizeUpdated@VillagerBase@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 276, symbol: __unk_vfn_276
    virtual void __unk_vfn_276();

    // vIndex: 280, symbol: __unk_vfn_280
    virtual void __unk_vfn_280();

    // vIndex: 319, symbol: ?_serverAiMobStep@VillagerBase@@MEAAXXZ
    virtual void _serverAiMobStep();

    // vIndex: 323, symbol: __unk_vfn_323
    virtual void __unk_vfn_323();

    // symbol: ?interactPreventDefault@VillagerBase@@UEAA_NXZ
    MCVAPI bool interactPreventDefault();

    // symbol: ??1VillagerBase@@UEAA@XZ
    MCVAPI ~VillagerBase();

    // symbol: ??0VillagerBase@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI VillagerBase(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?consumeLoveFood@VillagerBase@@QEAAXXZ
    MCAPI void consumeLoveFood();

    // symbol: ?getBreedingStackIndex@VillagerBase@@QEBAHXZ
    MCAPI int getBreedingStackIndex() const;

    // symbol: ?isChasing@VillagerBase@@QEBA_NXZ
    MCAPI bool isChasing() const;

    // symbol: ?isWillingToBreed@VillagerBase@@QEAA_N_N@Z
    MCAPI bool isWillingToBreed(bool);

    // symbol: ?setChasing@VillagerBase@@QEAAX_N@Z
    MCAPI void setChasing(bool);

    // symbol: ?setWillingToBreed@VillagerBase@@QEAAX_N@Z
    MCAPI void setWillingToBreed(bool);

    // symbol: ?stopGoals@VillagerBase@@QEAAXXZ
    MCAPI void stopGoals();

    // symbol:
    // ?BiomeStrToEnum@VillagerBase@@SA?AW4BiomeType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static ::VillagerBase::BiomeType BiomeStrToEnum(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addParticlesAroundSelf@VillagerBase@@AEAAXW4ParticleType@@@Z
    MCAPI void _addParticlesAroundSelf(::ParticleType);

    // NOLINTEND
};
