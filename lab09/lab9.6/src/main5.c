/**
 * @mainpage
 * # Загальне завдання
 * 1. **Сформувати** функцию, яка зсуває квадратну матрицю на один елемент, а останній повертає в перший.
 *
 *
 * @author Zakusilov N.
 * @date 21-dec-2020
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи функції, яка зсуває матрицю.
 *
 * @author Zakusilov N.
 * @date 21-des-2020
 */

int get_linear_index(int i, int j, int size);

void shift(int linMatrix[], int linResult[], int size);

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Оголошення двомірного масиву - матриці.
 * - Переведення двомірного масиву в одномірний, використовуючи функцію get_linear_index.
 * - Виклик функції shift.
 * - Повернення з одномірного масиву в двомірний.
 * @param SIZE - розмір масива
 * @return успішний код повернення з програми (0)
 */

int main() {
	#define SIZE 3
	int arr[SIZE][SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int result[SIZE][SIZE];
	int linear[SIZE * SIZE];
	int linearResult[SIZE * SIZE];
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			linear[get_linear_index(i, j, SIZE)] = arr[i][j];
		}
	shift(linear, linearResult, SIZE);
	}
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
 * Функція лінійного зсуву матриці
 *
 * Функція отримую лінійний масив, та заповнює його таким чином, що в результат отримуємо тіж самі елементи, але сдвигнуті.
 */


void shift(int linMatrix[], int linResult[], int size) {
	linResult[0] = linMatrix[size * size];
	for (int i = 0; i < size * size - 1; i++) {
		linResult[i+1] = linMatrix[i];
	}
}


