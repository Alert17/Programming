#include <stdlib.h>
#include <time.h>

void prime_numbers(int array[], int max, int size);

int main() {
	#define SIZE 3
	#define MAX 100
	srand(time(NULL));
	int result[SIZE];
	for (int i = 0; i < SIZE; i++) {
		result[i] = 0;
	}
	prime_numbers(result, MAX, SIZE);
	return 0;
}

void prime_numbers(int array[], int max, int size) {
	int j = 0;
	int num;
	while (j < size) {
		while (array[j] == 0) {
			num = rand() % max;
			int k = num / 2 + 1;
      			for (k; k > 1; k--) {
				array[j] = num;
          			if ( num % k == 0){
            			array[j] = 0;
				break;
				}
			}
		}
		j++;
	}
}
