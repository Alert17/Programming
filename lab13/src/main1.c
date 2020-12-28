/**
 * @mainpage
 * # Загальне завдання
 * 1. **Сформувати** функцию, що визначає кількість слів у кожному рядку текста.
 *
 *
 * @author Zakusilov N.
 * @date 21-dec-2020
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи функції, що рахує слова в рядках.
 *
 * @author Zakusilov N.
 * @date 24-dec-2020
 */

#include <stdlib.h>


/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Оголошення змінних.
 * - Передавання значення змінній words через функцію found_words.
 *  - Пошук та підрахунок слів у тексті
 * Записуємо кількість слів у змінну tick. Слово вважається тоді, коли один символ дорівнює пропуску, а наступний не дорівнює.
 * Вважаємо що текст завжди починається з слова, тому лічильник одразу на 1.
 *
 *
 * @param SIZE - довжина рядка
 * @param SIZE_STR - кількість рядків
 * @param text - заданий текст
 * @param quantity - масив, в якому кількість слів кожного рядка
 * @return успішний код повернення з програми (0)
 */

int main() {
#define SIZE 30
#define SIZE_STR 2

    char text[SIZE_STR][SIZE] = {{"hello my dear friend"}, {"hello world"}};
    int quantity[SIZE_STR];

    int tick;
    for(int i = 0; i < SIZE_STR; i++){
        tick = 1;
        for(int j = 0; j < SIZE; j++){
            if (text[i][j] == ' ' && text[i][j + 1] != ' ') {
                tick++;
            }
        }
        quantity[i] = tick;
    }

    return 0;
}

