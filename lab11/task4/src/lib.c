/**
 * @file lib.c
 * @brief Файл з реалізацією функцій заповнення масиву, винесення діагоналі, сортування.
 *
 * @author Zakusilov N..
 * @date 28-dec-2020
 */

#include "lib.h"



void randomize(int** arr, int size) {
    for (size_t i = 0; i < size; i++){
        for(size_t j=0;j < size;j++){
            *(*(arr+i)+j)=rand() % 10;
        }
    }
}


void diag(int** arr, int size, int* res_arr) {
    size_t b = 0;
    for(size_t i=0; i < size; i++){
        for(size_t j=0;j < size; j++){
            if(i == j){
                *(res_arr + b)=*(*(arr+i)+j);
                b++;
            }
        }
    }
}

void sort(int* arr, int size){
    for (size_t i = 0; i < size; i++){
        for(size_t j=0;j < size;j++){
            if (*(arr + j) > *(arr + i)){
                int temp = *(arr + j);
                *(arr + j) = *(arr + i);
                *(arr + i) = temp;
            }
        }
    }
}
