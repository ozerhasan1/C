#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi;
	
	printf("Deger giriniz = ");
	scanf("%d",&sayi);
	
	
	if(sayi%5 == 0){
		printf("Girilen deger 5e tam bolunur");;
	}
	else {
		printf("Girilen deger 5e tam bolunmez");
	}
	
	
	return 0;
}
