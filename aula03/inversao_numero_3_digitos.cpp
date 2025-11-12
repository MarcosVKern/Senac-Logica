#include<iostream>

int main(){
    int numeroOriginal;
    int unidade;
    int dezena;
    int centena;
    int somaDosDigitos;
    int numeroInvertido;

    std::cout<<"Digite um número de três digitos: ";
    std::cin>>numeroOriginal;

    if (numeroOriginal <= 99 || numeroOriginal >= 1000) {
        std::cout<<"Não é um numero de 3 digitos"<<std::endl;
    } else {
        unidade = numeroOriginal % 10;
        dezena = (numeroOriginal / 10) % 10;
        centena = numeroOriginal / 100;

        numeroInvertido = (unidade * 100) + (dezena * 10) + centena;
        std::cout<<"O número ao contrario é "<<numeroInvertido<<std::endl;
        somaDosDigitos = unidade + dezena + centena;
        std::cout<<"A soma dos digitos é "<<somaDosDigitos<<std::endl;
    }

    return 0;
}