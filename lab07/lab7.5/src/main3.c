#include <stdbool.h>
bool lucky_test(number);
int main(){
  	int ticket = 235622;
  	bool flag;
	flag = lucky_test(ticket);
return 0;
}

bool lucky_test(number) {
	int sum1 = 0;
	int sum2 = 0;
	bool flag;
	for (int i = 0; i < 3; i++) {
		sum1 += number % 10;
		number = number / 10;
	}
	for (int i = 3; i < 6; i++) {
		sum2 += number % 10;
		number = number / 10;
	}
	if (sum1 == sum2 ){
      		flag = true;
    	} else {
		flag = false;
    	}
return flag;
}
