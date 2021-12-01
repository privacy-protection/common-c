/// \file abe_math.h
/// \brief 数学相关函数

#include <stdio.h>
#include <stdlib.h>
#include "pbc.h"

#ifndef ABE_MATH_H
#define ABE_MATH_H

/// \brief 多项式求值
/// \param pairing 双线性映射对象
/// \param d 多项式的阶数
/// \param q 多项式的参数
/// \param x 待求值的x坐标
/// \param y 返回的结果
void polynomial_evaluation(pairing_t *pairing, int d, element_t *q, int x, element_t *y);

/// \brief 拉格朗日多项式计算
/// \details x_i=start-i
void calc_lagrange(pairing_t *pairing, int i, int start, int end, int x, element_t *result);

/// \brief 拉格朗日多项式计算
/// \details index数组为x_i
void calc_normal_lagrange(pairing_t *pairing, int i, int n, int *index, int x, element_t **invert_list, element_t *result);

#endif