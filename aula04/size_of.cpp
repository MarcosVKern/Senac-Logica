#include<iostream>

int main() {
    int idades[8] = {20, 22, 19, 35, 48, 26, 87, 70};

    float media, soma = 0;

    int cumprimento = sizeof(idades) / sizeof(idades[0]);

    for(int idade : idades){
        soma += idade;
    }

    media = soma/cumprimento;

    std::cout<<"A idade média é: "<<media<<std::endl;

    return 0;
}