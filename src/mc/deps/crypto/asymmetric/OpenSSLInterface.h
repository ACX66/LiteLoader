#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/Padding.h"
#include "mc/deps/crypto/asymmetric/PubKeyFormat.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Asymmetric {

class OpenSSLInterface {

public:
    // prevent constructor by default
    OpenSSLInterface& operator=(OpenSSLInterface const&) = delete;
    OpenSSLInterface(OpenSSLInterface const&)            = delete;
    OpenSSLInterface()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?generateKeyPair\@OpenSSLInterface\@Asymmetric\@Crypto\@\@UEAA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual bool generateKeyPair(std::string&, std::string&);
    /**
     * @vftbl 2
     * @symbol
     * ?encryptData\@OpenSSLInterface\@Asymmetric\@Crypto\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV45\@0W4Padding\@23\@W4PubKeyFormat\@23\@\@Z
     */
    virtual std::string encryptData(
        std::string const&,
        std::string const&,
        enum class Crypto::Asymmetric::Padding,
        enum class Crypto::Asymmetric::PubKeyFormat
    );
    /**
     * @vftbl 3
     * @symbol
     * ?decryptData\@OpenSSLInterface\@Asymmetric\@Crypto\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV45\@0W4Padding\@23\@\@Z
     */
    virtual std::string decryptData(std::string const&, std::string const&, enum class Crypto::Asymmetric::Padding);
    /**
     * @vftbl 4
     * @symbol
     * ?signData\@OpenSSLInterface\@Asymmetric\@Crypto\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV45\@0W4HashType\@Hash\@3\@\@Z
     */
    virtual std::string signData(std::string const&, std::string const&, enum class Crypto::Hash::HashType);
    /**
     * @vftbl 5
     * @symbol
     * ?verifyData\@OpenSSLInterface\@Asymmetric\@Crypto\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4HashType\@Hash\@3\@\@Z
     */
    virtual bool
    verifyData(std::string const&, std::string const&, std::string const&, enum class Crypto::Hash::HashType);
    /**
     * @vftbl 6
     * @symbol
     * ?computeSharedSecret\@OpenSSLInterface\@Asymmetric\@Crypto\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV45\@0\@Z
     */
    virtual std::string computeSharedSecret(std::string const&, std::string const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_computeSharedSecretECC\@OpenSSLInterface\@Asymmetric\@Crypto\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV45\@0\@Z
     */
    MCAPI std::string _computeSharedSecretECC(std::string const&, std::string const&);
    /**
     * @symbol
     * ?_decryptDataRSA\@OpenSSLInterface\@Asymmetric\@Crypto\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV45\@0W4Padding\@23\@\@Z
     */
    MCAPI std::string _decryptDataRSA(std::string const&, std::string const&, enum class Crypto::Asymmetric::Padding);
    /**
     * @symbol
     * ?_encryptDataRSA\@OpenSSLInterface\@Asymmetric\@Crypto\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV45\@0W4Padding\@23\@W4PubKeyFormat\@23\@\@Z
     */
    MCAPI std::string _encryptDataRSA(
        std::string const&,
        std::string const&,
        enum class Crypto::Asymmetric::Padding,
        enum class Crypto::Asymmetric::PubKeyFormat
    );
    /**
     * @symbol
     * ?_generateKeyPairECC\@OpenSSLInterface\@Asymmetric\@Crypto\@\@AEAA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI bool _generateKeyPairECC(std::string&, std::string&);
    // NOLINTEND
};

}; // namespace Crypto::Asymmetric
