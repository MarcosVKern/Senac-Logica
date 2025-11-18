#include<iostream>

int main() {
    for(int i = 0; i < 10; i++){
        if(i == 4){
            break;
        }
        std::cout<<i<<std::endl;
    }

    for(int i = 0; i < 10; i++){
        if(i == 4){
            continue;
        }
        std::cout<<i<<std::endl;
    }

    return 0;
}