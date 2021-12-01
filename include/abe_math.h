#include <stdio.h>
#include <stdlib.h>
#include "pbc.h"

#ifndef ABE_MATH_H
#define ABE_MATH_H

// polynomial_evaluation 多项式求值
void polynomial_evaluation(pairing_t *pairing, int d, element_t *q, int x, element_t *y);

// calc_lagrange 拉格朗日多项式计算，x_i=start-i
void calc_lagrange(pairing_t *pairing, int i, int start, int end, int x, element_t *result);

// calc_normal_lagrange 拉格朗日多项式计算，index数组为x_i
void calc_normal_lagrange(pairing_t *pairing, int i, int n, int *index, int x, element_t **invert_list, element_t *result);

#endif