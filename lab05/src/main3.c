#include <stdbool.h>
int main(){
  	int ticket = 235622;
  	bool flag = false;
  	int sum1 = ticket / 100000 + (ticket / 10000) % 10 + (ticket / 1000) % 10;
  	int sum2 = (ticket / 100) % 10 + (ticket / 10) % 10 + ticket % 10;
    	if ( sum1 == sum2 ){
      		flag = true;
    	} else {
		flag = false;
    	}
return 0;
}
