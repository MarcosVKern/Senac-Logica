#include<iostream>
#include<iomanip>
#include<locale>

int main() {
    std::locale loc_pt_br("");

    std::cout.imbue(loc_pt_br);

    std::cout<<"--- Configuração de localização em C++ ---"<<std::endl;
    std::cout<<"Localidade configurada: "<<loc_pt_br.name()<<std::endl;

    double valor_decimal = 123456.78;
    std::cout<<"\nTeste numérico: "<<std::endl;

    std::cout<<"Valor formatado: "<<valor_decimal<<std::endl;

    std::cout<<"\nTeste de caracteres: "<<std::endl;
    std::cout<<"Exibição correta de acentuação: "<<std::endl;
    
    return 0;
}