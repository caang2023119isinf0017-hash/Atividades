/*4-Crie um programa que:
	Possua um vetor de 5 números inteiros
	Peça ao usuário para digitar os valores
	Exiba todos os valores digitados*/
int num[5];
std::cout<<"Digite 5 números inteiros:"<<std::endl;
for(int r=0; r<5; r++){
	std::cout<<r+1<<"º número:";
	std::cin>>num[r];}
std::cout<<"Números digitados: "<<std::endl;
for(int e=0; e<5; e++){
	std::cout<<num[e]<<std::endl;}
	
/*5-Usando o vetor do exercício anterior, calcule e exiba:
A soma total dos números
A média aritmética dos valores*/
int soma = 0;
for(int m=0; m<5; m++){
	soma = soma + num[m];}
std::cout<<"Soma dos números: "<<soma<<std::endl;
std::cout<<"Média dos números: "<<soma/5<<std::endl;
