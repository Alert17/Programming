#include <stdlib.h>

int maximum(int a, int b);

int found_multiple(int a, int b, int max);

int main(){
	int first = 4;
	int second = 8;
	int result;
	int max;
	max = maximum(first, second);
	result = found_myltiple(first, second, max);
return 0;
}


int maximum(int a, int b) {
 	int max;
	if (a > b) {
                max = a;
        } else {
                max = b;
	}
	return max;
}

int found_multiple(int a, int b, int max) {
	int res;
  	for(int i = max; i != 0; i--){
                if (a % i == 0 && b % i == 0){
                res = i;
                break;
                }
        }
	return res;
}
