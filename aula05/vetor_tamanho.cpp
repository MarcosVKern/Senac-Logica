#include<iostream>
#include<string>

int main() {
    std::string palavras[5];

    int tamanho = 5;
    std::cout<<"Por favor, digite "<<tamanho<<" palavras: \n"<<std::endl;

    for(int i = 0; i < tamanho; i++) {
        std::cout<<"Palavra "<<i+1<<": "<<std::endl;
        std::cin>>palavras[i];
    }

    std::cout<<"\nAs palavras digitadas foram: \n"<<std::endl;
    for(int i = 0; i < tamanho; i++) {
        std::cout<<"- "<<palavras[i]<<"\n"<<std::endl;
    }

    return 0;
}