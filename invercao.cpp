#include<iostream>

int main(){
    int a = 10;
    int b = 20;
    int temp;

    std::cout<<"Antes da troca A = "<<a<<", B = "<<b<<std::endl;

    temp = a;
    a = b;
    b = temp;

    std::cout<<"Depois da troca A = "<<a<<", B = "<<b<<std::endl;

    return 0;
}