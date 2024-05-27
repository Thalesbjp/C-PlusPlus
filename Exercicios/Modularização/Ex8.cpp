/*As rampas de acesso devem ter inclinação máxima de 8%, ou seja, rampas com inclinações acima de 8% são consideradas inadequadas. O cálculo da inclinação (dado em porcentagem) de uma rampa é dada pela seguinte equação: inclinacao = altura x 100 / base (comprimento da projeção horizontal da rampa). Crie um programa que calcule e exiba a inclinação de um acesso em um prédio formado por N rampas. Por fim, mostre quantas rampas estão adequadas (possuem inclinação menor ou igual a 8%).

Este programa deve conter um subprograma (função). O primeiro subprograma recebe dois números inteiros positivos como parâmetros e retorna um número float com o respectivo valor da inclinação.

Entradas:

número inteiro positivo que determina a quantidade de rampas
dois números inteiros positivos na mesma linha (separados por espaço), sendo o primeiro valor referente a altura (cm) e segundo valor referente a base (cm)
Saídas:

números em ponto flutuante com as inclinações das rampas
número inteiro com a quantidade de rampas com a inclinação adequada*/

#include <iostream>
using namespace std;

float inclinacaoDaRampa(int altura, int base){
	float inclinacao;
	inclinacao = altura*100.0/base;
	return inclinacao;
}

int main(){
	int quantidadeRampas, quantidadeinadequadra=0;
	int *altura, *base;
	float inclinacao = 0;
	
	cin >> quantidadeRampas;
	
	altura = new int[quantidadeRampas];
	base = new int[quantidadeRampas];
	
	for (int i=0; i<quantidadeRampas; i++){
		cin >> altura[i] >> base[i];
	}
	
	for (int i=0; i<quantidadeRampas; i++){
		inclinacao = inclinacaoDaRampa(altura[i], base[i]);
		cout << inclinacao << endl;
		if (inclinacao <= 8)	quantidadeinadequadra++;
	}
	 cout << quantidadeinadequadra;
	
	
	
	
	return 0;
}
