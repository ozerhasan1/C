#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char kitapad[10],yazar[10],sayfa[3],basimyil[4],basimyer[10],tur[10];
	
	printf("Kitap adi = ");
	scanf("%s",kitapad);
	
	printf("Yazar adi = ");
	scanf("%s",yazar);
	
	printf("Kitap sayfasi = ");
	scanf("%s",sayfa);
	
	printf("Basim yili = ");
	scanf("%s",basimyil);
	
	printf("Basim yeri = ");
	scanf("%s",basimyer);
	
	printf("Kitap turu = ");
	scanf("%s",tur);
	
	printf("*******Kitap Bilgi Sistemi**********\n\n");
	
	printf("Kitap adi = %s\n",kitapad);
	
	printf("Kitap yazari = %s\n",yazar);
	
	printf("Kitap sayfa sayisi = %s\n",sayfa);
	
	printf("Kitap turu = %s\n",tur);
	
	printf("Kitap basim yili = %s\n",basimyil);
	
	printf("Kitap basim yeri = %s\n\n",basimyer);
	return 0;
}
