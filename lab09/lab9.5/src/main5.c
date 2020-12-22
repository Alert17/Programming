/**
 * @mainpage
 * # Загальне завдання
 * 1. **Сформувати** функцию, що знаходить квадратний корінь числа.
 *
 *
 * @author Zakusilov N.
 * @date 21-dec-2020
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи функції, що знаходить корінь числа шляхом дадовання константної величини
 *
 * @author Zakusilov N.
 * @date 21-des-2020
 */

float divid(float root,float number);
/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Оголошення змінних.
 * - Знаходження кореня числа через функцію divid.
 * - Порівняння суми з числом.
 * @param num - задане число
 * @return успішний код повернення з програми (0)
 */

int main(){
	#define ADD 0.001
	float num = 9;
	float root = num;
	float result = divid(root, num);
	return 0;
}

/**
 * Знаходження кореня числа.
 *
 * Функція спочатку надходить до найближчого значення шляхом поділу на 2,
 * а після цього додає константну величину очікуючи результата.
 */

float divid(float root, float number) {
	while (root * root > number){
		root /= 2;
		}
	while (root * root < number){
  		root += ADD;
	}
return root;
}
