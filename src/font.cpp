#include <font/font.hpp>

namespace system::media
{
    entity::Font::Font(const char **&fontTable, const uint32_t &size, const uint32_t &height,
                       const uint32_t &width) : fontTable(fontTable), size(size), height(height), width(width) {}

    const char *entity::Font::getCharMap(const char &ch) const
    {
        return fontTable[ch];
    }

} // namespace system::media::entity
