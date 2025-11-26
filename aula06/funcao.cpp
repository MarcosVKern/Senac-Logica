#include<iostream>

int somarDoisNumeros(){
    int num1;
    int num2;

    std::cout<<"Digite um valor para num1: ";
    std::cin>>num1;

    std::cout<<"Digite um valor para num2: ";
    std::cin>>num2;

    int resultado = num1 + num2;
    return resultado;
}

int main() {
    std::cout<<"Calculadora de soma interativa"<<std::endl;

    int total = somarDoisNumeros();

    std::cout<<"-------------------------------"<<std::endl;
    std::cout<<"O resultado da soma é: "<<total<<std::endl;
    std::cout<<"-------------------------------"<<std::endl;

    return 0;
}