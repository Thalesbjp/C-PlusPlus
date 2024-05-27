/*Você foi designado para fazer um programa que converte unidades de distância, que pode ser de metros para centímetros ou vice-versa. Para isso, seu programa deve ter duas funções, uma para converter de metros para centímetros e outra para converter o inverso.

Cada função deve receber a distância como parâmetro (número real) e retornar a distância convertida.

ATENÇÃO! As funções de conversão devem ser utilizadas na função main, onde serão lidos os valores da distância e da unidade para qual a distância deve ser convertida. Na função main, depois de utilizada a função correta deverá ser mostrada na tela a distância convertida.
OBS: Caso seja fornecida uma unidade inválida, o programa deverá exibir a palavra ERRO como resposta.

Entradas:

Distância (real);
Unidade para qual deverá ser convertida (minúsculo, singular e sem acento)
Saída:

Distância convertida, seguida da abreviação da unidade (m ou cm). O valor e a identificação da unidade devem estar separados.*/

#include <iostream>

using namespace std;

float centimetroMetro(float v){
	return v/100;
}

float metroCentimetro(float v){
	return v*100;
}

int main(){
	float valor;
	string unidade;
	
	cin >> valor >> unidade;
	
	if (unidade == "centimetro"){
		cout << metroCentimetro(valor) << " cm"; 
	}else if (unidade == "metro"){
		cout << centimetroMetro(valor) << " m";
	}else{
		cout << "ERRO";
	}
	return 0;
}
