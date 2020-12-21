#include <stdlib.h>

int found_words(char array[], int size);

int main() {
	#define SIZE 30
	char text[SIZE] = {"hello my dear friend"};
	int words = found_words(text, SIZE);
	return 0;
}

int found_words(char array[], int size) {
	int tick = 1;
	for (int i = 0; i < size; i++) {
		if ((array[i] == ' ') && (array[i + 1] != ' ')) {
			tick++;
		}
	}
return tick;
}
