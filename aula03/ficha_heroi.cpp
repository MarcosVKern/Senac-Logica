#include<iostream>
#include<string>


int main(){
    std::string nome, classe;
    int forca, inteligencia;

    std::cout<<"De um nome para o seu heroi: ";
    std::getline(std::cin, nome);

    std::cout<<"Quantos pontos de força seu heroi possui? (De 0 a 100): ";
    std::cin>>forca;

    std::cout<<"Quantos pontos de inteligencia seu heroi possui? (De 0 a 100): ";
    std::cin>>inteligencia;

    if (forca >= 100 && inteligencia <= 30) {
        classe = "Barbaro";
    } else if (forca < 50 && inteligencia >= 80) {
        classe = "Mago";
    } else if (forca >=60 && inteligencia >= 60) {
        classe = "Paladino";
    } else if (forca >= 80 && inteligencia < 50) {
        classe = "Guerreiro";
    } else {
        classe = "Sem teto";
    }

    std::cout<<"-----Ficha do heroi-----"
    <<std::endl<<"Nome do heroi: "<<nome
    <<std::endl<<"Força: "<<forca
    <<std::endl<<"Inteligencia: "<<inteligencia
    <<std::endl<<"Classe: "<<classe<<std::endl;

    return 0;
}