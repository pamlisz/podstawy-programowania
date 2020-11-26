#include <stdio.h>
#include <stdlib.h>

#define ROZMIAR 5
int distance(int *a, int *b){
    return b-a;
}

int main()
{
    int tab[ROZMIAR] = {1, 2, 3, 4, 5};
    int ile = distance(&tab[0], &tab[ROZMIAR]);
    printf("%d", ile);

    return 0;
}
