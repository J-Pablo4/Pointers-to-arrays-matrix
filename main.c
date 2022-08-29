#include <stdio.h>

int main(void ) {
    int mi_matriz[5][5];

    mi_matriz[0][0] = 12;

    int *apuntador_a_entero = mi_matriz[0][0];

    printf("%d", mi_matriz[0][0]);
    return 0;
}