#include <stdio.h>

#define ANSWER 7

int main(void) {
	int a = -1;

	while(a != ANSWER){
        printf("Czy dana liczba?\n");
        scanf("%d", &a);

        if(a < ANSWER)
            printf("MNIEJSZA\n\n");

        if(a > ANSWER)
            printf("WIEKSZA\n\n");
	}

	printf("TAK");

	return 0;
}
