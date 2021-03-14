#pragma once

#include <std/stdcxx.hpp>

namespace system::media::entity
{
    class Font
    {
    public:
        Font(const char &fontCode);
        ~Font();

        static const uint32_t fontCount = 256;
        static const uint32_t fontHeight = 16;
        static const uint32_t fontWidth = 8; // unsigned char = fontWidth = 8bits

        using FontTable = const uint8_t[fontCount][fontHeight];
        using FontRows = const uint8_t *;

        FontRows getFontRows() const;

    private:
        static const FontTable fontTable;
        char fontCode;
    }; // class Font

} // namespace system::media::entity
