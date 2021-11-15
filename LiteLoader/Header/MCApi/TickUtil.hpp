// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
namespace TickUtil {

MCAPI struct std::pair<class BlockPos, class BlockPos> chunkBoundsToGridBounds(class Pos const&, class Pos const&);
MCAPI void forRandomOffset(unsigned char, unsigned char, unsigned char, unsigned char, class std::function<void(class Pos const&)>);
MCAPI struct Bounds getDeterministicBounds(struct Bounds const&);
MCAPI class ChunkPos getRandomInBounds(struct Bounds const&, class Random&);

} // namespace TickUtil