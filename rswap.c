#include "rswap.h"


uint16_t rswap_uint16(uint16_t val) {
    return (val << 8) | (val >> 8);
}

int16_t rswap_int16(int16_t val) {
    return (val << 8) | ((val >> 8) & 0xFF);
}

uint32_t rswap_uint32(uint32_t val) {
    val = ((val << 8) & 0xFF00FF00) | ((val >> 8) & 0xFF00FF);
    return (val << 16) | (val >> 16);
}

int32_t rswap_int32(int32_t val) {
    val = ((val << 8) & 0xFF00FF00) | ((val >> 8) & 0xFF00FF);
    return (val << 16) | ((val >> 16) & 0xFFFF);
}