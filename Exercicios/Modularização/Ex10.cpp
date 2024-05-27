/*Na matemática, um número Harshad é um número natural que é divisível pela soma dos seus dígitos. O número 6804, por exemplo, é um número Harshad pois 6+8+0+4 = 18, e 6804 é divisível por 18.

Escreva um programa que verifica se um número é número Harshad. É preciso criar dois subprogramas:

Um subprograma que recebe um número natural e retorna a soma de seus dígitos.
Um subprograma que recebe um número natural e retorna um valor lógico, indicando se ele é um número Harshad.
Para uma boa nota, é preciso um bom planejamento. Não repita código, não repita processamento, escolha nomes significativos, não use parâmetros que não entradas dos subprogramas e não misture interface e processamento (esses dois subprogramas não podem ter operações de leitura ou escrita).

Entradas:

Um número inteiro e positivo.
Saídas:

O resto da divisão do número pela soma de seus digitos.
Um texto (sim/nao), indicando se o número tem a propriedade em questão. Atenção para a ausência de acento em "nao".*/

#include <iostream>
using namespace std;

int somaDigitos (int val){
	int digito, saida=0;
	
	while (val > 0){
		digito = val%10;
		val = val/10;
		saida = saida + digito;
	} 
	return saida;
}

bool harshad (int numero){
	int divisor = somaDigitos(numero);
	if (numero%divisor==0)
		return true;
	else
		return false;
}

int main (){
	
	int valor, sD;
	
	cin>>valor;
	sD = somaDigitos(valor);
	cout << valor%sD << " ";
	if (harshad(valor))
		cout << "sim";
	else 
		cout<<"nao";
	
	return 0;
}
