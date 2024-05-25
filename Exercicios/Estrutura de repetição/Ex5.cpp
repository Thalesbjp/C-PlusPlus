/*Em uma eleição presidencial existem quatro candidatos. Os votos são informados por código. Assuma que cada voto será fornecido em uma linha diferente. Os dados utilizados para o escrutínio obedecem à seguinte codificação:

Código	Significado
1, 2, 3, 4	voto para os respectivos candidatos 1, 2, 3 e 4
5	voto nulo
6	voto em branco
0	finalizador do conjunto de votos
Elabore um programa que calcule e exiba no dispositivo de saída padrão as seguintes informações:

o total de votos para cada candidato e seu percentual sobre o total;
o total de votos nulos e seu percentual sobre o total;
o total de votos brancos e seu percentual sobre o total;
o total de votos válidos (excluídos brancos e nulos) e o percentual sobre o total.
Entradas:

Sequência de números inteiros cujos valores estão compreendidos no intervalo [0,6]. Números diferentes de zero indicam o voto de um determinado indivíduo. O número zero indica que não há mais votos a serem computados.
Saídas:

Número inteiro X1 que indica a quantidade de votos no candidato 1 e número em ponto flutuante Y1 que indica o percentual de votos no candidato 1 sobre o total de votos. A saída deve estar no formato 1: X1 Y1
Número inteiro X2 que indica a quantidade de votos no candidato 2 e número em ponto flutuante Y2 que indica o percentual de votos no candidato 2 sobre o total de votos. A saída deve estar no formato 2: X2 Y2
Número inteiro X3 que indica a quantidade de votos no candidato 3 e número em ponto flutuante Y3 que indica o percentual de votos no candidato 3 sobre o total de votos. A saída deve estar no formato 3: X3 Y3
Número inteiro X4 que indica a quantidade de votos no candidato 4 e número em ponto flutuante Y4 que indica o percentual de votos no candidato 4 sobre o total de votos. A saída deve estar no formato 4: X4 Y4
Número inteiro X5 que indica a quantidade de votos nulos e número em ponto flutuante Y5 que indica o percentual de votos nulos sobre o total de votos. A saída deve estar no formato 5: X5 Y5
Número inteiro X6 que indica a quantidade de votos em branco e número em ponto flutuante Y6 que indica o percentual de votos em branco sobre o total de votos. A saída deve estar no formato 6: X6 Y6
Número inteiro X7 que indica a quantidade de votos válidos e número em ponto flutuante Y7 que indica o percentual de votos válidos sobre o total de votos. A saída deve estar no formato 7: X7 Y7*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int entrada, voto1=0, voto2=0, voto3=0, voto4=0, 
		votoNulo=0, votoBranco=0, totalVotos=0;
		
	cin >> entrada;
	
	while(entrada != 0){
		switch (entrada){
			case 1: voto1++;		break;
			case 2:	voto2++;		break;
			case 3:	voto3++;		break;
			case 4:	voto4++;		break;
			case 5:	votoNulo++;		break;
			case 6:	votoBranco++;	break;
		}
		totalVotos++;
		cin >> entrada;
	}

	cout << "1: " << voto1 << " " << (float)voto1/totalVotos << endl
		 << "2: " << voto2 << " " << float(voto2)/totalVotos << endl
		 << "3: " << voto3 << " " << float(voto3)/totalVotos << endl
		 << "4: " << voto4 << " " << float(voto4)/totalVotos << endl
		 << "5: " << votoNulo << " " << (float)votoNulo/totalVotos << endl
		 << "6: " << votoBranco << " " << (float)votoBranco/totalVotos << endl
		 << "7: " << voto1+voto2+voto3+voto4 << " " << float(voto1+voto2+voto3+voto4)/totalVotos;
	
	
	return 0;
}

