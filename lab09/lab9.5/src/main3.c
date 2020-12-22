/**
 * @mainpage
 * # Загальне завдання
 * 1. **Сформувати** функцию, що перевіряє значення білету, та виводить результат, чи "щасливий" він,
 * 	тобто сума перших трьох чисел дорівнюють сумі останніх трьох чисел.
 *
 *
 * @author Zakusilov N.
 * @date 21-dec-2020
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи функції, що перевіряє "щасливий" білет чи ні.
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
 * - Знаходження результату через функцію lucky_ticket. Результат отримуємо у булевому значенні.
 * 	true - якщо квиток "щасливи", та false - якщо ні
 * @param ticket - номер квитка
 * @param flag - булеве значення результату
 * @return успішний код повернення з програми (0)
 */

bool lucky_test(number);
int main(){
  	int ticket = 235622;
  	bool flag;
	flag = lucky_test(ticket);
return 0;
}

/**
 * Визначення "щасливого" квитка.
 *
 * Функція рахує суми перших та останніх трьох цифр та порівнює їх.
 */

bool lucky_test(number) {
	int sum1 = 0;
	int sum2 = 0;
	bool flag;
	for (int i = 0; i < 3; i++) {
		sum1 += number % 10;
		number = number / 10;
	}
	for (int i = 3; i < 6; i++) {
		sum2 += number % 10;
		number = number / 10;
	}
	if (sum1 == sum2 ){
      		flag = true;
    	} else {
		flag = false;
    	}
return flag;
}
