#pragma once

#include <std/stdcxx.hpp>

namespace system::media::entity {

class Font {
public:
    Font();
    Font(char *fontTable);

    static const uint32_t fontTableSize = 256;
    static const uint32_t fontWidth     = 8;
    static const uint32_t fontHeight    = 16;

    const char *getCharMap(const char &ch) const;

private:
    char *fontTable;
}; // class Font

} // namespace system::media::entity
