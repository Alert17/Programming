#include <stdlib.h>
#include <time.h>
int main() {
	#define SIZE 3
	#define MAX 100
	srand(time(NULL));
	int result[SIZE];
	int j = 0;
	int num;
	for (int i = 0; i < SIZE; i++) {
		result[i] = 0;
	}
	while (j < SIZE) {
		while (result[j] == 0) {
			num = rand() % MAX;
			int k = num / 2 + 1;
      			for (k; k > 1; k--) {
				result[j] = num;
          			if ( num % k == 0){
            			result[j] = 0;
				break;
				}
			}
		}
		j++;
	}
	return 0;
}
