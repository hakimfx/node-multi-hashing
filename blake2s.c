#include "blake2s.h"
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

#include "sha3/sph_blake2s.h"

void blake2s_hash(const char* input, char* output, uint32_t len)
{
    sph_blake2s_context ctx_blake;
    sph_blake2s_init(&ctx_blake);
    sph_blake2s_update(&ctx_blake, input, len);
    sph_blake2s_final(&ctx_blake, output);
}
