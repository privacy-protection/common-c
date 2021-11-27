#include <stdio.h>
#include <stdlib.h>
#include "pbc.h"

#ifndef ABE_MATH_H
#define ABE_MATH_H

void polynomial_evaluation(pairing_t *pairing, int d, element_t *q, int x, element_t *y);

void calc_lagrange(pairing_t *pairing, int i, int start, int end, int x, element_t *result);

void calc_normal_lagrange(pairing_t *pairing, int i, int n, int *index, int x, element_t **invert_list, element_t *result);

#endif