/*Acredita-se que a partir de qualquer número positivo é possível criar uma sequência de números que termina em 1 da seguinte forma:

Se o número for par, o próximo número da sequência será sua metade. Se for impar, o próximo será três vezes o número mais um.

Faça um programa que leia um número positivo, escreva essa sequência de números até o valor 1 e a quantidade de números da sequência (passada por referência para o programa principal). Os valores da sequência devem ser escritos num subprograma. A quantidade de números gerados deve ser escrita no programa principal. O planejamento do subprograma e seus parâmetros é parte importante da avaliação neste problema.

Entradas:

Um número inteiro positivo.
Saídas:

Uma sequência de números conforme as regras acima.
A quantidade de números da sequência.*/

#include <iostream>

using namespace std;

void sequencia (int n, int &q){
	q = 0;
	while (n !=1 || n>1){
		cout << n << " ";
		q++;
		
		if (n%2 == 0){
			n = n/2;
		}else{
			n = 3*n +1;
		}
	}
	if (n == 1){
		q++;
		cout << n;
	}	
}

int main (){
	int numero, quantidade;
	
	cin>>numero;
	
	sequencia(numero, quantidade);
	cout << endl << quantidade;
	
	return 0;
}
