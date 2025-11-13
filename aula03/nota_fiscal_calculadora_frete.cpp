#include<iostream>
#include<string>
#include<iomanip>

int main(){
    float valor;
    std::string cidade, nomeProduto;
    float valorFrete = 10.50;

    std::cout<<"Informe o nome da cidade: ";
    std::getline(std::cin, cidade);

    std::cout<<"Informe o nome do produto: ";
    std::getline(std::cin, nomeProduto);

    std::cout<<"Informe o valor do produto: ";
    std::cin>>valor;

    if (cidade == "Estancia velha" || cidade == "São Leopoldo" || cidade == "Novo Hamburgo") {
        valorFrete = 0;
    }

    std::cout<<"===================================="<<std::endl;
    std::cout<<"Cidade: "<<cidade<<std::endl;
    std::cout<<"Nome do produto: "<<nomeProduto<<std::endl;
    std::cout<<"Valor do produto: R$"<<std::fixed<<std::setprecision(2)<<valor<<std::endl;
    std::cout<<"Valor do frete: R$"<<std::fixed<<std::setprecision(2)<<valorFrete<<std::endl;
    std::cout<<"===================================="<<std::endl;

    return 0;
}