
#ifndef FFT_H
#define FFT_H

#include "types.h"
#include "config.h"

//--------------------------------------------------
// 2D FFT for SpectFormer Spectral Block
//--------------------------------------------------

void FFT2D(
    data_t input[14][14][EMBED_DIM],
    data_t real_out[14][14][EMBED_DIM],
    data_t imag_out[14][14][EMBED_DIM]
);

#endif
