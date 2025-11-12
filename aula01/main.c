#include<stdio.h>

int main(){
    int resultado1 = 2 + 3 * 4;
    int resultado2 = (2 + 3) * 4;

    printf("Resultado 1: %d\n", resultado1);
    printf("Resultado 2: %d\n", resultado2);

    return 0;
}

//int = 2 ou 4 bytes -- %d
//float = 4 bytes -- %f / %.2f
//double = 8 bytes -- %lf
//char = 1 byte -- %c
//char[] = ? bytes -- %s