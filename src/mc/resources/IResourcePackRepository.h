#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/KnownPackType.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class IResourcePackRepository {
public:
    // prevent constructor by default
    IResourcePackRepository& operator=(IResourcePackRepository const&) = delete;
    IResourcePackRepository(IResourcePackRepository const&)            = delete;
    IResourcePackRepository()                                          = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?getResourcePacksByPackId@ResourcePackRepository@@UEBAXAEBV?$vector@UPackInstanceId@@V?$allocator@UPackInstanceId@@@std@@@std@@AEAV?$vector@VPackInstance@@V?$allocator@VPackInstance@@@std@@@3@@Z
    virtual void
    getResourcePacksByPackId(std::vector<struct PackInstanceId> const&, std::vector<class PackInstance>&) const = 0;

    // vIndex: 2, symbol: ?getResourcePackForPackId@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@@Z
    virtual class ResourcePack* getResourcePackForPackId(struct PackIdVersion const&) const = 0;

    // vIndex: 3, symbol: ?getResourcePackByUUID@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBVUUID@mce@@@Z
    virtual class ResourcePack* getResourcePackByUUID(class mce::UUID const&) const = 0;

    // vIndex: 4, symbol:
    // ?getResourcePackForPackIdOwned@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@@Z
    virtual class ResourcePack* getResourcePackForPackIdOwned(struct PackIdVersion const&) const = 0;

    // vIndex: 5, symbol:
    // ?getResourcePackSatisfiesPackId@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@_N@Z
    virtual class ResourcePack* getResourcePackSatisfiesPackId(struct PackIdVersion const&, bool) const = 0;

    // vIndex: 6, symbol:
    // ?getResourcePackContainingModule@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@@Z
    virtual class ResourcePack* getResourcePackContainingModule(struct PackIdVersion const&) const = 0;

    // vIndex: 7, symbol: ?getResourcePackInPath@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBVPath@Core@@@Z
    virtual class ResourcePack* getResourcePackInPath(class Core::Path const&) const = 0;

    // vIndex: 8, symbol: ?isResourcePackLoaded@ResourcePackRepository@@UEAA_NAEBUPackIdVersion@@AEBW4PackOrigin@@@Z
    virtual bool isResourcePackLoaded(struct PackIdVersion const&, ::PackOrigin const&) = 0;

    // vIndex: 9, symbol: ?getPackLoadingReport@ResourcePackRepository@@UEBAPEBVPackSourceReport@@XZ
    virtual class PackSourceReport const* getPackLoadingReport() const = 0;

    // vIndex: 10, symbol: ?getEditorPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
    virtual class ResourcePack* getEditorPack() const = 0;

    // vIndex: 11, symbol: ?getVanillaPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
    virtual class ResourcePack* getVanillaPack() const = 0;

    // vIndex: 12, symbol: ?getChemistryPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
    virtual class ResourcePack* getChemistryPack() const = 0;

    // vIndex: 13, symbol: ?getChemistryServerPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
    virtual class ResourcePack* getChemistryServerPack() const = 0;

    // vIndex: 14, symbol:
    // ?setServicePacks@ResourcePackRepository@@UEAA_NV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@@Z
    virtual bool setServicePacks(std::vector<struct PackIdVersion>) = 0;

    // vIndex: 15, symbol: ?addServicePacksToStack@ResourcePackRepository@@UEBAXAEAVResourcePackStack@@@Z
    virtual void addServicePacksToStack(class ResourcePackStack&) const = 0;

    // vIndex: 16, symbol:
    // ?addCachedResourcePacks@ResourcePackRepository@@UEAAXPEBV?$unordered_map@VContentIdentity@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VContentIdentity@@@3@U?$equal_to@VContentIdentity@@@3@V?$allocator@U?$pair@$$CBVContentIdentity@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z
    virtual void addCachedResourcePacks(std::unordered_map<class ContentIdentity, std::string> const*) = 0;

    // vIndex: 17, symbol: ?addWorldResourcePacks@ResourcePackRepository@@UEAAXAEBVPath@Core@@@Z
    virtual void addWorldResourcePacks(class Core::Path const&) = 0;

    // vIndex: 18, symbol:
    // ?addPremiumWorldTemplateResourcePacks@ResourcePackRepository@@UEAAXAEBVPath@Core@@AEBVContentIdentity@@@Z
    virtual void addPremiumWorldTemplateResourcePacks(class Core::Path const&, class ContentIdentity const&) = 0;

    // vIndex: 19, symbol: ?removePacksLoadedFromCache@ResourcePackRepository@@UEAAXXZ
    virtual void removePacksLoadedFromCache() = 0;

    // vIndex: 20, symbol: ?removePacksLoadedFromWorld@ResourcePackRepository@@UEAAXXZ
    virtual void removePacksLoadedFromWorld() = 0;

    // vIndex: 21, symbol:
    // ?getResourcePacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getResourcePacksPath() const = 0;

    // vIndex: 22, symbol:
    // ?getBehaviorPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getBehaviorPacksPath() const = 0;

    // vIndex: 23, symbol:
    // ?getSkinPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getSkinPacksPath() const = 0;

    // vIndex: 24, symbol:
    // ?getDevelopmentResourcePacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getDevelopmentResourcePacksPath() const = 0;

    // vIndex: 25, symbol:
    // ?getDevelopmentBehaviorPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getDevelopmentBehaviorPacksPath() const = 0;

    // vIndex: 26, symbol:
    // ?getDevelopmentSkinPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getDevelopmentSkinPacksPath() const = 0;

    // vIndex: 27, symbol:
    // ?getTreatmentPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getTreatmentPacksPath() const = 0;

    // vIndex: 28, symbol:
    // ?getKnownPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@W4KnownPackType@@@Z
    virtual class Core::PathBuffer<std::string> const getKnownPacksPath(::KnownPackType) const = 0;

    // vIndex: 29, symbol:
    // ?getKnownValidPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getKnownValidPacksPath() const = 0;

    // vIndex: 30, symbol:
    // ?getKnownInvalidPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getKnownInvalidPacksPath() const = 0;

    // vIndex: 31, symbol: ?refreshPacks@ResourcePackRepository@@UEAAXXZ
    virtual void refreshPacks() = 0;

    // vIndex: 32, symbol: ?requestReloadUserPacks@ResourcePackRepository@@UEAAXXZ
    virtual void requestReloadUserPacks() = 0;

    // vIndex: 33, symbol: ?requestReloadDynamicPackagePacks@ResourcePackRepository@@UEAAXXZ
    virtual void requestReloadDynamicPackagePacks() = 0;

    // vIndex: 34, symbol:
    // ?getKeyProvider@ResourcePackRepository@@UEBA?AV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@XZ
    virtual gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> getKeyProvider() const = 0;

    // vIndex: 35, symbol: ?getPackManifestFactory@ResourcePackRepository@@UEAAAEAVPackManifestFactory@@XZ
    virtual class PackManifestFactory& getPackManifestFactory() = 0;

    // vIndex: 36, symbol: ?getPackSettingsFactory@ResourcePackRepository@@UEBAAEAVPackSettingsFactory@@XZ
    virtual class PackSettingsFactory& getPackSettingsFactory() const = 0;

    // vIndex: 37, symbol: ?getPackSourceFactory@ResourcePackRepository@@UEAAAEAVPackSourceFactory@@XZ
    virtual class PackSourceFactory& getPackSourceFactory() = 0;

    // vIndex: 38, symbol: ?getWorldPackSource@ResourcePackRepository@@UEBAPEBVCompositePackSource@@XZ
    virtual class CompositePackSource const* getWorldPackSource() const = 0;

    // vIndex: 39, symbol:
    // ?getPacksByResourceLocation@ResourcePackRepository@@UEBA?AV?$vector@PEAVResourcePack@@V?$allocator@PEAVResourcePack@@@std@@@std@@W4PackOrigin@@@Z
    virtual std::vector<class ResourcePack*> getPacksByResourceLocation(::PackOrigin) const = 0;

    // vIndex: 40, symbol:
    // ?getPacksByType@ResourcePackRepository@@UEBA?AV?$vector@PEAVResourcePack@@V?$allocator@PEAVResourcePack@@@std@@@std@@W4PackType@@@Z
    virtual std::vector<class ResourcePack*> getPacksByType(::PackType) const = 0;

    // vIndex: 41, symbol: ?addKnownPackFromImport@ResourcePackRepository@@UEAAXAEBVPackManifest@@@Z
    virtual void addKnownPackFromImport(class PackManifest const&) = 0;

    // vIndex: 42, symbol: ?addInvalidPack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@W4PackType@@@Z
    virtual void addInvalidPack(class ResourceLocation const&, ::PackType) = 0;

    // vIndex: 43, symbol:
    // ?getInvalidPacks@ResourcePackRepository@@UEBAAEBV?$vector@VResourceLocation@@V?$allocator@VResourceLocation@@@std@@@std@@W4PackType@@@Z
    virtual std::vector<class ResourceLocation> const& getInvalidPacks(::PackType) const = 0;

    // vIndex: 44, symbol:
    // ?getInvalidPacks@ResourcePackRepository@@UEBA?AV?$vector@VResourceLocation@@V?$allocator@VResourceLocation@@@std@@@std@@AEBUInvalidPacksFilterGroup@@@Z
    virtual std::vector<class ResourceLocation> getInvalidPacks(struct InvalidPacksFilterGroup const&) const = 0;

    // vIndex: 45, symbol: ?deletePack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
    virtual void deletePack(class ResourceLocation const&) = 0;

    // vIndex: 46, symbol: ?deletePackFiles@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
    virtual void deletePackFiles(class ResourceLocation const&) = 0;

    // vIndex: 47, symbol: ?postDeletePack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
    virtual void postDeletePack(class ResourceLocation const&) = 0;

    // vIndex: 48, symbol: ?untrackInvalidPack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
    virtual void untrackInvalidPack(class ResourceLocation const&) = 0;

    // vIndex: 49, symbol:
    // ?registerResourcePackRemovedCallback@ResourcePackRepository@@UEAAXPEAXV?$function@$$A6AXPEAVResourcePack@@@Z@std@@@Z
    virtual void registerResourcePackRemovedCallback(void*, std::function<void(class ResourcePack*)>) = 0;

    // vIndex: 50, symbol: ?unregisterResourcePackRemovedCallback@ResourcePackRepository@@UEAAXPEAX@Z
    virtual void unregisterResourcePackRemovedCallback(void*) = 0;

    // vIndex: 51, symbol: ?isInitialized@ResourcePackRepository@@UEAA_NXZ
    virtual bool isInitialized() = 0;

    // symbol: ??1IResourcePackRepository@@UEAA@XZ
    MCVAPI ~IResourcePackRepository();

    // NOLINTEND
};
