int main(){
	#define ADD 0.001
	float num = 9;
	float divid = num;
	while (divid * divid > num){
		divid /= 2;
		}
	while (divid * divid < num ){
  		divid += ADD;
	}
return 0;
}

