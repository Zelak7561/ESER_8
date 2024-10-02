
#include <stdio.h>

void main() {
    float a = 3;
    float b, c, d;

    printf("Inserire b: \n");
    scanf("%f", &b);
    printf("Inserire c: \n");
    scanf("%f", &c);

    if (c != 0) {
        d = (a / c) * b;
        printf("operazione: [%f] \n", d);
    } else {
        printf("Errore non e possibile dividere per 0 , valore di c: [%f]\n" , c);
    }

}
