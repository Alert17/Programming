/**
 * @mainpage
 * # Загальне завдання
 * 1. **Сформувати** функцию, яка перемножає квадратну матрицю на себе, по всім правилам множення матриць.
 *
 *
 * @author Zakusilov N.
 * @date 21-dec-2020
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи функції, яка перемножає дві однакові матриці.
 *
 * @author Zakusilov N.
 * @date 21-des-2020
 */
#include <stdint.h>

int get_linear_index(int i, int j, int size);

void multiply_matrices(int matrix1[], int matrix2[], int side, int result_matrix[]);

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Оголошення двомірного масиву - матриці.
 * - Переведення двомірного масиву в одномірний, використовуючи функцію get_linear_index.
 * - Виклик функції multiply_matrices.
 * - Повернення з одномірного масиву в двомірний.
 * @param SIZE - розмір масива
 * @return успішний код повернення з програми (0)
 */

#define SIZE 3
int main() {

    	int m1[SIZE][SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8};
    	int linearResult[SIZE * SIZE];
    	int result[SIZE][SIZE];
    	int linearM1[SIZE * SIZE];

    	for (int i = 0; i < SIZE; i++) {
        	for (int j = 0; j < SIZE; j++) {
            		linearM1[get_linear_index(i, j, SIZE)] = m1[i][j];
        	}
    	}

    	multiply_matrices(linearM1, linearM1, SIZE, linearResult);

    	for (int i = 0; i < SIZE; i++) {
        	for (int j = 0; j < SIZE; j++) {
            		result[i][j] = linearResult[get_linear_index(i, j, SIZE)];
        	}
    	}

    	return 0;
}

/**
 * Задання індексу для лінійного масиву
 *
 * Функція разраховує індекс для подвійного цикла, щоб переводити двомірний масив в одномірний і навпаки
 */

int get_linear_index(int i, int j, int size) {
    	return i * size + j;
}
/**
 * Функція множення матриці
 *
 * Функція через 3 цикла дозволяє правильно перемножать матриці, використовуючі різні індекси.
 * Для роботи заданої задачі ми заміть двох різних матриць передаємо одну, і множимо її на себе.
 */
void multiply_matrices( int matrix1[], int matrix2[], int size, int result_matrix[] ) {

    	for (int i = 0; i < size; ++i) {
        	for (int j = 0; j < size; ++j) {
            		for (int k = 0; k < size; ++k) {
                	result_matrix[get_linear_index(i, j, size)] += matrix1[get_linear_index(i, k, size)] * matrix2[get_linear_index(k, j, size)];
            }
        }
    }
}
