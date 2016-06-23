#ifndef PRECOMP_XZ_H
#define PRECOMP_XZ_H

#include "lzma.h"

#if _WIN64 || __amd64__
#define MULTI 4
#else
#define MULTI 2
#endif

bool init_lzma1(lzma_stream *strm);
bool init_lzma2(lzma_stream *strm);
bool init_encoder_mt(lzma_stream *strm);
bool init_decoder(lzma_stream *strm);

#endif /* ifndef PRECOMP_XZ_H */
