#include<iostream>

int main(){
    int a, b, opcao;

    std::cout<<"Digite dois numeros: ";
    std::cin>>a>>b;

    std::cout<<"______________________________"
    <<std::endl<<"Digite a opção desejada"
    <<std::endl<<"1 - Soma"
    <<std::endl<<"2 - Subtração"
    <<std::endl<<"3 - Multiplicação"
    <<std::endl<<"4 - Divisão"
    <<std::endl<<"______________________________"
    <<std::endl;
    std::cin>>opcao;

    switch (opcao)
    {
    case 1:
        std::cout<<"O resultado da soma dos números "<<a<<" e "<<b<<" é: "<<(a + b)<<std::endl;
        break;
    case 2:
        std::cout<<"O resultado da subtração dos números "<<a<<" e "<<b<<" é: "<<(a - b)<<std::endl;
        break;
    case 3:
        std::cout<<"O resultado da multiplicação dos números "<<a<<" e "<<b<<" é: "<<(a * b)<<std::endl;
        break;
    case 4:
        if (b == 0) {
            std::cout<<"Erro: divisão por 0!"<<std::endl;
        } else {
            std::cout<<"O resultado da divisão de "<<a<<" por "<<b<<" é: "<<(a / b)<<std::endl;
        }
        break;
    default:
        std::cout<<"Opção invalida!"<<std::endl;
        break;
    }

    return 0;
}