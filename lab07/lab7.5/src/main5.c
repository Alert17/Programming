float divid(float root,float number);
int main(){
	#define ADD 0.001
	float num = 9;
	float root = num;
	float result = divid(root, num);
return 0;
}

float divid(float root, float number) {
	while (root * root > number){
		root /= 2;
		}
	while (root * root < number){
  		root += ADD;
	}
return root;
}
