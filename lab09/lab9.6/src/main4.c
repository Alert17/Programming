/**
 * @mainpage
 * # Загальне завдання
 * 1. **Сформувати** функцию, що визначає кількість слів у тексті.
 *
 *
 * @author Zakusilov N.
 * @date 21-dec-2020
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи функції, що рахує слова в тексті.
 *
 * @author Zakusilov N.
 * @date 21-des-2020
 */

#include <stdlib.h>

int found_words(char array[], int size);

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Оголошення змінних.
 * - Передавання значення змінній words через функцію found_words.
 * @param SIZE - розмір масива
 * @param text - заданий текст
 * @return успішний код повернення з програми (0)
 */

int main() {
	#define SIZE 30
	char text[SIZE] = {"hello my dear friend"};
	int words = found_words(text, SIZE);
	return 0;
}

/**
 * Пошук та підрахунок слів у тексті
 *
 * Записуємо кількість слів у змінну tick. Слово вважається тоді, коли один символ дорівнює пропуску, а наступний не дорівнює.
 * Вважаємо що текст завжди починається з слова, тому лічильник одразу на 1.
 */
int found_words(char array[], int size) {
	int tick = 1;
	for (int i = 0; i < size; i++) {
		if ((array[i] == ' ') && (array[i + 1] != ' ')) {
			tick++;
		}
	}
return tick;
}
