#include<iostream>
#include<string>

int main(){
    std::string nome = "Marcos";
    std::string sobrenome = " Kern";
    
    int caracteres;

    std::string nomeCompleto = nome.append(sobrenome);

    std::cout<<nomeCompleto<<std::endl;
    std::cout<<"Meu nome tem "<<nome.size()<<" caracteres!"<<std::endl;
    std::cout<<nome.length()<<std::endl;
    std::cout<<nome.at(0)<<std::endl;

    for (size_t i = 0; i < nome.length(); i++)
    {
        std::cout<<nome.at(i)<<std::endl;
    }
    

    return 0;
}