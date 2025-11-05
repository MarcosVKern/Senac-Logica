#include<stdio.h>

int main(){
    int meuNumero = 7;
    int meuOutroNumero;

    printf("Digite um novo numero: ");
    scanf("%d", &meuOutroNumero);

    meuNumero = meuOutroNumero;

    printf("%d", meuNumero);

    return 0;
}
