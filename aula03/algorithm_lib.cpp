#include<iostream>
#include<algorithm>
#include<initializer_list>

int main(){
    int a = 10, b = 15, c = 14, d = 2, e = 1;

    int maximo = std::max({a, b, c, d, e});
    int minimo = std::min({a, b, c, d, e});

    std::cout<<"Maior numero: "<<maximo<<std::endl;
    std::cout<<"Menor numero: "<<minimo<<std::endl;

    return 0;
}