#include<iostream>

int main() {
    std::cout<<"Iniciando contagem de 1 até 10"<<std::endl;

    for(int i = 1; i <= 10; i++) {
        std::cout<<i<<std::endl;
    }

    std::cout<<"Finalizando contagem."<<std::endl;

    std::cout<<"Iniciando contagem de 10 até 1"<<std::endl;

    for(int i = 10; i >= 1; i--) {
        std::cout<<i<<std::endl;
    }

    std::cout<<"Finalizando contagem."<<std::endl;

    return 0;
}