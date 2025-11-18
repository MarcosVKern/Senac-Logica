#include<iostream>
#include<string>

int main() {
    std::string letras[2][2][2] = {
        {
            {"a", "b"},
            {"c", "d"}
        },
        {
            {"e", "f"},
            {"g", "h"}
        },
    };

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                 std::cout<<letras[i][j][k]<<std::endl;
            }
        }
    }

    return 0;
}