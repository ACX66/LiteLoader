#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

class Constraint {

public:
    // prevent constructor by default
    Constraint& operator=(Constraint const&) = delete;
    Constraint(Constraint const&)            = delete;
    Constraint()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol
     * ?doValidate\@ExpressionNodeCerealConstraint\@\@EEBA_NAEBVmeta_any\@entt\@\@AEAVSerializerContext\@cereal\@\@\@Z
     */
    virtual bool doValidate(entt::meta_any const&, class cereal::SerializerContext&) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_CONSTRAINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Constraint();
#endif
    /**
     * @symbol ?validate\@Constraint\@cereal\@\@QEBA_NAEBVmeta_any\@entt\@\@AEAVSerializerContext\@2\@\@Z
     */
    MCAPI bool validate(entt::meta_any const&, class cereal::SerializerContext&) const;
    // NOLINTEND
};

}; // namespace cereal
