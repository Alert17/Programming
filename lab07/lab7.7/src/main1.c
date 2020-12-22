#include <stdarg.h>
#define SIZE 5

int var_func (int numbers, ... );

int main()
{
     	int result = var_func(SIZE, 2, 7, 4, 9, 1);
     	return 0;
}

int var_func (int numbers, ... ) {
 	int result = 0;
	va_list reas;
	va_start(reas, numbers);
 	int pos1 = va_arg(factor, int);
 	for (int i = 0; i < SIZE; i++){
  		int pos2 = va_arg(factor, int);
  		if (pos1 < pos2) {
      			result += 1;
  		}
  		pos1 = pos2;
 	}
 	va_end(reas);
     	return result;
}
