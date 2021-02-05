#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int s1,s2,s3,ort;
	
	printf("Ilk sinav notu giriniz = ");
	scanf("%d",&s1);
    
	printf("Ikinci sinav notu giriniz = ");
	scanf("%d",&s2);
	
	printf("Ucüncü sinav notu giriniz = ");
	scanf("%d",&s3);
		
	ort = (s1+s2+s3)/3;
	
	printf("********Not Hesaplayici**********\n\n");
	
	if (ort>=50) {
		
		printf("Notunuz : %d\n",ort);
		
		printf("Durum : Basarili");
	
	}else {
		
		printf("Notunuz : %d\n",ort);	
		
		printf("Basarisiz");
	}
	
	
	
	
	
	return 0;
}
