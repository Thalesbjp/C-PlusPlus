/*Escreva um programa que abra um arquivo texto cujo nome será informado pelo usuário e conte o número de caracteres presentes nele. Imprima o número de caracteres na tela sem incluir espaços e fim de linha.

Entradas:

nome do arquivo
Saídas:

um valor inteiro que representa o total de caracteres do arquivo sem incluir espaços e fim de linha
Exemplo de Entrada:

entrada.txt
Exemplo de conteúdo do arquivo entrada.txt:

Eu sou forte
Nao vacilo
Exemplo de Saída:

19*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
	int contador = 0;
	string nomeArquivo, palavraProcurada, palavraLida;
	
	cin >> /*nomeArquivo >> */palavraProcurada;
	
	ifstream entrada ("entrada.txt");
	
	while (entrada >> palavraLida){
		cout << palavraLida << " ";
		if (palavraLida==palavraProcurada){
			contador++;	
		}
	}
	entrada.close();
	
	cout << contador;
	
	return 0;
}

