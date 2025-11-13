#include<iostream>

int main(){
    int ano;

    std::cout<<"Digite um ano: ";
    std::cin>>ano;

    if((ano % 400 == 0) || (ano % 4 == 0) && (ano % 100 != 0)){
        std::cout<<"Ano bissexto"<<std::endl;
    } else {
        std::cout<<"Não bissexto"<<std::endl;
    }

    return 0;
}