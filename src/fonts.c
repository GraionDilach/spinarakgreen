#include "global.h"

ALIGNED(4) const u16 gFontSmallNarrowLatinGlyphs[] = INCBIN_U16("graphics/fonts/small_narrow.latfont");
ALIGNED(4) const u8 gFontSmallNarrowLatinGlyphWidths[] = {
    3,  5,  5,  5,  5,  5,  5,  5,  5,  4,  3,  4,  4,  5,  5,  5,
    5,  5,  5,  5,  5,  5,  5,  5,  3,  4,  5,  5,  5,  5,  4,  3,
    4,  4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  8,  5,  6,  3,
    3,  3,  3,  3,  8,  0,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    5,  5,  3,  8,  8,  8,  8,  8,  8,  8,  4,  5,  4,  4,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  5,  3,  3,  3,  3,  3,  3,  4,
    3,  3,  3,  3,  3,  3,  3,  5,  3,  8,  8,  8,  8,  0,  0,  3,
    4,  5,  6,  7,  5,  5,  5,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    7,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  4,  5,  3,  5,  5,
    5,  5,  5,  3,  3,  5,  5,  5,  3,  5,  5,  5,  5,  5,  5,  5,
    5,  5,  5,  4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  4,  5,
    5,  5,  5,  4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  4,  4,  5,
    4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  7,
    3,  5,  5,  5,  5,  5,  5,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  3,
};

ALIGNED(4) const u16 gFontSmallLatinGlyphs[] = INCBIN_U16("graphics/fonts/small.latfont");
ALIGNED(4) const u8 gFontSmallLatinGlyphWidths[] = {
    3,  5,  5,  5,  5,  5,  5,  5,  5,  4,  3,  4,  4,  5,  5,  5,
    5,  5,  5,  5,  5,  5,  5,  5,  3,  5,  5,  5,  5,  5,  4,  3,
    4,  4,  5,  5,  5,  6,  5,  5,  5,  5,  5,  5,  8,  7,  8,  3,
    3,  3,  3,  3,  8,  8,  7,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    5,  5,  5,  8,  8,  8,  8,  8,  8,  8,  4,  7,  5,  5,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  5,  3,  3,  3,  3,  3,  3,  4,
    3,  3,  3,  3,  3,  3,  3,  5,  3,  8,  8,  8,  8,  0,  0,  3,
    4,  5,  6,  7,  5,  7,  7,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  4,  5,  5,  5,  5,
    5,  5,  5,  5,  5,  5,  5,  8,  5,  8,  5,  5,  5,  5,  5,  5,
    5,  5,  5,  4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  4,  5,
    5,  5,  5,  4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  4,  5,  5,
    5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  8,
    7,  5,  5,  5,  5,  5,  5,  9,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  3,
};

ALIGNED(4) const u16 gFontNarrowLatinGlyphs[] = INCBIN_U16("graphics/fonts/narrow.latfont");
ALIGNED(4) const u8 gFontNarrowLatinGlyphWidths[] = {
    3,  5,  5,  5,  5,  5,  5,  5,  5,  4,  3,  4,  4,  5,  5,  5,
    8,  5,  5,  5,  5,  6,  5,  5,  3,  5,  5,  5,  5,  5,  4,  3,
    4,  4,  5,  5,  5,  8,  5,  5,  5,  5,  5,  6,  9,  6,  6,  3,
    3,  3,  3,  3,  8,  8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    5,  5,  4,  8,  8,  8,  7,  8,  8,  4,  4,  6,  4,  4,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  5,  3,  3,  3,  3,  3,  3,  4,
    3,  3,  3,  3,  3,  3,  3,  5,  3,  7,  7,  7,  7,  0,  0,  3,
    4,  5,  6,  7,  5,  6,  6,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  4,  5,  3,  5,  3,
    5,  5,  5,  3,  3,  5,  5,  6,  3,  6,  6,  5,  5,  5,  5,  5,
    5,  5,  5,  4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,
    5,  5,  5,  4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  4,  5,  5,
    4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  8,
    3,  5,  5,  5,  5,  5,  5,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    10, 10, 10, 10,  8,  8, 10,  8, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  3,
};

