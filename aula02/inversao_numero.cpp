#include<iostream>

int main(){
    int numero, unidade, dezena, centena, soma;

    std::cout<<"Digite um número de 3 digitos (ex: 123): ";
    std::cin>>numero;
    
    unidade = numero % 10;
    dezena = (numero / 10) % 10;
    centena = numero / 100;

    std::cout<<unidade<<dezena<<centena;

    return 0;
}