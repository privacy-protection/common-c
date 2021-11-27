#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef ABE_MAP_H
#define ABE_MAP_H

#define MOD 10007
#define INIT_SIZE 8

struct MapElement
{
    int key, value;
};

typedef struct MapElement MapElement;

struct Map
{
    int size[MOD];
    int index[MOD];
    MapElement *data[MOD];
};

typedef struct Map Map;

void map_init(Map *m);

void map_clear(Map *m);

void map_put(Map *m, int key, int value);

bool map_get(Map *m, int key, int *value);

#endif