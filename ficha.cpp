#include<iostream>
#include<string>

int main(){
    std::string nome;
    std::string sobrenome;
    int idade;
    float altura;

    std::cout<<"Digite seu nome: ";
    std::cin>>nome;

    std::cout<<"Digite seu sobrenome: ";
    std::cin>>sobrenome;

    std::cout<<"Digite sua idade: ";
    std::cin>>idade;

    std::cout<<"Digite sua altura: ";
    std::cin>>altura;

    std::cout<<"Meu nome é "<<nome<<" "<<sobrenome<<", tenho "<<idade<<" anos de idade e "<<altura<<" de altura.";

    return 0;
}