/*Criar um aplicativo para armazenar uma lista com os valores dos 15 primeiros produtos
Você vai digitar os valores e mostrar a soma*/
#include <iostream>
int main(){
    float soma = 0;
    float preco[15];
    for(int i = 0; i < 15; i++){
        std::cout << "Digite o preço do "<< i+1 <<"° produto: ";
        std::cin >> preco[i];
        soma += preco[i];
        }
    float media = soma/15;
    std::cout << "Media dos valores: " << media;
    }
