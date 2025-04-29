#include <stdio.h>

int main(){
	
	double n;
	scanf("%lf", &n);
	
	if (n >= 3.5){
		printf("Cumlaude");
	} else if (n >= 3.0 && n <= 3.4){
		printf("Outstanding");
	} else if (n >= 2.5 && n <= 2.9){
		printf("Very good");
	} else if (n >= 2.1 && n <= 2.4){
		printf("good");
	} else if (n<=2.0){
		printf("yahh gk lulus");
	}
	
	return 0;
}
