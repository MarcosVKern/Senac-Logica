#include<iostream>

int main() {
    int i = 0;

    do{
        std::cout<<i<<std::endl;
        i++;
    }
    while(i < 5);

    int num;

    do{
        std::cout<<"Digite um número positivo: "<<std::endl;
        std::cin>>num;
    }
    while(num > 0);
    
    return 0;
}