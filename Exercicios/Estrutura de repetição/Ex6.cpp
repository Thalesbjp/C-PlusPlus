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

using namespace std;

int main (){
	char caractere;
	int contador = 0;
	string nomeArquivo;
	
	cin >> nomeArquivo;
	ifstream entrada (nomeArquivo);
	
	while (entrada >> caractere){
		contador++;
	}
	
	cout << contador;
	
	return 0;
}

