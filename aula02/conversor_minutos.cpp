#include<iostream>

int main(){
    int minutosTotais, horas, minutosRestantes;

    std::cout<<"Digite os minutos: ";
    std::cin>>minutosTotais;

    horas = minutosTotais / 60;

    minutosRestantes = minutosTotais%60;

    std::cout<<horas<<":"<<minutosRestantes<<std::endl;

    return 0;
}