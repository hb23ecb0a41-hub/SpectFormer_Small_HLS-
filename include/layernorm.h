#ifndef LAYERNORM_H
#define LAYERNORM_H

#include "types.h"
#include "config.h"

void LayerNorm(
    data_t input[NUM_PATCHES][EMBED_DIM],
    data_t output[NUM_PATCHES][EMBED_DIM],
    const data_t gamma[EMBED_DIM],
    const data_t beta[EMBED_DIM]
);

#endif
