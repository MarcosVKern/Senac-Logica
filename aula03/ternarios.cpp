#include<iostream>

int main(){
    double a, b;

    std::cout<<"Dois números: ";
    std::cin>>a>>b;

    std::cout<<"Maior = "<<(a > b ? a : b)<<std::endl;

    return 0;
}