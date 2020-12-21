int main() {
    	int num = 5223;
    	char result[4][15];
    	char thousands[9][20] = { "One thousand ", "Two thousands ", "Three thousands ", "Four thousands ", "Five thousands", "Six thousands ", "Seven thousands ", "Eight thousands ", "Nine thousands " };
    	char hundreds[9][20] = { "one hundred ", "two hundreds ", "three hundreds ", "four hundreds ", "five hundreds ", "six hundreds ", "seven hundreds ", "eight hundreds ", "nine hundreds " };
    	char exception[10][20] = { "ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen " };
    	char decs[9][15] = { " twenty ", " thirty ", " fourty ", " fifty ", " sixty ", " seventy ", " eighty ", " ninety " };
	char units[9][15] = { " one ", " two ", " three ", " four ", " five ", " six ", " seven ", " eight ", " nine " };
	for (int i = 0; i < 15; i++) {
        	result[0][i] = thousands[num / 1000 - 1][i];
        	result[1][i] = hundreds[num % 1000 / 100 - 1][i];
        	result[2][i] = decs[num % 100 / 10 - 2][i];
        	if (num % 100 >= 10 && num % 100 < 20) {
            		result[3][i] = exception[num % 100 - 10][i];
        	} else {
            		result[3][i] = units[num % 10 - 1][i];
        	}
    	}
    return 0;
}
