void texting(int num, char array[255]);
int main() {
    	int num = 5213;
    	char result[255];
    	texting(num, result);
	return 0;
}




void texting(int number, char arr[255]) {
	char array[4][15];
	char thousands[9][20] = { "One thousand ", "Two thousands ", "Three thousands ", "Four thousands ", "Five thousands", "Six thousands ", "Seven thousands ", "Eight thousands ", "Nine thousands "};
        char hundreds[9][20] = { "one hundred ", "two hundreds ", "three hundreds ", "four hundreds ", "five hundreds ", "six hundreds ", "seven hundreds ", "eight hundreds ", "nine hundreds " };
        char exception[10][20] = { "ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen " };
        char decs[9][15] = { " twenty ", " thirty ", " fourty ", " fifty ", " sixty ", " seventy ", " eighty ", " ninety " };
        char units[9][15] = { " one ", " two ", " three ", " four ", " five ", " six ", " seven ", " eight ", " nine " };
	for (int i = 0; i < 15; i++) {
        	array[0][i] = thousands[number / 1000 - 1][i];
        	array[1][i] = hundreds[number % 1000 / 100 - 1][i];
        	array[2][i] = decs[number % 100 / 10 - 2][i];
        	if (number % 100 >= 10 && number % 100 < 20) {
            		array[3][i] = exception[number % 100 - 10][i];
        	} else {
            	array[3][i] = units[number % 10 - 1][i];
        	}
	}
	arr[255] =array[1][15] + array [2][15] + array[3][15] + array[4][15]; 
}
