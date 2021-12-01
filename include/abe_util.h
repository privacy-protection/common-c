#include <stdio.h>
#include <stdlib.h>
#include "pbc.h"
#include "abe_type.h"

#ifndef ABE_UTIL_H
#define ABE_UTIL_H

// transfer_to_struct_element 将element_t结构转化为Element结构
void transfer_to_struct_element(element_t *t, Element *e);

// transfer_to_element 将Element结构转化为element_t结构
void transfer_to_element(Element *e, element_t *t);

// load_curve 从Element结构中获取曲线参数pairing_t
void load_curve(Element *e_curve, pairing_t *pairing);

// free_Element 释放Element结构中的内存
void free_Element(Element *x);

// init_invert_list 初始化逆元缓存列表
element_t **init_invert_list(int n);

// clear_invert_list 逆元缓存列表内存释放
void clear_invert_list(element_t **list, int n);

// build_tree 从树的父节点father数组中构造Graph结构
Graph build_tree(int n, int *father);

// get_block_length 分组加密中计算data_len长度的数据需要使用多少组
int get_block_length(Element *e_curve, int data_len);

#endif