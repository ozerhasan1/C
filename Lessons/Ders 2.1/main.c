#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char kitapadi[20]="sefiller";
	char kitapyazar[10]="hugo";
	char kitaptur[10]="klasik";
	char kitapsayfa[3]="200";
	char kitapbasimyil[4]="1900";
	
	printf("*********Kitap_Tanitim*********\n\n");
	
	
	printf("Kitap adi = %s\n",kitapadi);
	printf("Kitap yazar = %s\n",kitapyazar);
	printf("Kitap turu = %s\n",kitaptur);
	printf("Kitap sayfasi = %s\n",kitapsayfa);
	printf("Kitap basim yili = %s\n\n",kitapbasimyil);
	
	
	return 0;
}
