#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);

	switch(a){
    case 1:
    case 2:
        printf("slynal z madrosci");
        break;
    case 3:
        printf("poszedl do lacznosci");
        break;
    default:
        printf("nie bylo tyle synow");
        break;
	}

	return 0;
}
