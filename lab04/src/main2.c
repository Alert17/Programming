//Знайти відношення дробової частини числа до цілої
int main()
{
	#define NUMBER  536.869f
	int num1 = NUMBER; 
	int num2 = NUMBER * 1000;
	num2 = num2 % 1000; //Спочатку знаходимо окремо цілу та дробову частину числа
	float result;
	if (num1 == 0){
		result = 0; //Перевірка на ділення на 0, всю программу пишемо через умову, якщо ціла частина на яку ділемо не дорівнює нулю
	} else {
		result = num2 / (float) num1;
		result *= 100;
        	result = (int) result;
        	result = (float) result;
        	result = result / 100; //Останні дії - це округлення результату до двох знаків після коми
    		}
return 0;
}
