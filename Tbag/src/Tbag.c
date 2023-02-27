//
// Created by Ofek on 27/02/2023.
//

#include "Tbag.h"

tracks_t* init_clusters(data_point_t data) {
    tracks_t* tracks = malloc(sizeof(cluster_t));
    cluster_t* clusters = malloc(sizeof(cluster_t) * data.len);

    for (unsigned int i = 0; i < data.len; i++) {
        clusters[i].len = 1;
        clusters[i].indices = malloc(sizeof(unsigned int) * 1);
        clusters[i].indices[0] = i;
    }

    tracks->clusters = clusters;
    tracks->len = data.len;

    return tracks;
}

void free_tracks(tracks_t* tracks) {
    for (unsigned int i = 0; i < tracks->len; i++) {
        free(tracks->clusters[i].indices);
    }

    free(tracks->clusters);
    free(tracks);
}