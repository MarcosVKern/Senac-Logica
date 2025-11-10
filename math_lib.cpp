#include<iostream>
#include<math.h>

int main(){
    float area, raio;
    const float pi = 3.14;

    std::cout<<"Digite o raio: ";
    std::cin>>raio;

    area = pi * std::pow(raio, 2);

    std::cout<<area;
    return 0;
}