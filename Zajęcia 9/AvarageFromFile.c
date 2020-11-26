#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *fp = NULL;

    fp=fopen("liczby.txt", "r");
    float liczba, suma = 0;
    int ile = 0;

    while(fscanf(fp, "%f", &liczba) == 1){
        suma += liczba;
        ile++;
    }

    printf("Srednia %.2f", suma/ile);
    fclose(fp);
    return 0;
}
