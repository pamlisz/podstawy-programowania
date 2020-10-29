#include <stdio.h>
#include <complex.h>

#define ANSWER 7

int main(void) {
	double complex z1 = 3.2 + 4.1 * I;
    double complex z2 = 5.2 + 2.8 * I;

    double REz1 = creal(z1);
    double IMz1 = cimag(z1);
    double REz2 = creal(z2);
    double IMz2 = cimag(z2);

	printf("(%.1f + %.1fi) + (%.1f + %.1fi) = (%.1f + %.1fi)", REz1, IMz1, REz2, IMz2, REz1+REz2, IMz1 + IMz2);

	return 0;
}
