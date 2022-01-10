#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n;
	float epsilon ,e = 1;
	scanf("%f",&epsilon);
	int iepsilon = epsilon*1000000;

	for (n = 1 ; giaithua(n) >= iepsilon; n++ ){
		e = e + (giaithua(n)/1000000);
	}
	printf("\ne = %f",e);
}

int giaithua(int n){
	float giai_thua=1;
	int i;
	for ( i =1 ;i<=n; i++){
		giai_thua = giai_thua * i;
	}
	return (1/giai_thua);

}


