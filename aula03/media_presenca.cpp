#include<iostream>

int main(){
    float media, presenca;
    
    std::cout<<"Média do aluno: ";
    std::cin>>media;

    std::cout<<"Presença do aluno: ";
    std::cin>>presenca;

    if (media >= 7 && presenca > 75) {
        std::cout<<"Aprovado"<<std::endl;
    } else if (media >= 4 && presenca > 75) {
        std::cout<<"Recuperação"<<std::endl;
    } else {
        std::cout<<"Reprovado"<<std::endl;
    }

    return 0;
}