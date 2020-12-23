#include <stdarg.h>
#define SIZE 5

int found_couple(int numbers, ... );

int main()
{
     	int result = found_couple(SIZE, 2, 3, 2, 1, 6);
     	return 0;
}

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
