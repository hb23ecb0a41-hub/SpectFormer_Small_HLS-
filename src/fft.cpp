
#include "fft.h"

void FFT2D(
    data_t input[14][14][EMBED_DIM],
    data_t real_out[14][14][EMBED_DIM],
    data_t imag_out[14][14][EMBED_DIM]
)
{

#pragma HLS INLINE off

ROW_LOOP:
    for(int r=0; r<14; r++)
    {
COL_LOOP:
        for(int c=0; c<14; c++)
        {
EMBED_LOOP:
            for(int e=0; e<EMBED_DIM; e++)
            {

#pragma HLS PIPELINE II=1

                real_out[r][c][e] = input[r][c][e];
                imag_out[r][c][e] = 0;

            }
        }
    }

}
