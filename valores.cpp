#include<iostream>
#include<iomanip>

int main(){
    int qtd;
    float valor, valorTotal;

    std::cout<<"Digite a quantidade de produtos: ";
    std::cin>>qtd;

    std::cout<<"Digite o valor do produto: ";
    std::cin>>valor;

    valorTotal = qtd * valor;

    std::cout<<"O valor total é R$ "<<std::fixed<<std::setprecision(2)<<valorTotal<<std::endl;

    return 0;
}