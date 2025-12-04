/*8-Crie um vetor de 6 nomes (strings). O programa deve:
  Ler os nomes
  Perguntar um nome a ser buscado
  informar se ele existe no vetor*/
	
#include <iostream>
#include <string>
int main(){
  std::string nomes[6];
  std::cout << "Digite 6 nomes: "<<std::endl;
  for (int i = 0; i < 6; i++) {
    std::cout << "Nome " << i + 1 << ": ";
    std::cin >> nomes[i];
  }
  std::string busca;
  std::cout << "\nDigite um nome para buscar: ";
  std::cin >> busca;
  int encontrar = 0;

  for (int i = 0; i < 6; i++) {
    if (nomes[i] == busca) {
      encontrou = 1;
    }
  }
  if (encontrou == 1) {
    std::cout << "O nome " << busca << " foi encontrado no vetor.\n";
  } 
  else {
    std::cout << "O nome " << busca << " não foi encontrado no vetor.\n";
  }
}
