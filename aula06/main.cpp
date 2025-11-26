#include<iostream>

int somar(int num1, int num2){
    return num1 + num2;
}

int subtrair(int num1, int num2){
    return num1 - num2;
}

int multiplicar(int num1, int num2){
    return num1 * num2;
}

double dividir(int num1, int num2){
    if(num2 <= 0) {
        std::cout<<"Erro: Divisão por 0!"<<std::endl;
        return 0;
    }
    return num1 / num2;
}

int main() {
    int num1, num2, escolha;

    std::cout<<"========== Calculadora C++ ==========="<<std::endl;

    std::cout<<"Digite o primeiro numero: ";
    std::cin>>num1;

    std::cout<<"Digite o segundo numero: ";
    std::cin>>num2;

    std::cout<<"\nEscolha a operação: "<<"\n1 - Soma"<<"\n2 - Subtração"<<"\n3 - Multiplicação"<<"\n4 - Divisão"<<std::endl;
    std::cout<<"Opção: ";
    std::cin>>escolha;

    switch (escolha) {
        case 1:
            std::cout<<"O resultado da soma é "<<somar(num1, num2)<<std::endl;
            break;
        case 2:
            std::cout<<"O resultado da subtração é "<<subtrair(num1, num2)<<std::endl;
            break;
        case 3:
            std::cout<<"O resultado da multiplicação é "<<multiplicar(num1, num2)<<std::endl;
            break;
        case 4:
            std::cout<<"O resultado da divisão é "<<dividir(num1, num2)<<std::endl;
            break;
        default:
            std::cout<<"Opção invalida."<<std::endl;
            break;
    }
    
    return 0;
}