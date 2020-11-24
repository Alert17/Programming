#include <stdbool.h>
int main(){
  	int num = 5;
  	int sum = 0;
	bool flag = false;
    	for(int i = 1; i <= num / 2; i++){
        	if (num % i == 0){
            	sum += i;
		}
	}
	if (num == sum) {
		flag = true;
	}
return 0;
}
