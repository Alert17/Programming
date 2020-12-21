#include <stdbool.h>
int summary(number);
int main(){
  	int num = 5;
  	int sum = 0;
	bool flag = false;
	sum = summary(num);
	if (num == sum) {
		flag = true;
	}
return 0;
}
int summary(number) {
	int sum = 0;
	for(int i = 1; i <= number / 2; i++){
        	if (number % i == 0){
            	sum += i;
		}
	}
return sum;
}
