#include <font/font.hpp>

namespace system::media {
entity::Font::Font() = default;

entity::Font::Font(char *fontTable) : fontTable(fontTable) {}

const char *entity::Font::getCharMap(const char &ch) const {
    if(0 <= ch && ch < fontTableSize) {
        return fontTable + ch * fontHeight;
    } else {
        return 0;
    }
}

} // namespace system::media
