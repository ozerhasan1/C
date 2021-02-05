#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int s1,s2,s3,proje,ort;
	
	printf("Birinci Sinav notu giriniz = ");
	scanf("%d",&s1);
	
	printf("Ikinci  Sinav notu giriniz = ");
	scanf("%d",&s2);
	
	printf("Ucuncu Sinav notu giriniz = ");
	scanf("%d",&s3);
	
	printf("Proje notu giriniz = ");
	scanf("%d",&proje);
	
	ort =(s1+s2+s3+proje)/4;

printf("***********Not Sistemi************\n\n");	
	if(ort >0 && ort <50) {
	
	printf("Notunuz : FF");
	
	}
	else if(ort >50 && ort <60) {
	
	printf("Notunuz : DD");
	
	}
	else if(ort >60 && ort <70) {
	
	printf("Notunuz : CC");
	
	}
	else if(ort >70 && ort <85) {
	
	printf("Notunuz : BB");

	}
	else{
		printf("Notunuz : AA");

	}
	
	
	
	
	
	
	
	return 0;
}
