#include "lib.h"



int main() {
    int* numbers = (int*)malloc(SIZE * sizeof(int));
    randomize(numbers, SIZE);
    int size_res = pairs(numbers, SIZE);
    int* result = (int*)malloc(size_res * sizeof(int));
    found_pairs(numbers, SIZE, result);
    free(result);
    free(numbers);
    return 0;
}

