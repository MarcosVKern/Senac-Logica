#include<stdio.h>

int main(){
    int x = 5;
    int y = 2;

    printf("\n%d", x > y);
    printf("\n%d", x == y);
    printf("\n%d", x <= y);
    printf("\n%d", x != y);
    printf("\n%d", x < y && x > 4);
    printf("\n%d", x == y || y > 0);
    printf("\n%d", !(x > 4));

    return 0;
}

//int = 2 ou 4 bytes -- %d
//float = 4 bytes -- %f / %.2f
//double = 8 bytes -- %lf
//char = 1 byte -- %c