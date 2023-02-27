//
// Created by Ofek on 27/02/2023.
//

#include "Tbag.h"

int main(int argc, char** argv, char** wenv) {

    double data[3][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
    };

    data_point_t dataPoint;
    double* modeled_data[3];
    dataPoint.len = 3;

    for (int i = 0; i < 3; i++) {
        modeled_data[i] = data[i];
    }

    dataPoint.data_point = modeled_data;

    tracks_t* tracks = init_clusters(dataPoint);
    free_tracks(tracks);
    return 0;
}
