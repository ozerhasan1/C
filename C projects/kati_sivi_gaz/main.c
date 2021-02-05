#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int derece;
	
	printf("Derece giriniz = ");
	scanf("%d",&derece);
	
	if(derece <=0 ) {
		printf("maddenin hali : kati");
	}
	else if (derece >=0 && derece <=100) {
		printf("maddenin hali : sivi");
	}
	else {
		printf("maddenin hali : gaz");
	
	}
	
	
	return 0;
}
