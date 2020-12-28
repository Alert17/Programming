#ifndef SAMPLE_PROJECT_LIB_H
#define SAMPLE_PROJECT_LIB_H

/**
 * @file lib.h
 * @brief Файл з описом функцій, використаних у программі.
 *
 * @author Zakusilov N.
 * @date 28-dec-2020
 */
 
#include <stdlib.h>

/**
 * Розмір квадратної та результуючої матриць.
 */
#define SIZE 3

/**
 * Заповнення матриці випадковими числами. У программі вказуємо максимальне значення.
 * @param size розмір матриці.
 */
 void randomize(int** arr, int size);

/**
 * Перенесення елементів головної діагоналі в окремий масив.
 */
 void diag(int** arr, int size, int* res_arr);

/**
 * Сортування масиву методов бульбашки.
 */
void sort(int* arr, int size);


#endif
