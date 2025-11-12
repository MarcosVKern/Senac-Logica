#include<iostream>
#include<iomanip>

int main(){
    float gasolina, diesel, etanol, cashBackGasolina, cashBackDiesel, cashBackEtanol, cashBack, valorTotal, valorPago;
    int litros, tipo;
    gasolina = 6.10;
    diesel = 5.99;
    etanol = 4.49;
    cashBackGasolina = 0.3;
    cashBackDiesel = 0.2;
    cashBackEtanol = 0.1;

    std::cout<<"Selecione o tipo do combustivel (1 - Gasolina, 2 - Diesel, 3 - Etanol): ";
    std::cin>>tipo;

    if (tipo != 1 && tipo != 2 && tipo != 3) {
        std::cout<<"Entrada incorreta"<<std::endl;
        return 1;
    }

    std::cout<<"Quantidade de litros reabastecidos: ";
    std::cin>>litros;

    if (tipo = 1) {
        valorTotal = gasolina*litros;
        cashBack = litros * (gasolina * cashBackGasolina);
    } else if (tipo = 2) {
        valorTotal = diesel * litros;
        cashBack = litros * (diesel * cashBackDiesel);
    } else if (tipo = 3) {
        valorTotal = etanol * litros;
        cashBack = litros * (etanol * cashBackEtanol);
    }

    valorPago = valorTotal - cashBack;

    std::cout<<"Valor total: R$"<<std::fixed<<std::setprecision(2)<<valorTotal<<std::endl;
    std::cout<<"Cash back: R$"<<std::fixed<<std::setprecision(2)<<cashBack<<std::endl;
    std::cout<<"Valor a ser pago: R$"<<std::fixed<<std::setprecision(2)<<valorPago<<std::endl;

    return 0;
}