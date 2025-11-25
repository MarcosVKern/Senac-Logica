#include<iostream>

int main() {
    int meusNumeros[5] = {1, 2, 3, 4, 5};

    for(int num : meusNumeros) {
        std::cout<<num<<std::endl;
    }

    int meusNumeros2[5] = {45, 89, 32, 98, 12};

    for(int num : meusNumeros2) {
        std::cout<<num<<std::endl;
    }

    return 0;
}