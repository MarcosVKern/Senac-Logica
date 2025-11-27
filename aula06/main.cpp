
#include<iostream>
#include<locale>
#include<iomanip>

int main(){

    double valor = 789123.45;

    std::cout<<"---Localidade padrão (C) ---"<<std::endl;
    std::cout<<"Ponto decimal: "<<std::fixed<<std::setprecision(2)<<valor<<std::endl;

    std::locale loc_br("pt_BR.UTF-8");
    std::cout.imbue(loc_br);

    std::cout<<"\n ----- Localidade configurada -----"<<std::endl;
    std::cout<<"Vírgula decimal: "<<valor<<std::endl;

    return 0;
}
