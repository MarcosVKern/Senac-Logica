#include<iostream>
#include<iomanip>

int main(){
    float gasolina, diesel, etanol, cashBackGasolina, cashBackDiesel, cashBackEtanol, cashBack, valorTotal;
    int litros, tipo;
    gasolina = 6.10;
    diesel = 5.99;
    etanol = 4.49;
    cashBackGasolina = 0.3;
    cashBackDiesel = 0.2;
    cashBackEtanol = 0.1;

    std::cout<<"Selecione o tipo do combustivel (1 - Gasolina, 2 - Diesel, 3 - Etanol): ";
    std::cin>>tipo;

    std::cout<<"Quantidade de litros reabastecidos: ";
    std::cin>>litros;

    if (tipo = 1) {
        valorTotal = gasolina*litros;
        cashBack = valorTotal*cashBackGasolina;
    } else if (tipo = 2) {
        valorTotal = diesel * litros;
        cashBack = valorTotal * cashBackDiesel;
    } else if (tipo = 3) {
        valorTotal = etanol*litros;
        cashBack = valorTotal*cashBackEtanol;
    }

    std::cout<<"Valor total: R$"<<std::fixed<<std::setprecision(2)<<valorTotal<<std::endl;
    std::cout<<"Cash back: R$"<<std::fixed<<std::setprecision(2)<<cashBack<<std::endl;

    return 0;
}