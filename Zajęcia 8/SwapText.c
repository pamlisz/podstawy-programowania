#include <stdio.h>
#include <stdlib.h>

#define ROZMIAR 5
void swapText(char *a, char *b){
    char temp;
    for(int i=0; i<ROZMIAR; i++){
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main()
{
    char a[ROZMIAR] = "pies\0";
    char b[ROZMIAR] = "smok\0";

    printf("%s %s\n", a, b);

    swapText(a, b);

    printf("%s %s", a, b);
    return 0;
}
