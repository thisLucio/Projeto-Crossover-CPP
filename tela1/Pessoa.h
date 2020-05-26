#include <iostream>
#include <string.h>
#include <stdio.h>

class Pessoa {
    char nome[100];
    char cpf[20];
    int idade;

public:

    void setNome(char* texto);

    char* getNome();
    void cadastro();
    void ExibirConteudo();
};
void Pessoa::setNome(char* texto) {
    strcpy_s(nome, texto);
};
char* Pessoa::getNome() {
    return nome;
};
void Pessoa::cadastro() {
    char nome[100];
    std::cout << "Insira seu nome: " << std::endl;
    gets_s( nome );
    this->setNome(nome);
};
void Pessoa::ExibirConteudo() {
    std::cout << "Nome " << this->getNome() << std::endl;
    // std::cout<<"CPF: "<<cpf<<std::endl;
    system("pause");
};