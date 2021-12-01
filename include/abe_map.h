#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef ABE_MAP_H
#define ABE_MAP_H

#define MOD 10007
#define INIT_SIZE 8

// MapElement map中存储的元素，key和value均为int类型
struct MapElement
{
    int key, value;
};

typedef struct MapElement MapElement;

// Map map结构，用MOD个链表存储元素
struct Map
{
    // size 链表的当前容量
    int size[MOD];
    // index 链表的当前使用长度
    int index[MOD];
    // data 链表中存储的元素
    MapElement *data[MOD];
};

typedef struct Map Map;

// map_init 初始化
void map_init(Map *m);

// map_clear 清空所有元素
void map_clear(Map *m);

// map_put 将(key, value)存储到map中
void map_put(Map *m, int key, int value);

// map_get 获取map中key对应的数据
bool map_get(Map *m, int key, int *value);

#endif