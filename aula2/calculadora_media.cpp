#include<iostream>
#include<string>

int main(){
    //nota 1 peso 2
    //nota 2 peso 3
    //nota 3 peso 5
    //nota 4 peso 6
    float nota1, nota2, nota3, nota4, media;
    std::string nome, situacao;

    std::cout<<"Digite o nome do aluno: ";
    std::cin>>nome;

    std::cout<<"Digite a nota 1: ";
    std::cin>>nota1;

    std::cout<<"Digite a nota 2: ";
    std::cin>>nota2;

    std::cout<<"Digite a nota 3: ";
    std::cin>>nota3;

    std::cout<<"Digite a nota 4: ";
    std::cin>>nota4;

    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5) + (nota4 * 6))/(2+3+5+6);


    if (nota3 <= 3 || media <= 7 || nota4 <= 5){
        situacao = "Em recuperação";
    } else if(media >= 7) {
        situacao = "Aprovado";
    } else {
        situacao = "Reprovado";
    }

    
    std::cout<<"A média do aluno "<<nome<<" é: "<<media<<std::endl;
    std::cout<<"Aluno "<<situacao<<std::endl;

    return 0;
}