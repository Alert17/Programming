#include <stdbool.h>
int main(){
  	int ticket = 235622;
  	bool flag = false;
  	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < 3; i++) {
		sum1 += ticket % 10;
		ticket = ticket / 10;
	}
	for (int i = 3; i < 6; i++) {
			sum2 += ticket % 10;
			ticket = ticket / 10;
	}
    	if (sum1 == sum2 ){
      		flag = true;
    	} else {
		flag = false;
    	}
return 0;
}
