#include <stdio.h>
#include <stdlib.h>
#include "abe_type.h"

#ifndef ABE_BLOCK_H
#define ABE_BLOCK_H

// decompose 将数据进行分组
void decompose(pairing_t *pairing, Element *data, Element **result, int *block_len);

// compose 将分组后的数据还原成原数据
void compose(Element *blocks, int block_len, Element *result);

// calc_block_length 分组中用于计算给定长度的数据需要使用的组数
int calc_block_length(pairing_t *pairing, int data_length, int *block_size);

#endif