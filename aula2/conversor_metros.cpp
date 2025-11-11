#include<iostream>

int main(){
    int metros, centimetros, milimetros;
    float pes;

    std::cout<<"Digite uma medida em metros: ";
    std::cin>>metros;

    centimetros = metros * 100;
    milimetros = metros * 1000;
    pes = metros * 0.3048;

    std::cout<<"Milimetros são: "<<milimetros<<" mm."<<std::endl;
    std::cout<<"Centimetros são: "<<centimetros<<" cm."<<std::endl;
    std::cout<<"Pés são: "<<pes<<" pés."<<std::endl;


    return 0;
}