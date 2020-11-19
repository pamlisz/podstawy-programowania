#include <stdio.h>
#include <ctype.h>

void zmienLitery(char* tekst){
    for(int i=0; tekst[i] != '\0'; i++){
        if(tekst[i] >= 'A' && tekst[i] <= 'Z')
            tekst[i] = tolower(tekst[i]);
        else if(tekst[i] >= 'a' && tekst[i] <= 'z')
            tekst[i] = toupper(tekst[i]);
    }
}

int main()
{
    char tekst[] = "Lorem ipsuM Dolor sIt AmEt, consectetur adipiscing elit.";
    zmienLitery(tekst);
    printf("%s", tekst);

    return 0;
}
