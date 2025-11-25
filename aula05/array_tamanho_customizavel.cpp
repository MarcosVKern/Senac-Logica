#include<iostream>
#include<string>

int main() {
    int tamanho;

    std::cout<<"Digite o tamanho do seu array: ";
    std::cin>>tamanho;

    std::string nomes[tamanho];

    for(int i = 0; i < tamanho; i++) {
        std::cout<<"Digite um nome: ";
        std::cin>>nomes[i];
    }

    for(std::string nome : nomes) {
        std::cout<<nome<<std::endl;
    }

    return 0;
}