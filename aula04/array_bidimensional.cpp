#include<iostream>
#include<string>

int main() {
    std::string letras[2][4] = {
        {"a","b","c","d"},
        {"e","f","g","h"}
    };

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++) {
            std::cout<<letras[i][j]<<std::endl;
        }
    }

    int numeros[2][2] = {
        {10, 20},
        {30, 40}
    };

    std::cout<<numeros[1][1]<<std::endl;


    return 0;
}