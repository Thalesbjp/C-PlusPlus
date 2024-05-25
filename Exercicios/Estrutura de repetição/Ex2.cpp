/*Faça um programa capaz de obter o quociente inteiro da divisão de dois números, sem utilizar a operação de divisão (/) e nem o operador resto (%).

Entradas:

Dois números inteiros positivos.
Saídas:

Quociente da divisão inteira.
Exemplo de Entrada:

8
2
Exemplo de Saída:

4*/

#include <iostream>

using namespace std;

int main(){
		int divisor, dividendo, quociente = 0;
		
		cin >> divisor >> dividendo;
		
		while (divisor >= dividendo){
			divisor -= dividendo;
			quociente++;
		}
		cout << quociente;
	return 0;
}
