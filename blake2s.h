#ifndef BLAKE2S_H
#define BLAKE2S_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void blake2s_hash(char* output, const char* input);

#ifdef __cplusplus
}
#endif

#endif
