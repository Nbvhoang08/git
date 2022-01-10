#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void chuan_hoa(char *st){
//	int i,j;
//	
//	int n = strlen(st);
//	for (i=0;i<n;i++){
//		if(st[i]==' ' && st[i+1]==' '){
//			for (j = i+ 1;j<n;j++){
//				st[j]=st[j+1];
//			}
//			n--;
//			i--;
//		}
//	}
//	
//}
//
//int dem_so_tu(char *st) {
//	int i,dem=0;
//	chuan_hoa(st);
//	for (i=0 ; i<strlen(st);i++){
//		if (st[i]==' '){
//			dem++;
//		}
//	}
//	return dem+1;
//}
//
//
//int main (){
//	char st[100];
//	gets(st);
//	printf("so tu la: %d\n",dem_so_tu(st));
//}
void replace(char *st ,char a ,char b){
	int i;
	for (i= 0; i < strlen(st);i++){
		if (st[i]==a){
			st[i]=b;
		}
	}
}
int main(){
	char st[100],a,b;
	printf("nhap cau; ");
	gets(st);
	printf("nhap ki tu can thay the: ");
	scanf("%c%c",&a,&b);
	printf("nhap kis tu thay the: ");
	scanf("%c",&b);
	replace(st,a,b);
	printf("a= %c b= %c\n",a,b);
	printf("ten la: %s\n",st);		
}

