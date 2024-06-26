/*José precisava inserir um conjunto de elementos válidos em um arquivo, sendo que um elemento é considerado válido se não é múltiplo de 3. Ele se atrapalhou e inseriu todos os elementos.

Você precisa criar um programa para ler o nome do arquivo informado na entrada padrão, percorrer o arquivo e apagar os elementos múltiplos de 3, gerando o arquivo "saida.txt". Para isso, seu programa deve ter uma função para calcular se o elemento é múltiplo de 3, que tenha como parâmetro o valor lido do arquivo e retorne -1 quando o número é múltiplo de 3 e o próprio elemento caso contrário.

A entrada e saída de dados devem ser feitas na função principal. Considere que haverá pelo menos um elemento válido no arquivo.

Entradas:

entrada padrão
o nome do arquivo de onde serão obtidos os valores inteiros
arquivo texto
vários números inteiros
Saída:

O arquivo "saida.txt" com somente os valores válidos (que não são múltiplos de 3)*/

#include <iostream>
#include <fstream>
using namespace std;

int multiploTres (int valor){
	if (valor%3 == 0)
		return -1;
	else
		return valor;
}

int main(){
	int val;
	string nomeArquivo;
	
	cin>>nomeArquivo;
	
	ifstream arqEntrada (nomeArquivo);
	ofstream arqSaida ("saida.txt");
		
	if (arqEntrada.is_open()){
		while (arqEntrada >> val){
			if (multiploTres(val) != -1)
				arqSaida << val << " ";
		}
	}
	

	arqEntrada.close();
	arqSaida.close();
		
	return 0;
}
