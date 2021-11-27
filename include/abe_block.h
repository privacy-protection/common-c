#include <stdio.h>
#include <stdlib.h>
#include "abe_type.h"

#ifndef ABE_BLOCK_H
#define ABE_BLOCK_H

void decompose(pairing_t *pairing, Element *data, Element **result, int *block_len);

void compose(Element *blocks, int block_len, Element *result);

int calc_block_length(pairing_t *pairing, int data_length, int *block_size);

#endif