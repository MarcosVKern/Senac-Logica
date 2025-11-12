#include<iostream>
#include<iomanip>

int main(){
    float salario, percentual_aumento, valor_aumento, novo_salario;

    std::cout<<"Digite o salario atual: ";
    std::cin>>salario;

    std::cout<<"Digite o percentual de aumento (Ex: 15%): ";
    std::cin>>percentual_aumento;

    valor_aumento = salario * (percentual_aumento / 100.0);
    novo_salario = salario + valor_aumento;

    std::cout<<"O novo salario é de R$ "<<
        std::fixed<<std::setprecision(2)<<novo_salario<<std::endl;

    return 0;
}