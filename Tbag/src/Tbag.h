//
// Created by Ofek on 27/02/2023.
//

#ifndef TBAG_TBAG_H
#define TBAG_TBAG_H
#include <math.h>
#include <stdlib.h>
#include <malloc.h>
#include <ctype.h>
#include <stdio.h>

enum {
    LAT,
    LON,
    ALT,
    TIMESTAMP
};

typedef struct data_point_s {
    unsigned int len;
    double** data_point;
} data_point_t;

typedef struct cluster_s {
    unsigned int len;
    unsigned int* indices;
} cluster_t;

typedef struct tracks_s {
    unsigned int len;
    cluster_t* clusters;
} tracks_t;

tracks_t* init_clusters(data_point_t data);
void free_tracks(tracks_t* tracks);

#endif //TBAG_TBAG_H
