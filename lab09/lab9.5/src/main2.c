/**
 * @mainpage
 * # Загальне завдання
 * 1. **Сформувати** функцию, що знаходить просте число.
 *
 *
 * @author Zakusilov N.
 * @date 21-dec-2020
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи функції, що перевіряє число, та вказує просто воно чи ні.
 *
 * @author Zakusilov N.
 * @date 21-des-2020
 */
#include <stdbool.h>

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Оголошення змінних.
 * - Знаходження результату через функцію sample. Результат отримуємо у булевому значенні.
 * 	true - якщо число просте, та false - якщо ні
 * @param num - задане число
 * @param flag - булеве значення результату
 * @return успішний код повернення з програми (0)
 */
bool sample(number);

int main(){
  	int num = 13;
  	bool flag = true;
      	flag = sample(num);
return 0;
}

/**
 * Визначення простого числа.
 *
 * Функція перевіряє подільність числа на можливі дільники починаючи с половини заданого числа.
 * Простим є число, яке ділиться тільки на себе та 1.
 */

bool sample(int number) {
	short flag = true;
	if (number <= 1) {
                flag = false;
        } else {
                int k = number / 2;
                for (k; k > 1; k--) {
                        if ( number % k == 0){
                                flag = false;
                        break;
                        }
                }
        }
return flag;
}
