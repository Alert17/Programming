#include <stdbool.h>

bool sample(number);

int main(){
  	int num = 13;
  	bool flag = true;
      	flag = sample(num);
return 0;
}


bool sample(int number) {
	short flag = true;
	if (number <= 1) {
                flag = false;
        } else {
                int k = number / 2;
                for (k; k > 1; k--) {
                        if ( number % k == 0){
                                flag = false;
                        break;
                        }
                }
        }
return flag;
}
