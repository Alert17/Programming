#include <stdbool.h>
int main(){
  	int num = 13;
  	bool flag = true;
      	if (num <= 1) {
		flag = false;
      	} else {
      		int k = num / 2;
      		for (k; k > 1; k--) {
          		if ( num % k == 0){
            			flag = false;
            		break;
          		}
      		}
	}
return 0;
}
