#include "layernorm.h"
#include <hls_math.h>

void LayerNorm(
    data_t input[NUM_PATCHES][EMBED_DIM],
    data_t output[NUM_PATCHES][EMBED_DIM],
    const data_t gamma[EMBED_DIM],
    const data_t beta[EMBED_DIM]
)
{

#pragma HLS INLINE off

TOKEN_LOOP:
    for(int t=0;t<NUM_PATCHES;t++)
    {

        data_t mean = 0;

MEAN_LOOP:
        for(int i=0;i<EMBED_DIM;i++)
        {
#pragma HLS PIPELINE II=1
            mean += input[t][i];
        }

        mean /= EMBED_DIM;

        data_t var = 0;

VAR_LOOP:
        for(int i=0;i<EMBED_DIM;i++)
        {
#pragma HLS PIPELINE II=1

            data_t diff = input[t][i] - mean;

            var += diff * diff;
        }

        var /= EMBED_DIM;

        data_t inv_std = hls::rsqrt(var + (data_t)EPSILON);

NORM_LOOP:
        for(int i=0;i<EMBED_DIM;i++)
        {

#pragma HLS PIPELINE II=1

            data_t norm =
                (input[t][i]-mean)*inv_std;

            output[t][i] =
                norm*gamma[i]+beta[i];

        }

    }

}
