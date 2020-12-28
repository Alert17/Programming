/**
 * @mainpage
 * # Загальне завдання
 * 1. **Сформувати** функцию, що заповнює масив випадковими простими числами.
 *
 *
 * @author Zakusilov N.
 * @date 21-dec-2020
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи функції, яка заповнює масив випадковими простими числами.
 *
 * @author Zakusilov N.
 * @date 21-des-2020
 */

#include <stdlib.h>
#include <time.h>

void prime_numbers(int array[], int max, int size);

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Оголошення змінних.
 * - Використання функції srand, щоб випадкові числа не повторювались.
 * - Обнулення масиву.
 * - Виклик функції prime_numbers.
 * @param SIZE - розмір масиву
 * @param MAX - максимальне значення чисел
 * @return успішний код повернення з програми (0)
 */

int main() {
	#define SIZE 3
	#define MAX 100
	srand(time(NULL));
	int result[SIZE];
	for (int i = 0; i < SIZE; i++) {
		result[i] = 0;
	}
	prime_numbers(result, MAX, SIZE);
	return 0;
}

/**
 * Заповнення масива випадковими простими числами
 *
 *
 * Функція бере раптове число з функції rand, та перевіряє чи просте воно. Якщо воно просте, додає його до масива.
 */
void prime_numbers(int array[], int max, int size) {
	int j = 0;
	int num;
	while (j < size) {
		while (array[j] == 0) {
			num = rand() % max;
			int k = num / 2 + 1;
      			for (k; k > 1; k--) {
				array[j] = num;
          			if ( num % k == 0){
            			array[j] = 0;
				break;
				}
			}
		}
		j++;
	}
}
