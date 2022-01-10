#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
//	char name[30],saa[20],clas[20],MSV[20],de[20]; 
//
//	fgets(name ,30, stdin);
//	fgets(saa ,sizeof(saa)+10, stdin);
//	fgets(clas ,sizeof(clas)+10, stdin);
//	fgets(MSV ,sizeof(MSV)+10, stdin);
//	fgets(de ,20, stdin);
//	printf("ho va ten %s \n",name);
//	printf("Ma so sinh vien : %s\n", MSV );
//	printf("gioi tinh : %s\n",saa );
//	printf("lop %s \n",clas);
//	printf("de so : %s \n",de);
//	




	int number;
	scanf("%d",&number);
	
	printf("hang nghin %d\n",hangnghin(number));
	printf("hang tram %d\n",hangtram(number));
	printf("hang chuc %d\n",hangchuc(number));
	printf("hang don vi %d\n",hangdonvi(number));
	
	
	

	
	return 0;
}

int hangnghin(int number){
	int sodu;
	int hangnghin;
	
	sodu = number % 1000;
	hangnghin = (number - sodu)/1000;
	return hangnghin;
}
int hangtram(int number){
	int numntram;
	int sodu;
	int hangtram;
	
	numntram=number-(hangnghin(number)*1000);
	
	sodu = numntram % 100;
	hangtram = (numntram - sodu)/100;
	return hangtram;
}
int hangchuc(int number){
	int numchuc;
	int sodu;
	int hangchuc;
	
	numchuc = number - (hangnghin(number)*1000) - (hangtram(number)*100);
	
	sodu = numchuc % 10;
	hangchuc = (numchuc - sodu)/10;
	return hangchuc;
}

int hangdonvi(int number){
	
	int hangdv;
	
	hangdv = number - (hangnghin(number)*1000) - (hangtram(number)*100) - (hangchuc(number)*10);
	return hangdv;
}



