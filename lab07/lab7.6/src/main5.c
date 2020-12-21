int get_linear_index(int i, int j, int size);
void shift(int linMatrix[], int linResult[], int size);
int main() {
	#define SIZE 3
	int arr[SIZE][SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int result[SIZE][SIZE];
	int linear[SIZE * SIZE];
	int linearResult[SIZE * SIZE];
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			linear[get_linear_index(i, j, SIZE)] = arr[i][j];
		}
	shift(linear, linearResult, SIZE);
	}
	for (int i = 0; i < SIZE; i++) {
        	for (int j = 0; j < SIZE; j++) {
            		result[i][j] = linearResult[get_linear_index(i, j, SIZE)];
        	}
    	}
	return 0;
}

int get_linear_index(int i, int j, int size) {
    	return i * size + j;
}




void shift(int linMatrix[], int linResult[], int size) {
	linResult[0] = linMatrix[size * size];
	for (int i = 0; i < size * size - 1; i++) {
		linResult[i+1] = linMatrix[i];
	}
}


