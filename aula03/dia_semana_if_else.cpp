#include<iostream>

int main(){
    int dia;

    std::cout<<"Digite um dia da semana: ";
    std::cin>>dia;

    if (dia <= 0 || dia >= 8) {
        std::cout<<"Dia da semana invalido"<<std::endl;
    } else if (dia == 1 ) {
        std::cout<<"Domingo"<<std::endl;
    } else if (dia == 2 ) {
        std::cout<<"Segunda-Feira"<<std::endl;
    } else if (dia == 3 ) {
        std::cout<<"Terça-Feira"<<std::endl;
    } else if (dia == 4 ) {
        std::cout<<"Quarta-Feira"<<std::endl;
    } else if (dia == 5 ) {
        std::cout<<"Quinta-Feira"<<std::endl;
    } else if (dia == 6 ) {
        std::cout<<"Sexta-Feira"<<std::endl;
    } else if (dia == 7 ) {
        std::cout<<"Sábado"<<std::endl;
    } 

    return 0;
}