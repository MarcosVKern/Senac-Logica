#include<iostream>

int main(){
    float ladoA, ladoB, ladoC;

    std::cout<<"Digite o lado A: ";
    std::cin>>ladoA;

    std::cout<<"Digite o lado B: ";
    std::cin>>ladoB;

    std::cout<<"Digite o lado C: ";
    std::cin>>ladoC;

    if(ladoA > ladoB + ladoC || ladoB > ladoA + ladoC || ladoC > ladoA + ladoB) {
        std::cout<<"Triangulo inválido!"<<std::endl;
        return 1;
    } else {
        std::cout<<"Medidas válidas para um triangulo!"<<std::endl;
    }

    if(ladoA != ladoB && ladoA !=ladoC && ladoB != ladoC){
        std::cout<<"Triangulo escaleno!"<<std::endl;
    } else if((ladoA == ladoB && ladoA != ladoC) || (ladoA == ladoC && ladoA != ladoB) || (ladoB == ladoC && ladoB != ladoA)) {
        std::cout<<"Triangulo isosceles"<<std::endl;
    } else {
        std::cout<<"Triangulo equilatero"<<std::endl;
    }

    return 0;
}