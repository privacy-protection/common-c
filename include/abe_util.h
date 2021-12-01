/// \file abe_util.h
/// \brief 公共函数

#include <stdio.h>
#include <stdlib.h>
#include "pbc.h"
#include "abe_type.h"

#ifndef ABE_UTIL_H
#define ABE_UTIL_H

/// \brief 将element_t结构转化为Element结构
void transfer_to_struct_element(element_t *t, Element *e);

/// \brief 将Element结构转化为element_t结构
void transfer_to_element(Element *e, element_t *t);

/// \brief 从Element结构中获取曲线参数pairing_t
void load_curve(Element *e_curve, pairing_t *pairing);

/// \brief 释放Element结构中的内存
void free_Element(Element *x);

/// \brief 初始化逆元缓存列表
element_t **init_invert_list(int n);

/// \brief 逆元缓存列表内存释放
void clear_invert_list(element_t **list, int n);

/// \brief 从树的父节点father数组中构造Graph结构
Graph build_tree(int n, int *father);

/// \brief 分组加密中计算data_len长度的数据需要使用多少组
int get_block_length(Element *e_curve, int data_len);

#endif