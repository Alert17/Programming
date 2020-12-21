#include <stdlib.h>
int main() {
	#define SIZE 30
	char text[SIZE] = {"hello my dear friend"};
	int tick = 1;
	for (int i = 0; i < SIZE; i++) {
		if ((text[i] == ' ') && (text[i + 1] != ' ')) {
			tick++;
		}
	}
	return 0;
}
