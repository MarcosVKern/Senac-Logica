#include<iostream>
#include<string>
#include<vector>

int main() {
    int tamanho_array;

    std::cout<<"Quantas palavras você deseja inserir no array: "<<std::endl;
    std::cin>>tamanho_array;

    if(tamanho_array <= 0) {
        std::cout<<"O tamanho deve ser maior que zero."<<std::endl;
        return 1;
    }

    std::vector<std::string>palavras(tamanho_array);

    std::cout<<"\nPor favor, digite as "<<tamanho_array<<" palavras: \n"<<std::endl;

    for(int i = 0; i < tamanho_array; i++) {
        std::cout<<"Palavra "<<i + 1<<": "<<std::endl;
        std::cin>>palavras[i];
    }

    std::cout<<"\n--- Array preenchido ---\n"<<std::endl;
    for(const std::string& p : palavras){
        std::cout<<"- "<<p<<std::endl;
    }

    return 0;
}