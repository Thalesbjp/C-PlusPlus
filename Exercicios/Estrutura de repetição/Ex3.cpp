/*Faça um programa que leia um número não determinado de valores inteiros. Seu programa deverá ler valores até encontrar um valor igual a zero. Assuma que cada valor será fornecido em uma linha diferente. Após a leitura de dados, seu programa deverá exibir no dispositivo de saída padrão as seguintes informações:

Média aritmética dos valores lidos;
Quantidade de números positvos;
Quantidade de números negativos;
Percentual de números positivos.
Percentual de números negativos.
Entradas:

Sequência de números inteiros terminada em zero.
Saídas:

Número em ponto flutuante indicando a média aritmética dos valores de entrada.
Número inteiro indicando a quantidade de valores positivos.
Número inteiro indicando a quantidade de valores negativos.
Número em ponto flutuante indicando o percentual de valores positivos.
Número em ponto flutuante indicando o percentual de valores negativos.*/
#include <iostream>

using namespace std;

int main(){
		int total = 0, positivos = 0, entrada;
		float media = 0;
		cin >> entrada;
		
		while (entrada != 0){
			media+=entrada;
			total++;
			if (entrada > 0)
				positivos++;
			cin >> entrada;
		}
		cout << media/total << endl
			 << positivos << endl
			 << (total-positivos) << endl
			 << positivos/float(total) << endl
			 << (total-positivos)/float(total);
	return 0;
}

