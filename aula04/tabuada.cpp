#include<iostream>

int main() {
    int numero;

    if (numero <= 0 || numero > 10) {
        std::cout<<"Numero invalido, digite um numero entre 1 e 10."<<std::endl;
        return 1;
    }

    std::cout<<"Tabuada do numero "<<numero<<":"<<std::endl;
    for(int i=1; i <= 10; i++){
        std::cout<<numero<<" x "<<i<<" = "<<i * numero<<std::endl;
    }

    std::cout<<"Tabuada completa: "<<std::endl;
    for(int i=1; i <=10; i++){
        std::cout<<"Tabuada do número "<<i<<":"<<std::endl;
        for (int j = 1; j <= 10; j++)
        {
            std::cout<<i<<" x "<<j<<" = "<<i * j<<std::endl;
        }
        
    }

    return 0;
}