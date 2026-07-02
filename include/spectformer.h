#ifndef SPECTFORMER_H
#define SPECTFORMER_H

#include "config.h"
#include "types.h"

//////////////////////////////////////////////////////
// IP prototypes
//////////////////////////////////////////////////////

void Spectral_IP(

data_t input [NUM_PATCHES][EMBED_DIM],

data_t output[NUM_PATCHES][EMBED_DIM]

);

void Attention_IP(

data_t input [NUM_PATCHES][EMBED_DIM],

data_t output[NUM_PATCHES][EMBED_DIM]

);

//////////////////////////////////////////////////////
// Remaining Layers
//////////////////////////////////////////////////////

void PatchEmbedding(

data_t image[3][224][224],

data_t tokens[NUM_PATCHES][EMBED_DIM]

);

void LayerNorm(

data_t in [NUM_PATCHES][EMBED_DIM],

data_t out[NUM_PATCHES][EMBED_DIM]

);

void MLP(

data_t in [NUM_PATCHES][EMBED_DIM],

data_t out[NUM_PATCHES][EMBED_DIM]

);

void Classifier(

data_t in[NUM_PATCHES][EMBED_DIM],

data_t logits[NUM_CLASSES]

);

//////////////////////////////////////////////////////

void SpectFormer(

data_t image[3][224][224],

data_t logits[NUM_CLASSES]

);

#endif
