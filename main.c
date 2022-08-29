#include <stdio.h>

int main(void ) {
    int mi_matriz[5][5];
    int *mi_super_pointer[5];

    mi_super_pointer[0] = mi_matriz[0];
    mi_super_pointer[1] = mi_matriz[1];

    mi_matriz[0][0] = 12;
    mi_matriz[0][1] = 45;
    mi_matriz[1][3] = 75;
    mi_matriz[1][0] = 123;

//    int *mi_arreglo = mi_matriz[0];
//    int *mi_arreglo_dos = mi_matriz[1];

//    printf("%d", *(mi_arreglo_dos+3));
    printf("%d\n", *(*(mi_super_pointer+1)+3));
    printf("%d",*mi_matriz[0]);
    return 0;
}