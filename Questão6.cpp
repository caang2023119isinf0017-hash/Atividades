/*6-Leia 8 números inteiros para dentro de um vetor e determine:
	O maior valor e em qual posição ele está
	O menor valor e em qual posição ele está*/

#include <iostream>

int main() {
    int numeros[8];

    std::cout << "Digite 8 números inteiros:"<<std::endl;
    for (int i = 0; i < 8; i++) {
        std::cout << "Número " << i + 1 << ": ";
        std::cin >> numeros[i];
    }

    int maior = numeros[0];
    int posicao_maior = 0;

    int menor = numeros[0];
    int posicao_menor = 0;

    for (int i = 1; i < 8; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
            posicao_maior = i;
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
            posicao_menor = i;
        }
    }

    std::cout << "Maior valor: " << maior << ". Posição: " << posicao_maior << ".";
    std::cout << "Menor valor: " << menor << ". Posição: " << posicao_menor << ".";
}
