#pragma once

#include <stdint.h>
#include <string>

void blake2s_hash(const char* input, uint32_t input_len, const char* scratchpad, uint64_t spad_length, char* output, uint64_t height);
