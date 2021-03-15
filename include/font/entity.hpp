#pragma once

#include <std/stdcxx.hpp>

namespace system::media::entity
{
    class Font
    {
    public:
        Font(const char **&fontTable, const uint32_t &size, const uint32_t &height, const uint32_t &width);

        const char *getCharMap(const char &ch) const;

        const uint32_t size;
        const uint32_t height;
        const uint32_t width;

    private:
        const char **fontTable;
    }; // class Font

} // namespace system::media::entity
