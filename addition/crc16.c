#include <stdio.h>

static Uint16 crc16_for_byte(Uint8 r)
{
    Uint16 crc = 0;
    int i;
    for (i = 0; i < 8; ++i) {
        crc = ((crc ^ r) & 1? 0xA001 : 0) ^ crc >> 1;
        r >>= 1;
    }
    return crc;
}

Uint16 SDL_crc16(Uint16 crc, const void *data, size_t len)
{
    /* As an optimization we can precalculate a 256 entry table for each byte */
    size_t i;
    for(i = 0; i < len; ++i) {
        crc = crc16_for_byte((Uint8)crc ^ ((const Uint8*)data)[i]) ^ crc >> 8;
    }
    return crc;
}
