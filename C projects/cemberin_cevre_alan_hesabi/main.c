#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float r,alan,cevre;
    float pi = 3.14;
    printf("******Cemberde alan ve cevre hesabi******\n\n");
    printf("Yaricap giriniz = ");
    scanf("%f",&r);
    
    alan = pi*r*r;
    cevre = 2*pi*r;
    
    printf("alan = %f\n",alan);
    printf("cevre = %f",cevre);



	
	return 0;
}
