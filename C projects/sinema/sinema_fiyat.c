#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int kola,misir,bilet,su,toplam;
    
    printf("Ka� adet kola istersiniz ? = ");
    scanf("%d",&kola);
    
	printf("Ka� adet su istersiniz ? = ");
    scanf("%d",&su);
	
	printf("Ka� adet misir istersiniz ? = ");
    scanf("%d",&misir);
	
	printf("Ka� adet bilet istersiniz ? = ");
    scanf("%d",&bilet);    
    
    misir = misir*2;
    kola = kola*2;
    su = su*1;
    bilet = bilet*8;
    
    toplam =misir+su+bilet+kola;
    
    printf("Toplam tutar = %d",toplam);
    
	return 0;
}
