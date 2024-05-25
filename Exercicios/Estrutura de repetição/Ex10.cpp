/*O Torneio Tribruxo é um campeonato entre escolas de magia, no qual é selecionado um representante (chamado campeão), através do Cálice de Fogo, para cada uma de três escolas participantes. Os campeões realizam, ao longo do ano, três tarefas diferentes e o vencedor recebe um grande prêmio. Faça um programa para auxiliar a equipe de organização do evento a determinar qual é o campeão mais popular entre os bruxos em um dado ano.

Seu programa deve inicialmente ler o nome de um arquivo de entrada de dados. O arquivo deverá conter os nomes dos três representantes do torneio [nomes sem espaço], sendo um por linha. Em seguida, deve ter um número inteiro indicando a quantidade de votos computados em uma pesquisa de popularidade realizada entre a comunidade bruxa. Esta pesquisa visa antecipar o nome do representante que será o provável vencedor do torneio. Por fim, o arquivo deverá ter a sequência de votos da pesquisa de popularidade.

Considere que os votos são representados pelos próprios nomes dos representantes. Seu programa deverá exibir no dispositivo de saída padrão a quantidade de votos do representante que obteve a melhor colocação na pesquisa de popularidade (maior número de votos). Assuma que nunca haverá empates ao calcular o maior número de votos. Assuma também que cada dado de entrada será estará em uma linha diferente do arquivo.

Entrada:

Nome do arquivo
Conteúdo do arquivo de entrada:

Os nomes dos três representantes de cada escola (um em cada linha).
Um número inteiro indicando a quantidade total de votos da pesquisa de popularidade.
Sequência de votos da pesquisa. Assuma um voto (nome do representante) em cada linha.
Saídas:

Número inteiro indicando a quantidade de votos que o representante mais popular recebeu.*/

#include <iostream>
#include <fstream>

using namespace std;

int main (){
	int quantidadeVotos, v1=0, v2=0, v3=0;
	string pessoa1, pessoa2, pessoa3, nomeArquivo, voto;
	
	cin >> nomeArquivo;
	
	ifstream arqEntrada (nomeArquivo);
	
	if (arqEntrada){
		arqEntrada >> pessoa1 >> pessoa2 >> pessoa3>> quantidadeVotos;
		while (arqEntrada>>voto){
			if (voto == pessoa1)
				v1++;
			if (voto == pessoa2)
				v2++;
			if (voto == pessoa3)
				v3++;
		}
	}
		
	if (v1 >= v2 and v1 >=v3)
		cout << v1;
	else if (v2 >=v3)
		cout << v2;
	else 
		cout << v3;
	
	
	return 0;
}
