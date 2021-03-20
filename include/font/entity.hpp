#pragma once

#include <std/stdcxx.hpp>

namespace system::media::entity {

class Font {
public:
    Font();
    Font(uint8_t *fontTable);

    static const uint32_t fontTableSize = 256;
    static const uint32_t fontWidth     = 8;
    static const uint32_t fontHeight    = 16;

    const uint8_t *getCharMap(const uint8_t &ch) const;

private:
    uint8_t *fontTable;
}; // class Font

} // namespace system::media::entity
