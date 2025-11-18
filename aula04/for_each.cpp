#include<iostream>
#include<string>

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    for (int numero : numeros) {
        std::cout<<numero<<std::endl;
    }

    std::string comprimentos[5] = {"Aló", "Oi", "Olá", "Opa", "Oi?"};

    for (std::string comprimento : comprimentos) {
        std::cout<<comprimento<<std::endl;
    }

    std::string nome = "Marcos";

    for (char c : nome) {
        std::cout<<c<<std::endl;
    }
    return 0;
}