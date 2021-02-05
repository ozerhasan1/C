#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float turkce,matematik,fen,sosyal,puan;
	
	float taban = 100.160;
		
	printf("Turkce netiniz = ");
	scanf("%f",&turkce);

	printf("Matematik netiniz = ");
	scanf("%f",&matematik);
	
	printf("Fen bilgisi netiniz = ");
	scanf("%f",&fen);
	
	printf("Sosyal netiniz = ");
	scanf("%f",&sosyal);
	
	turkce = turkce*1.999;
	matematik = matematik*3.998;
	fen = fen*2.999;
	sosyal = sosyal*1;
	puan = turkce+matematik+fen+sosyal+taban;
	
	printf("********YGS Puan Hesaplayici**********\n\n");
	
	printf("Ygs puaniniz = %f",puan);
	
	
	return 0;
}
