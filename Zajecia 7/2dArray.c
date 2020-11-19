#include <stdio.h>
#include <stdlib.h>

int** zwroc(int x, int y){
    int **tab = (int **)malloc(x * sizeof(int *));
    for (int i=0; i<x; i++)
        tab[i] = (int *)malloc(y * sizeof(int));

    return tab;
}

void zwolnij(int** tab, int x){
    for (int i = 0; i < x; i++)
        free(tab[i]);

    free(tab);
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    int** tab = zwroc(x, y);

    for (int i=0; i<x; i++)
      for (int j=0; j<y; j++)
         tab[i][j] = i+j;

    for (int i=0; i<x; i++, printf("\n"))
      for (int j=0; j<y; j++)
         printf("%d ", tab[i][j]);

    zwolnij(tab, x);

    return 0;
}
