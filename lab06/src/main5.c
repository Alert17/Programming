int main() {
	#define SIZE 3
	int arr[SIZE][SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int result[SIZE][SIZE];
	int flag;
	result[0][0] = arr[SIZE - 1][SIZE - 1];
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (j + 1 > SIZE) {
				result[i + 1][SIZE - j] = arr[i][j]; 
			} else {
			result[i][j + 1] = arr[i][j];
			}
		}
	}
	return 0;
}
