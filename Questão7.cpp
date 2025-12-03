/*7-Crie um vetor com 10 números digitados pelo usuário. Depois peça um número x e informe:
	Se x está no vetor
	Em qual posição ele aparece pela primeira vez.*/
	
#include <iostream>
int main{
	int num[10];
	for(int r=0; r<10; r++){
		std::cout<<r+1<<"º número:";
		std::cin>>num[r];}
	int busca = 0;
	std::cout<<"PESQUISA\nDigite um número para verificar se ele está no vetor: ";
	std::cin>>busca;
	int para = 1;
	int indice = 0;
	while(para < 11){
		if(busca == num[indice]){
			std::cout<<"O número apareceu pela primeira vez no índice "<<indice<<" do vetor.";
			para = 11;}
		else if(busca != num[indice]){
			std::cout<<"O número não está no índice "<<indice<<std::endl;
			indice++;
			para++;
			}}
}
