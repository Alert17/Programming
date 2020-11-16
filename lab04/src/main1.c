//За значенням тексової команди знайти довжину, площу, або об'єм окружності
int main () 
{
	#define PI 3.14
	int radius = 2;
	float result;
	char command = 's';
	/* Основний принцип роботи - перевірка команди через різні умови,
	до кожної команди ми виводимо формулу для обчислення результату*/
	if (command == 's') {
		result = PI * radius * radius;
	} else if (command == 'l') {
			result = 2 * PI * radius;
		} else if (command == 'v') {
				result = (4 * PI * radius * radius * radius) / 3;
			} else {
				result = 0; //Якщо команда "зайва", то результат дорівнює нулю
				}
return 0;
}
