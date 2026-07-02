#ifndef CONFIG_H
#define CONFIG_H

//--------------------------------------------------
// SpectFormer-Small Configuration
//--------------------------------------------------

#define IMG_SIZE            224
#define PATCH_SIZE          16

#define IMG_CHANNELS        3

#define NUM_PATCHES         196      //14x14

#define EMBED_DIM           384

#define NUM_HEADS           6

#define HEAD_DIM            64

#define DEPTH               12

#define NUM_SPECTRAL        4

#define NUM_ATTENTION       8

#define MLP_RATIO           4

#define MLP_DIM             1536

#define NUM_CLASSES         1000

//--------------------------------------------------
// FFT
//--------------------------------------------------

#define FFT_SIZE            14

//--------------------------------------------------

#define EPSILON             1e-5

#endif
