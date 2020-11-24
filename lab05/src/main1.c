int main(){
	int first = 4;
	int second = 8;
	int result;
	int max;
	if (first > second) {
		max = first;
	} else {
		max = second;
		}
	for(int i = max; i != 0; i--){
		if (first % i == 0 && second % i == 0){
        	result = i;
		break;
        	}
	}
return 0;
}
