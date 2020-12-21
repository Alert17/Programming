
void centre(char array[], char arr_res[], int size);

int main(){

	#define SIZE 15

	char word[SIZE] = {'I', 'v', 'a', 'n', 'o', 'v', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\0'};
	char result[SIZE];

	for (int i = 0; i < SIZE; i++)
		result[i] = '_';
	centre(word, result, SIZE);
}

void centre(char array[], char arr_res[], int size){

	int b = 0;
	int lenght = 0;

	for (int i = 0; i < size; i++){
		if (array[i] == ' '){
			lenght = i;
			break;
		}
	}

	for (int j = (size - lenght) / 2; j < lenght + ((size - lenght) / 2); j++) {
		arr_res[j] = array[b];
		b++;
	}
}
