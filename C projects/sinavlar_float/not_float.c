#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float s1,s2,s3,proje,ort;
	
	printf("Birinci sinav notu giriniz = ");
	scanf("%f",&s1);
    
	printf("Ikinci sinav notu giriniz = ");
	scanf("%f",&s2);
	
	printf("Ucuncu sinav notu giriniz = ");
	scanf("%f",&s3);
	
	printf("Proje notu giriniz = ");
	scanf("%f",&proje);	
	
	ort = ((s1+s2+s3+proje)/4);
	
	printf("Notunuz = %f",ort);
	
	return 0;
}
