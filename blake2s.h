#pragma once

#include <stdint.h>
#include <string>

void blake2s_hash(const char* input, char* output, uint32_t len);
