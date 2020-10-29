#include <stdio.h>
#include <float.h>

int main(void) {
	float a;
	float tab[5] = {1.12, 1.33, 31.23, 54.34};
	scanf("%f", &a);

	for(int i=0; i<5; i++){
		if(((tab[i]-FLT_EPSILON) < a) && ((tab[i]+FLT_EPSILON) > a)){
			printf("Liczba znajduje siê w tablicy");
			return;
		}
	}

	printf("Liczba nie znajduje siê w tablicy");

	return 0;
}
