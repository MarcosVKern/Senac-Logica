#include<iostream>

int main(){
    int dia;

    std::cout<<"Digite um dia da semana: ";
    std::cin>>dia;

    switch(dia){
        case 1:
            std::cout<<"Domingo"<<std::endl;
            break;
        case 2:
            std::cout<<"Segunda"<<std::endl;
            break;
        case 3:
            std::cout<<"Terça"<<std::endl;
            break;
        case 4:
            std::cout<<"Quarta"<<std::endl;
            break;
        case 5:
            std::cout<<"Quinta"<<std::endl;
            break;
        case 6:
            std::cout<<"Sexta"<<std::endl;
            break;
        case 7:
            std::cout<<"Sabado"<<std::endl;
            break;
        default:
            std::cout<<"Dia invalido"<<std::endl;
            break;
    }

    return 0;
}