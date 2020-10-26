int exercise1(int a, int b) {

}
#include<stdio.h>
#include<string.h>
#include<stdint.h>

int exercicio1(int a, int b) {
	long conv;
    char binario[64];

    memset(binario, '0', 63);
    binario[63] = '\0';

    printf("A: ");
    scanf("%d",&a);
    printf("\nB: " );
    scanf("%d",&b);
    conv = (a*b);

    int position = 62, cont = 0;

    while (conv > 0) {
        int bit = conv & 1;
        binario[position--] = '0' + bit;
        cont += bit;
        conv /= 2;
    }

    printf("Retorno => %d", cont);
}