ALIGNED(4) const u16 gFontShortLatinGlyphs[] = INCBIN_U16("graphics/fonts/short.latfont");
ALIGNED(4) const u8 gFontShortLatinGlyphWidths[] = {
    3,  6,  6,  6,  6,  6,  6,  6,  6,  6,  3,  6,  6,  6,  6,  6,
    8,  6,  6,  6,  6,  6,  6,  6,  3,  6,  6,  6,  6,  6,  6,  3,
    6,  6,  6,  6,  6,  8,  6,  6,  6,  6,  6,  6,  9,  8,  8,  3,
    3,  3,  3,  3, 10,  8,  5,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    6,  6,  6,  8,  8,  8,  8,  8,  8,  4,  6,  8,  5,  5,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  6,  3,  3,  3,  3,  3,  3,  6,
    3,  3,  3,  3,  3,  3,  3,  6,  3, 12, 12, 12, 12,  0,  0,  3,
    4,  5,  6,  7,  8,  8,  8,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  5,  6,  5,
    6,  6,  6,  3,  3,  6,  6,  8,  5,  9,  6,  6,  6,  6,  6,  6,
    6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
    6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  5,  6,  6,  4,  6,  5,
    5,  6,  5,  6,  6,  6,  5,  5,  5,  6,  6,  6,  6,  6,  6,  8,
    5,  6,  6,  6,  6,  6,  6,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    12, 12, 12, 12,  8, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  3,
};

ALIGNED(4) const u16 gFontNormalLatinGlyphs[] = INCBIN_U16("graphics/fonts/normal.latfont");
ALIGNED(4) const u8 gFontNormalLatinGlyphWidths[] = {
    3,  6,  6,  6,  6,  6,  6,  6,  6,  6,  3,  6,  6,  6,  6,  6,
    8,  6,  6,  6,  6,  6,  6,  6,  3,  6,  6,  6,  6,  6,  6,  3,
    6,  6,  6,  6,  6,  8,  6,  6,  6,  6,  6,  6,  9,  7,  6,  3,
    3,  3,  3,  3, 10,  8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    6,  6,  4,  8,  8,  8,  7,  8,  8,  4,  6,  6,  4,  4,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  6,  3,  3,  3,  3,  3,  3,  6,
    3,  3,  3,  3,  3,  3,  3,  6,  3,  7,  7,  7,  7,  0,  0,  3,
    4,  5,  6,  7,  6,  6,  6,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  4,  6,  3,  6,  3,
    6,  6,  6,  3,  3,  6,  6,  6,  3,  7,  6,  6,  6,  6,  6,  6,
    6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
    6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  4,  5,  6,
    4,  6,  6,  6,  6,  6,  5,  6,  6,  6,  6,  6,  6,  6,  6,  8,
    3,  6,  6,  6,  6,  6,  6,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    10, 10, 10, 10,  8, 10, 10,  8, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  3,
};

ALIGNED(4) const u16 gFontNarrowerLatinGlyphs[] = INCBIN_U16("graphics/fonts/narrower.latfont");
ALIGNED(4) const u8 gFontNarrowerLatinGlyphWidths[] = {
    3,  4,  4,  4,  4,  4,  4,  4,  4,  4,  3,  4,  4,  4,  4,  4,
    8,  4,  4,  4,  5,  5,  4,  4,  3,  4,  4,  4,  4,  4,  4,  3,
    4,  4,  4,  4,  4,  6,  4,  4,  4,  5,  4,  5,  8,  6,  6,  3,
    3,  3,  3,  3,  8,  8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    5,  5,  4,  8,  8,  8,  7,  8,  8,  4,  4,  6,  4,  4,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  4,  3,  3,  3,  3,  3,  3,  4,
    3,  3,  3,  3,  3,  3,  3,  5,  3,  7,  7,  7,  7,  0,  0,  3,
    4,  5,  6,  7,  4,  6,  6,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    7,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  5,  3,  5,  3,
    5,  5,  5,  3,  3,  5,  5,  6,  3,  6,  6,  4,  4,  4,  4,  4,
    4,  4,  4,  4,  4,  4,  4,  5,  5,  4,  4,  4,  4,  4,  4,  4,
    4,  5,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  2,  4,  4,
    2,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  8,
    4,  4,  4,  4,  4,  4,  4,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    10, 10, 10, 10,  8,  8, 10,  8, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  3,
};

ALIGNED(4) const u16 gFontSmallNarrowerLatinGlyphs[] = INCBIN_U16("graphics/fonts/small_narrower.latfont");
ALIGNED(4) const u8 gFontSmallNarrowerLatinGlyphWidths[] = {
    3,  4,  4,  4,  4,  4,  4,  4,  4,  4,  3,  4,  4,  4,  4,  4,
    5,  4,  4,  4,  5,  4,  4,  4,  3,  4,  4,  4,  4,  4,  3,  3,
    4,  4,  4,  4,  4,  6,  4,  4,  4,  5,  4,  4,  7,  5,  6,  3,
    3,  3,  3,  3,  8,  0,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    5,  4,  3,  7,  7,  7,  8,  8,  8,  8,  4,  5,  4,  4,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  4,  3,  3,  3,  3,  3,  3,  4,
    3,  3,  3,  3,  3,  3,  3,  5,  3,  8,  8,  8,  8,  0,  0,  3,
    4,  5,  6,  7,  4,  5,  5,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    7,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  3,  4,  3,  4,  4,
    5,  5,  5,  3,  3,  5,  5,  5,  4,  5,  5,  4,  4,  4,  4,  4,
    4,  4,  4,  4,  4,  4,  4,  4,  5,  4,  4,  4,  4,  4,  4,  4,
    4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  2,  3,  4,
    2,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  7,
    4,  4,  4,  4,  4,  4,  4,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  8,  8,  8,  8,  7,  8,  7,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  3,
};

