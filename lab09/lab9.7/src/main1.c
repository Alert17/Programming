/**
 * @mainpage
 * # Загальне завдання
 * 1. **Сформувати** варіативну функцию, що рахує кількість пар однакових чисел в масиві.
 *
 *
 * @author Zakusilov N.
 * @date 21-dec-2020
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи варіативної функції, що підраховує пари чисел.
 *
 * @author Zakusilov N.
 * @date 21-des-2020
 */
#include <stdarg.h>
#define SIZE 5

int found_couple (int numbers, ... );

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Задання значення результату через функцію found_couple.
 * @return успішний код повернення з програми (0)
 */

int main()
{
     	int result =found_couple(SIZE, 2, 7, 4, 9, 1);
     	return 0;
}

/**
 * Варіативна функція підрахунку пар чисел.
 *
 * Функція задає параметрам pos1 та pos2 значення чисел поступово пересуваючись по заданим та перевіряє їх.
 * Якщо числа дорівнюють додаємо до результат одиницю.
 */
int found_couple (int numbers, ... ) {
 	int result = 0;
	va_list param;
	va_start(param, numbers);
 	int pos1 = va_arg(param, int);
 	for (int i = 0; i < SIZE; i++){
  		int pos2 = va_arg(param, int);
  		if (pos1 < pos2) {
      			result += 1;
  		}
  		pos1 = pos2;
 	}
 	va_end(param);
     	return result;
}
