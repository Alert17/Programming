int main(){
	#define SIZE 15
	char word[SIZE] = {'I', 'v', 'a', 'n', 'o', 'v', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\0'};
	char result[SIZE];
	int lenght;
	int b = 0;
	for (int i = 0; i < SIZE; i++)
		result[i] = '_';
	for (int i = 0; i < SIZE; i++){
		if (word[i] == ' '){
			lenght = i;
			break;
		}
	}
	for (int j = (SIZE - lenght) / 2; j < lenght + ((SIZE - lenght) / 2); j++) {
		result[j] = word[b];
		b++;
	}
return 0;
}