ALIGNED(4) const u16 gFontShortNarrowLatinGlyphs[] = INCBIN_U16("graphics/fonts/short_narrow.latfont");
ALIGNED(4) const u8 gFontShortNarrowLatinGlyphWidths[] = {
    3,  5,  5,  5,  5,  5,  5,  5,  5,  4,  3,  4,  4,  5,  5,  5,
    8,  5,  5,  5,  5,  6,  5,  5,  3,  5,  5,  5,  5,  5,  4,  3,
    4,  4,  5,  5,  5,  8,  5,  5,  5,  5,  6,  6,  9,  6,  6,  3,
    3,  3,  3,  3, 10,  8,  5,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    6,  6,  6,  8,  8,  8,  8,  8,  8,  4,  6,  8,  5,  5,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  5,  3,  3,  3,  3,  3,  3,  6,
    3,  3,  3,  3,  3,  3,  3,  6,  3, 12, 12, 12, 12,  0,  0,  3,
    4,  5,  6,  7,  8,  8,  8,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  6,  6,  5,  5,  5,
    6,  6,  6,  3,  3,  6,  6,  8,  5,  9,  6,  5,  5,  5,  5,  5,
    5,  5,  5,  4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  4,  5,
    5,  5,  4,  4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  4,  5,  5,
    4,  6,  5,  5,  5,  5,  5,  5,  4,  5,  5,  6,  4,  5,  5,  8,
    5,  5,  5,  5,  5,  5,  5,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    12, 12, 12, 12,  8, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  3,
};

ALIGNED(4) const u16 gFontSmallJapaneseGlyphs[] = INCBIN_U16("graphics/fonts/small.hwjpnfont");
ALIGNED(4) const u16 gFontNormalJapaneseGlyphs[] = INCBIN_U16("graphics/fonts/normal.hwjpnfont");

ALIGNED(4) const u16 gFontFRLGMaleJapaneseGlyphs[] = INCBIN_U16("graphics/fonts/frlg_male.fwjpnfont");
ALIGNED(4) const u8 gFontFRLGMaleJapaneseGlyphWidths[] = {
    0, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    9,  9,  9,  9,  9,  9,  9, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,  9,
    9,  9,  9,  9,  9,  9,  9, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    9,  8,  7,  8,  8,  8,  8,  8,  8,  8,  8,  5,  9, 10, 10, 10,
    8, 10, 10, 10, 10,  8,  8,  8, 10, 10,  8,  6,  6,  6,  6,  6,
    6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
    6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  5,  6,  6,  2,  4,  6,
    3,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
    5,  6,  6,  6,  6,  6,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
};

ALIGNED(4) const u16 gFontFRLGFemaleJapaneseGlyphs[] = INCBIN_U16("graphics/fonts/frlg_female.fwjpnfont");
ALIGNED(4) const u8 gFontFRLGFemaleJapaneseGlyphWidths[] = {
    0, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,  9,
    9,  9,  9,  9,  9,  9,  9, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,  9,
    9,  9,  9,  9,  9,  9,  8, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    9,  8,  7,  8,  8,  8,  8,  8,  8,  8,  8,  5,  9, 10, 10, 10,
    8, 10, 10, 10, 10,  8,  8,  8, 10, 10,  8,  6,  6,  6,  6,  6,
    6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
    6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  5,  6,  6,  2,  4,  6,
    3,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
    5,  6,  6,  6,  6,  6,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
};

ALIGNED(4) const u16 gFontShortJapaneseGlyphs[] = INCBIN_U16("graphics/fonts/short.fwjpnfont");
ALIGNED(4) const u8 gFontShortJapaneseGlyphWidths[] = {
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,  9,
    9,  9,  9,  9,  9,  9,  9, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,  9,
    9,  9,  9,  9,  9,  9,  9, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10,  8,  7,  8,  8,  8,  8,  8,  8,  8,  8,  5,  9, 10, 10, 10,
    8, 10, 10, 10, 10,  8,  8,  8, 10, 10,  8,  6,  6,  6,  6,  6,
    6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
    6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  5,  6,  6,  2,  4,  6,
    3,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
    5,  6,  6,  6,  6,  6,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
};
