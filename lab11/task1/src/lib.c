#include "lib.h"

void randomize(int* arr, int size) {
    for (size_t i = 0; i < size; i++) {
        *(arr + i) = rand() % 5;
    }
}


int pairs(int* arr, int size){
    int pair = 0;
    for (size_t i = 0; i < size; i++) {
        if (*(arr + i) == *(arr + i + 1)) {
            pair += 2;
            i++;
        }
    } return pair;
}

void found_pairs(int* arr, int size, int* res_arr){
    size_t b = 0;
    for (size_t i = b; i < size; i++) {
        if (*(arr + i) == *(arr + i + 1)) {
            *(res_arr + b) = *(arr + i);
            *(res_arr + b + 1) = *(arr + i);
            i++;
            b += 2;
        }
    }
}