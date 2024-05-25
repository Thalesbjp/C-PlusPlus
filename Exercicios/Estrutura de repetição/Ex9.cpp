/*Faça um programa que leia um número inteiro N, maior ou igual a dois, e informe a soma de todos os divisores positivos de N compreendidos no intervalo [1,N]. Considere que um determinado número M é um divisor positivo de N, se o resultado da divisão de N por M resultar em um outro número inteiro. A saída de seu programa deverá seguir o formato: D1+D2+D3+...+Dk=RESULTADO, em que D1, D2,...,Dk correspondem aos divisores de N no intervalo [1,N] e RESULTADO é o somatório destes divisores.

Entradas:

Um inteiro positivo N.
Saídas:

Sequência dos divisores de N, separados pelo símbolo de “+”, seguida pelo símbolo de “=” e o valor do somatório dos divisores. Note que a formatação de saída não deve incluir símbolos de espaço.*/

#include <iostream>

using namespace std;

int main (){
	int numero, divisor, soma =1;
	
	cin>>numero;
	cout << "1";
	divisor = 2;
	while (divisor <= numero){
		if (numero%divisor == 0){
		cout << "+" << divisor;
		soma+= divisor;
		}
		divisor++;
	}
	cout << "=" << soma;
	
	return 0;
}
