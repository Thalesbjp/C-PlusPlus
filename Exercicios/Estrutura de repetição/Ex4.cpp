/*Fazer um programa que calcule a progressão geométrica com razão R indicada pelo usuário. O programa deve imprimir os N primeiros termos da progressão (N é indicado pelo usuário).

O primeiro termo da progressão é sempre 1 (N igual a um). O segundo termo é 1*R. O terceiro é 1*R*R, e assim sucessivamente.

Entrada:

razão R da PG
número de termos N da PG a serem impressos
Saídas:

N primeiros termos da PG de razão R
Exemplo de entrada:

0.5
4
Exemplo de saída:

1
0.5
0.25
0.125*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int nPG, aux = 0;
	float rPG;
	
	cin >> rPG >> nPG;
	
	while(aux < nPG){
		cout << pow (rPG,aux) << endl;
		aux++;
	}
	return 0;
}

