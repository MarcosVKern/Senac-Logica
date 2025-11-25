#include<iostream>
#include<string>

int main() {
    std::string palavras[5] = {"casa", "carro", "computador", "celular", "televisão"};

    for(std::string palavra : palavras) {
        std::cout<<palavra<<std::endl;
    }

    std::string carros[3];

    carros[0] = "Audi";
    carros[1] = "Bmw";
    carros[2] = "Ferrari";

    for(std::string carro : carros) {
        std::cout<<carro<<std::endl;
    }

    return 0;
}