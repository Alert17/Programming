/**
 * @mainpage
 * # Загальне завдання
 * 1. **Сформувати** функцию, що знаходить НСД (найбільший спільник дільник) двох чисел.
 *
 *
 * @author Zakusilov N.
 * @date 21-dec-2020
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи функції, що знаходить НСД
 * 	шляхом зменшення більшого числа.
 *
 * @author Zakusilov N.
 * @date 21-des-2020
 */

#include <stdlib.h>

int maximum(int a, int b);

int cycle(int a, int b, int max);

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Оголошення змінних.
 * - Задання значення max через функцію maximum
 * - Знаходження результату через функцію cycle
 * @param first, second - задані числа
 * @param result, max - змінні, які будемо використовувати
 * @return успішний код повернення з програми (0)
 */

int main(){
	int first = 4;
	int second = 8;
	int result;
	int max;
	max = maximum(first, second);
	result = cycle(first, second, max);
return 0;
}

/**
 * Визначення максимального числа.
 *
 * Функція порівнює два числа, та повертає найбільше.
 */

int maximum(int a, int b) {
 	int max;
	if (a > b) {
                max = a;
        } else {
                max = b;
	}
	return max;
}
/**
 * Знаходження НСД.
 *
 * Функція через цикл перевіряє подільність кожного числа починаючи з максимального до нуля.
 */
int cycle(int a, int b, int max) {
	int res;
  	for(int i = max; i != 0; i--){
                if (a % i == 0 && b % i == 0){
                res = i;
                break;
                }
        }
	return res;
}
