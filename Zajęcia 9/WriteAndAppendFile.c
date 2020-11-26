#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *fp = NULL;

    const char tekst[] = "You can't always get what you want\n";
    const char tekst2[] = "I can't get no satisfaction\n";
    fp=fopen("Jagger.txt", "w");
    if (fp==NULL) {
        printf ("Nie mogê otworzyæ pliku!\n");
        return 1;
    }

    fprintf (fp, "%s", tekst);
    fclose (fp);

    fp=fopen("Jagger.txt", "a");
    fprintf(fp, "%s", tekst2);
    fclose (fp);

    return 0;
}
