/**
 * @mainpage
 * # Загальне завдання
 * 1. **Сформувати** програму, яка виносе елементи головної діагоналі двомірного масиву в окремий  	* масив та сортує його. 
 *
 *
 * @author Zakusilov N.
 * @date 28-dec-2020
 */

/**
 * @file main1.c
 * @brief Файл з демонстрацією виклику функцій та виділення/звільнення динамічної пам'яті для      	* масивів.
 *
 * @author Zakusilov N.
 * @date 28-dec-2020
 */
#include "lib.h"

int main(){
    int **matrix =(int**)malloc(sizeof(int*) * SIZE);
    for(int i = 0; i < SIZE;i++){
        *(matrix + i) = (int *)malloc(sizeof(int) * SIZE);
    }
    int *result =(int*)malloc(sizeof(int*)* SIZE);
    randomize(matrix, SIZE);
    diag(matrix, SIZE, result);
    sort(result, SIZE);
    for(int i = 0; i < SIZE;i++){
        free(*(matrix + i));
    }
    free(result);
    return 0;
}

