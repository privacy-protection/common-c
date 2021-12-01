/// \file abe_block.h
/// \brief 用于分组加密的相关函数

#include <stdio.h>
#include <stdlib.h>
#include "abe_type.h"

#ifndef ABE_BLOCK_H
#define ABE_BLOCK_H

/// \brief 将数据进行分组
/// \param pairing 双线性映射对象
/// \param data 待分组数据
/// \param result 返回的分组结果
/// \param block_len 返回的组数
void decompose(pairing_t *pairing, Element *data, Element **result, int *block_len);

/// \brief 将分组后的数据还原成原数据
/// \param blocks 分组后的数据
/// \param block_len 组数
/// \param result 返回的原数据
void compose(Element *blocks, int block_len, Element *result);

/// \brief 分组中用于计算给定长度的数据需要使用的组数
/// \param pairing 双线性映射对象
/// \param data_length 数据长度
/// \param block_size 返回的组数
int calc_block_length(pairing_t *pairing, int data_length, int *block_size);

#endif