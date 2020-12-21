int main() {
	#define SIZE 2
	int matrix[SIZE][SIZE] = {1, 2, 3, 4};
	int result[SIZE][SIZE];
	for (int i = 0; i < SIZE; i++){
                for (int j = 0; j < SIZE; j++) {
			for (int k = 0; k < SIZE; k++) {
			result[i][j] = matrix[i][k] * matrix[k][j];
			}
		}
	}
	return 0;
}
