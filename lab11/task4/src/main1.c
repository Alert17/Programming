#include "lib.h"
#define SIZE 3
int main(){
    int **matrix =(int**)malloc(sizeof(int*) * SIZE);
    for(int i = 0; i < SIZE;i++){
        *(matrix + i) = (int *)malloc(sizeof(int) * SIZE);
    }
    int *result =(int*)malloc(sizeof(int*)* SIZE);
    randomize(matrix, SIZE);
    diag(matrix, SIZE, result);
    sort(result, SIZE);
    free(matrix);
    free(result);
    return 0;
}

