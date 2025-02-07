#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/ChunkLocalHeight.h"

class ChunkBlockPos : public Field<ChunkBlockPos, char, short, char> {
public:
    schar            x;
    schar            z;
    ChunkLocalHeight y;
    constexpr ChunkBlockPos() noexcept : x(0), z(0), y(0){};
    template <std::convertible_to<short> T>
    constexpr explicit ChunkBlockPos(T const& all) noexcept
    : x(static_cast<schar>(all)), z(static_cast<schar>(all)), y(static_cast<short>(all)){};

    template <std::convertible_to<schar> T0, std::convertible_to<short> T1, std::convertible_to<schar> T2>
    constexpr ChunkBlockPos(T0 x, T1 y, T2 z) noexcept
    : x(static_cast<schar>((std::is_floating_point_v<T0>) ? floor(x) : x)),
      z(static_cast<schar>((std::is_floating_point_v<T2>) ? floor(z) : z)),
      y(static_cast<short>((std::is_floating_point_v<T1>) ? floor(y) : y)){};

    [[nodiscard]] constexpr ushort toLegacyIndex() const noexcept {
        return static_cast<ushort>((y.mVal & 0xF) + 16 * (z + 16 * x));
    }

    template <typename T>
    [[nodiscard]] constexpr T& get(size_t index) {
        switch (index) {
        case 1:
            return (T&)y.mVal;
        case 2:
            return (T&)z;
        default:
            return (T&)x;
        }
    }

    template <typename T>
    [[nodiscard]] constexpr T get(size_t index) const {
        switch (index) {
        case 1:
            return (T)y.mVal;
        case 2:
            return (T)z;
        default:
            return (T)x;
        }
    }

public:
    // NOLINTBEGIN
    // symbol: ??0ChunkBlockPos@@QEAA@EVChunkLocalHeight@@E@Z
    MCAPI ChunkBlockPos(uchar, class ChunkLocalHeight, uchar);

    // symbol: ??0ChunkBlockPos@@QEAA@AEBVBlockPos@@F@Z
    MCAPI ChunkBlockPos(class BlockPos const&, short);

    // symbol: ?toPos@ChunkBlockPos@@QEBA?AVPos@@XZ
    MCAPI class Pos toPos() const;

    // symbol: ?from2D@ChunkBlockPos@@SA?AV1@EE@Z
    MCAPI static class ChunkBlockPos from2D(uchar, uchar);

    // symbol: ?fromLegacyIndex@ChunkBlockPos@@SA?AV1@G@Z
    MCAPI static class ChunkBlockPos fromLegacyIndex(ushort);

    // NOLINTEND
};
