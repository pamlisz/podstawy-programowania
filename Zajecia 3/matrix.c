#include <stdio.h>

#define N 3

int main(void) {
	int tab[N][N];

	for(int i=0; i<N; ++i){
        for(int j=0; j<N; j++){
            scanf("%d", &tab[i][j]);
        }
	}

    printf("\n");

	for(int i=0; i<N; ++i, printf("\n")){
        for(int j=0; j<N; j++){
            printf("%d ", tab[i][j]);
        }
	}

	return 0;
}
