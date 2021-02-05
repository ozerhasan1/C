#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int bagaj,el,ekstra;
		
	printf("Bagaj kac kg? = ");
	scanf("%d",&bagaj);
	
	printf("el kac kg? = ");
	scanf("%d",&el);
	bagaj=bagaj-15;
	el=el-8;
	
	ekstra = (bagaj+el)*5;
	
	
	printf("toplam odeyeceginiz tutar = %d",ekstra);
	
	return 0;
}
