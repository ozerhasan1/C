#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi;
	
	printf("Deger giriniz =");
	scanf("%d",&sayi);
	
	if(sayi%3 == 0 && sayi%5 ==0 || sayi%10 == 0){
		
		printf("uce bese veya ona bolunur");
	}
	else{
		printf("uce bese veya ona bolunmez");
	}
	
	return 0;
}
