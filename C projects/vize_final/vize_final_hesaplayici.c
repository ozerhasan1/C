#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,vize,final,ort;
	
	printf("*****Ogrenci not sistemi*****\n\n");
	
	printf("vize notu giriniz = ");
	scanf("%d",&vize);
	
    printf("final notu giriniz = ");
	scanf("%d",&final);
		
	a = vize*40/100;
	b = final*60/100;
    ort = a+b;	
	
	printf("Ortalamaniz =%d",ort);
	
	return 0;
}
