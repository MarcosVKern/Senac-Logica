#include<iostream>
#include<algorithm>
#include<vector>

int main(){
    std::vector<int> numeros = {50, 20, 11, 46, 61};

    auto it_max = std::max_element(numeros.begin(), numeros.end());
    auto it_min = std::min_element(numeros.begin(), numeros.end());

    std::cout<<"Maximo no vetor: "<<*it_max<<std::endl;
    std::cout<<"Minimo no vetor: "<<*it_min<<std::endl;


    return 0;
}