#include <font/font.hpp>

namespace system::media {
entity::Font::Font() = default;

entity::Font::Font(uint8_t *fontTable) : fontTable(fontTable) {}

const uint8_t *entity::Font::getCharMap(const uint8_t &ch) const {
    if(0 <= ch && ch < fontTableSize) {
        return fontTable + ch * fontHeight;
    } else {
        return 0;
    }
}

} // namespace system::media
