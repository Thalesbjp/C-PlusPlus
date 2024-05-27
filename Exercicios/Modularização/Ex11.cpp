/*Escreva um subprograma que receba um número arábico inteiro e retorne o seu correspondente em número romano. A função deve ser capaz de gerar o número romano para qualquer número natural no intervalo [1,50]. Caso seja digitado um valor fora do intervalo válido, uma mensagem "NUMERO INVALIDO" deve ser mostrada e o programa deve esperar por uma nova entrada. A execução deve ser encerrada se um valor negativo for digitado. As operações de leitura e escrita de dados devem ser realizadas na função principal.

Entradas:

Número arábico a ser convertido para número romano.
Saídas:

Número romano correspondente ao valor inserido.*/

#include <iostream>
#include <string>
using namespace std;

string arabicoPararomano (int num){
	string romano = "";
	if (num<1 or num>50)
		return "NUMERO INVALIDO";
		
	while (num > 0){
		if (num >=50){
			romano += "L";
			num -= 50;
		}else if(num >= 40){
			romano += "XL";
			num -= 40;
		}else if (num >= 10){
			romano += "X";
			num -= 10;
		}else if (num >= 9){
			romano += "IX";
			num -= 9;
		}else if (num >= 5){
			romano += "V";
			num -= 5;
		}else if (num >= 4){
			romano += "IV";
			num -= 4;			
		}else{
			romano += "I";
			num -= 1;	
		}
	}
	return romano;
}

int main(){
	int n;
	
	cin >> n;
	
	while (n>0){
		cout << arabicoPararomano(n) << endl;
		cin >> n;
	}
	return 0;
}
