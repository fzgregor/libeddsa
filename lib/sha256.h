#ifndef SHA256_H
#define SHA256_H

#include <stdint.h>
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
	uint32_t	state[8];
	uint64_t	count;

	uint8_t		buffer[64];
	size_t		fill;
} sha256ctx;

void sha256_init(sha256ctx *ctx);
void sha256_add(sha256ctx *ctx, const uint8_t *data, size_t len);
void sha256_done(sha256ctx *ctx, uint8_t out[32]);

#ifdef __cplusplus
}
#endif
#endif
