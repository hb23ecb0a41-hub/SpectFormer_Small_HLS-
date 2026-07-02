
#ifndef SPECTRAL_IP_H
#define SPECTRAL_IP_H

#include "spectformer.h"

void Spectral_IP(
    data_t input[NUM_PATCHES][EMBED_DIM],
    data_t output[NUM_PATCHES][EMBED_DIM]
);

#endif
