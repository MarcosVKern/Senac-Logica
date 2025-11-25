#include<iostream>
#include<iomanip>

int main() {
    float notas[5];
    float soma = 0;
    float media;
    int tamanhoArray = sizeof(notas) / sizeof(notas[0]);

    std::cout<<"Digite as notas do aluno:"<<std::endl;

    for(int i = 0; i < 5; i++){
        do{
            std::cout<<"Nota "<<i + 1<<":";
            std::cin>>notas[i];

            if(notas[i] < 0 || notas[i] > 10) {
                std::cout<<"A nota deve ser entre 0 e 10."<<std::endl;
            }
        }while(notas[i] < 0 || notas[i] > 10);
    }

    for(float nota : notas) {
        soma += nota;
    }

    media = soma / tamanhoArray;

    std::cout<<"\n\nMedia: "<<media<<std::endl;

    if(media >= 7) {
        std::cout<<"Aprovado"<<std::endl;
    } else if(media < 7 && media >= 3 ){
        std::cout<<"Recuperação"<<std::endl;
    } else {
        std::cout<<"Reprovado"<<std::endl;
    }

    return 0;
}