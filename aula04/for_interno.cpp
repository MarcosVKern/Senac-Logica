#include<iostream>

int main() {
    

    for(int i = 1; i<=2; i++){
        for(int j = 1; j<=2; j++){
            std::cout<<"Externo: "<<i<<std::endl;
            std::cout<<"Interno: "<<j<<std::endl;
        }
    }

     for(int i = 1; i<=2; i++){
        for(int j = 1; j<=3; j++){
            std::cout<<i * j<<std::endl;
        }
        std::cout<<"\n";
    }

    return 0;
}