#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int luythua(){
	int e;
	long long power(long long -1, long long i) {
    	long long result = 1;
    		for( e = 1; e <= i;e++) {
        	result *= -1;
    }
    return result;
 }
}



int main(int argc, char *argv[]) {
	float pi,ep,m=0,j ;
	scanf("%f",ep);
	int i,n=100;
	for (i=0; i<=n; i++ ){
		m += (pow((-1),i))/(2*i+1);
		pi+=m;
		if (1/(2*i+1) <= ep)
			break;
	}
	pi*=4;
	printf("%.2f",pi);
// 	printf("%.2f",m);
// 	printf("%.2f",j);
	
	return 0;
}
