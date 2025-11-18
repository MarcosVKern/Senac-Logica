#include<iostream>

int main() {
    int idades[8] = {20, 22, 19, 35, 48, 26, 87, 70};

    int menorIdade;

    for(int idade : idades){
        if(idade < menorIdade) {
            menorIdade = idade;
        }
    }

    std::cout<<"A menor idade é "<<menorIdade<<" anos."<<std::endl;

    return 0;
}