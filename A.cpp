#include <stdio.h>
#include <math.h>

int main(){
	double T, H;
	
	scanf("%lf", &T);
	H = pow(2, T)-1;
	printf("%.0lf\n", H); 
	
	return 0;
}
